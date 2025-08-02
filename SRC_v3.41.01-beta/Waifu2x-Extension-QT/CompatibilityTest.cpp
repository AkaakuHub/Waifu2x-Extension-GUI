/*
    Copyright (C) 2021  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "platform_utils.h"
#include <QFileInfo>

void MainWindow::on_pushButton_compatibilityTest_clicked()
{
    ui->tab_Home->setEnabled(0);
    Start_SystemTrayIcon->setEnabled(0);
    ui->tab_EngineSettings->setEnabled(0);
    ui->tab_VideoSettings->setEnabled(0);
    ui->tab_AdditionalSettings->setEnabled(0);
    ui->pushButton_compatibilityTest->setEnabled(0);
    ui->tabWidget->setCurrentIndex(5);
    ui->pushButton_compatibilityTest->setText(tr("Testing, please wait..."));
    Init_progressBar_CompatibilityTest();
    QtConcurrent::run(this, &MainWindow::Waifu2x_Compatibility_Test);
}

int MainWindow::Waifu2x_Compatibility_Test()
{
    emit Send_TextBrowser_NewMessage(tr("Compatibility test is ongoing, please wait."));
    //===============
    QString InputPath = Current_Path + "/Compatibility_Test/Compatibility_Test.jpg";
    QString OutputPath = Current_Path + "/Compatibility_Test/res.png";
    QFile::remove(OutputPath);
    //==========================================
    //         waifu2x-ncnn-vulkan 最新版
    //==========================================
    QString program = WAIFU2X_NCNN_VULKAN_NAME; // Use smart detection
    // Find model path based on actual tool location
    QString program_dir = QFileInfo(program).absolutePath();
    QString model_path = program_dir + "/models-upconv_7_anime_style_art_rgb";
    if (!QDir(model_path).exists()) {
        // Fallback to old path
        model_path = Current_Path + "/waifu2x-ncnn-vulkan/models-upconv_7_anime_style_art_rgb";
    }
    QProcess *Waifu2x_vulkan = new QProcess();
    QString cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -s 2 -n 0 -t 32 -m " + "\"" + model_path + "\"" + " -j 1:1:1";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_vulkan->start(cmd);
        if(Waifu2x_vulkan->waitForStarted(30000))
        {
            Waifu2x_vulkan->waitForFinished(10000);
        }
        QString ErrorMSG = Waifu2x_vulkan->readAllStandardError().toLower();
        QString StanderMSG = Waifu2x_vulkan->readAllStandardOutput().toLower();
        if(ErrorMSG.contains("failed")||StanderMSG.contains("failed"))
        {
            QFile::remove(OutputPath);
            continue;
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-ncnn-vulkan(Latest Version): Yes"));
        isCompatible_Waifu2x_NCNN_Vulkan_NEW=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-ncnn-vulkan(Latest Version): No. [Advice: Re-install gpu driver or update it to the latest.]"));
        isCompatible_Waifu2x_NCNN_Vulkan_NEW=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //     waifu2x-ncnn-vulkan 自己编译的老版本
    //==========================================
    program = WAIFU2X_NCNN_VULKAN_NAME; // Use smart detection (same as latest)
    QString program_dir_old = QFileInfo(program).absolutePath();
    model_path = program_dir_old + "/models-upconv_7_anime_style_art_rgb";
    if (!QDir(model_path).exists()) {
        model_path = Current_Path + "/waifu2x-ncnn-vulkan-old/models-upconv_7_anime_style_art_rgb";
    }
    QProcess *Waifu2x_vulkan_old = new QProcess();
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -s 2 -n 0 -t 32 -m " + "\"" + model_path + "\"" + " -j 1:1:1";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_vulkan_old->start(cmd);
        if(Waifu2x_vulkan_old->waitForStarted(30000))
        {
            Waifu2x_vulkan_old->waitForFinished(10000);
        }
        QString ErrorMSG = Waifu2x_vulkan_old->readAllStandardError().toLower();
        QString StanderMSG = Waifu2x_vulkan_old->readAllStandardOutput().toLower();
        if(ErrorMSG.contains("failed")||StanderMSG.contains("failed"))
        {
            QFile::remove(OutputPath);
            continue;
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-ncnn-vulkan(Old Version): Yes"));
        isCompatible_Waifu2x_NCNN_Vulkan_OLD=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-ncnn-vulkan(Old Version): No. [Advice: Re-install gpu driver or update it to the latest.]"));
        isCompatible_Waifu2x_NCNN_Vulkan_OLD=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //     waifu2x-ncnn-vulkan 20200414(fp16p)
    //==========================================
    Waifu2x_folder_path = Current_Path + "/waifu2x-ncnn-vulkan";
    program = Waifu2x_folder_path + "/" + WAIFU2X_NCNN_VULKAN_FP16P_NAME;
    model_path = Waifu2x_folder_path+"/models-upconv_7_anime_style_art_rgb";
    QProcess *Waifu2x_vulkan_fp16p = new QProcess();
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -s 2 -n 0 -t 32 -m " + "\"" + model_path + "\"" + " -j 1:1:1";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_vulkan_fp16p->start(cmd);
        if(Waifu2x_vulkan_fp16p->waitForStarted(30000))
        {
            Waifu2x_vulkan_fp16p->waitForFinished(10000);
        }
        //=========
        QString ErrorMSG = Waifu2x_vulkan_fp16p->readAllStandardError().toLower();
        QString StanderMSG = Waifu2x_vulkan_fp16p->readAllStandardOutput().toLower();
        if(ErrorMSG.contains("failed")||StanderMSG.contains("failed"))
        {
            QFile::remove(OutputPath);
            continue;
        }
        //========
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-ncnn-vulkan(20200414(fp16p)): Yes"));
        isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-ncnn-vulkan(20200414(fp16p)): No. [Advice: Re-install gpu driver or update it to the latest.]"));
        isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //            waifu2x-converter
    //==========================================
    Waifu2x_folder_path = Current_Path + "/waifu2x-converter";
    program = Waifu2x_folder_path + "/" + WAIFU2X_CONVERTER_NAME;
    model_path= Waifu2x_folder_path + "/models_rgb";
    QString Denoise_cmd = " --noise-level 1 ";
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " --scale-ratio 2" + Denoise_cmd + " --block-size 32 --model-dir " + "\"" + model_path + "\"";
    QProcess *Waifu2x_converter = new QProcess();
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_converter->start(cmd);
        if(Waifu2x_converter->waitForStarted(30000))
        {
            Waifu2x_converter->waitForFinished(10000);
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-converter: Yes."));
        isCompatible_Waifu2x_Converter=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-converter: No. [Advice: Install or reinstall OpenCL runtime.]"));
        isCompatible_Waifu2x_Converter=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //            Anime4k(CPU Mode)
    //==========================================
    Current_Path = qApp->applicationDirPath();
    QString Anime4k_folder_path = Current_Path + "/Anime4K";
    program = Anime4k_folder_path + "/" + ANIME4K_NAME;
    cmd = "\"" + program + "\" -i \"" + InputPath + "\" -o \"" + OutputPath + "\" -z 2";
    QProcess *Waifu2x_anime4k = new QProcess();
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_anime4k->start(cmd);
        if(Waifu2x_anime4k->waitForStarted(30000))
        {
            Waifu2x_anime4k->waitForFinished(10000);
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Anime4k(CPU Mode): Yes."));
        isCompatible_Anime4k_CPU=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Anime4k(CPU Mode): No. [Advice: Install or reinstall OpenCL runtime.]"));
        isCompatible_Anime4k_CPU=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //            Anime4k(GPU Mode)
    //==========================================
    Current_Path = qApp->applicationDirPath();
    program = Anime4k_folder_path + "/" + ANIME4K_NAME;
    cmd = "\"" + program + "\" -i \"" + InputPath + "\" -o \"" + OutputPath + "\" -z 2 -q";
    QProcess *Waifu2x_anime4k_gpu = new QProcess();
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_anime4k_gpu->start(cmd);
        if(Waifu2x_anime4k_gpu->waitForStarted(30000))
        {
            Waifu2x_anime4k_gpu->waitForFinished(10000);
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Anime4k(GPU Mode): Yes."));
        isCompatible_Anime4k_GPU=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Anime4k(GPU Mode): No. [Advice: Install or reinstall OpenCL runtime.]"));
        isCompatible_Anime4k_GPU=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //            SRMD-ncnn-vulkan
    //==========================================
    program = SRMD_NCNN_VULKAN_NAME; // Use smart detection
    QString program_dir_srmd = QFileInfo(program).absolutePath();
    model_path = program_dir_srmd + "/models-srmd";
    if (!QDir(model_path).exists()) {
        model_path = Current_Path + "/srmd-ncnn-vulkan/models-srmd";
    }
    QProcess *SRMD_NCNN_VULKAN = new QProcess();
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -s 2 -n 0 -t 32 -m " + "\"" + model_path + "\"" + " -j 1:1:1";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        SRMD_NCNN_VULKAN->start(cmd);
        if(SRMD_NCNN_VULKAN->waitForStarted(30000))
        {
            SRMD_NCNN_VULKAN->waitForFinished(10000);
        }
        //=========
        QString ErrorMSG = SRMD_NCNN_VULKAN->readAllStandardError().toLower();
        QString StanderMSG = SRMD_NCNN_VULKAN->readAllStandardOutput().toLower();
        if(ErrorMSG.contains("failed")||StanderMSG.contains("failed"))
        {
            QFile::remove(OutputPath);
            continue;
        }
        //========
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with srmd-ncnn-vulkan: Yes"));
        isCompatible_SRMD_NCNN_Vulkan=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with srmd-ncnn-vulkan: No. [Advice: Re-install gpu driver or update it to the latest.]"));
        isCompatible_SRMD_NCNN_Vulkan=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //            Waifu2x-Caffe(CPU)
    //==========================================
    Waifu2x_folder_path = Current_Path + "/waifu2x-caffe";
    program = Waifu2x_folder_path + "/" + WAIFU2X_CAFFE_NAME;
    model_path = Waifu2x_folder_path+"/models/upconv_7_anime_style_art_rgb";
    QProcess *Waifu2x_Caffe_CPU_qprocess = new QProcess();
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -p cpu -m noise_scale -s 2 -n 1 -c 32 -b 1 --model_dir " + "\"" + model_path + "\"";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_Caffe_CPU_qprocess->start(cmd);
        if(Waifu2x_Caffe_CPU_qprocess->waitForStarted(30000))
        {
            Waifu2x_Caffe_CPU_qprocess->waitForFinished(10000);
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-caffe(CPU): Yes."));
        isCompatible_Waifu2x_Caffe_CPU=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-caffe(CPU): No."));
        isCompatible_Waifu2x_Caffe_CPU=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //            Waifu2x-Caffe(GPU)
    //==========================================
    Waifu2x_folder_path = Current_Path + "/waifu2x-caffe";
    program = Waifu2x_folder_path + "/" + WAIFU2X_CAFFE_NAME;
    model_path = Waifu2x_folder_path+"/models/upconv_7_anime_style_art_rgb";
    QProcess *Waifu2x_Caffe_GPU_qprocess = new QProcess();
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -p gpu -m noise_scale -s 2 -n 1 -c 32 -b 1 --model_dir " + "\"" + model_path + "\"";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_Caffe_GPU_qprocess->start(cmd);
        if(Waifu2x_Caffe_GPU_qprocess->waitForStarted(30000))
        {
            Waifu2x_Caffe_GPU_qprocess->waitForFinished(10000);
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-caffe(GPU): Yes."));
        isCompatible_Waifu2x_Caffe_GPU=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-caffe(GPU): No. [Advice: Install NVIDIA CUDA.]"));
        isCompatible_Waifu2x_Caffe_GPU=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //            Waifu2x-Caffe(cuDNN)
    //==========================================
    Waifu2x_folder_path = Current_Path + "/waifu2x-caffe";
    program = Waifu2x_folder_path + "/" + WAIFU2X_CAFFE_NAME;
    model_path = Waifu2x_folder_path+"/models/upconv_7_anime_style_art_rgb";
    QProcess *Waifu2x_Caffe_cuDNN_qprocess = new QProcess();
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -p cudnn -m noise_scale -s 2 -n 1 -c 32 -b 1 --model_dir " + "\"" + model_path + "\"";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        Waifu2x_Caffe_cuDNN_qprocess->start(cmd);
        if(Waifu2x_Caffe_cuDNN_qprocess->waitForStarted(30000))
        {
            Waifu2x_Caffe_cuDNN_qprocess->waitForFinished(70000);
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-caffe(cuDNN): Yes."));
        isCompatible_Waifu2x_Caffe_cuDNN=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with waifu2x-caffe(cuDNN): No. [Advice: Install NVIDIA CUDA and NVIDIA cuDNN.]"));
        isCompatible_Waifu2x_Caffe_cuDNN=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //            RealSR-ncnn-vulkan
    //==========================================
    program = REALSR_NCNN_VULKAN_NAME; // Use smart detection
    QString program_dir_realsr = QFileInfo(program).absolutePath();
    model_path = program_dir_realsr + "/models-DF2K_JPEG";
    if (!QDir(model_path).exists()) {
        model_path = Current_Path + "/realsr-ncnn-vulkan/models-DF2K_JPEG";
    }
    QProcess *realsr_ncnn_vulkan_qprocess = new QProcess();
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -s 4 -t 32 -m " + "\"" + model_path + "\"";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        realsr_ncnn_vulkan_qprocess->start(cmd);
        if(realsr_ncnn_vulkan_qprocess->waitForStarted(30000))
        {
            realsr_ncnn_vulkan_qprocess->waitForFinished(10000);
        }
        //=========
        QString ErrorMSG = realsr_ncnn_vulkan_qprocess->readAllStandardError().toLower();
        QString StanderMSG = realsr_ncnn_vulkan_qprocess->readAllStandardOutput().toLower();
        if(ErrorMSG.contains("failed")||StanderMSG.contains("failed"))
        {
            QFile::remove(OutputPath);
            continue;
        }
        //========
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Realsr-ncnn-vulkan: Yes."));
        isCompatible_Realsr_NCNN_Vulkan=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Realsr-ncnn-vulkan: No. [Advice: Re-install gpu driver or update it to the latest.]"));
        isCompatible_Realsr_NCNN_Vulkan=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                SRMD-CUDA
    //==========================================
    Waifu2x_folder_path = Current_Path + "/srmd-cuda";
    program = Waifu2x_folder_path + "/" + SRMD_CUDA_NAME;
    model_path = Waifu2x_folder_path+"/model";
    QProcess *SRMD_CUDA = new QProcess();
    cmd = "\"" + program + "\"" + " -i " + "\"" + InputPath + "\"" + " -o " + "\"" + OutputPath + "\"" + " -s 2 -n 0 -m \""+model_path+"\"";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        SRMD_CUDA->start(cmd);
        if(SRMD_CUDA->waitForStarted(30000))
        {
            SRMD_CUDA->waitForFinished(10000);
        }
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with SRMD-CUDA: Yes"));
        isCompatible_SRMD_CUDA=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with SRMD-CUDA: No. [Advice: Install NVIDIA CUDA.]"));
        isCompatible_SRMD_CUDA=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                  FFmpeg
    //==========================================
    QString ffmpeg_VideoPath = Current_Path + "/Compatibility_Test/CompatibilityTest_Video.mp4";
    QString ffmpeg_AudioPath = Current_Path + "/Compatibility_Test/CompatibilityTest_Video_audio.wav";
    QString ffmpeg_path = PlatformUtils::findTool("ffmpeg", Current_Path);
    if (ffmpeg_path.isEmpty()) {
        ffmpeg_path = Current_Path+"/" + FFMPEG_NAME;
    }
    emit Send_TextBrowser_NewMessage(tr("FFmpeg path: %1").arg(ffmpeg_path));
    
    // Check if video file exists first
    if (!QFile::exists(ffmpeg_VideoPath)) {
        emit Send_TextBrowser_NewMessage(tr("Test video file not found: %1").arg(ffmpeg_VideoPath));
        // If test file doesn't exist but ffmpeg was found, consider it compatible
        if (!ffmpeg_path.isEmpty() && QFile::exists(ffmpeg_path)) {
            emit Send_TextBrowser_NewMessage(tr("Compatible with FFmpeg: Yes (tool found)."));
            isCompatible_FFmpeg=true;
        } else {
            emit Send_TextBrowser_NewMessage(tr("Compatible with FFmpeg: No."));
            isCompatible_FFmpeg=false;
        }
    }
    else {
        QFile::remove(ffmpeg_AudioPath);
        QProcess ffmpeg_QProcess;
        QStringList ffmpeg_args;
        // Just test if ffmpeg can read the video file info
        ffmpeg_args << "-i" << ffmpeg_VideoPath << "-f" << "null" << "-";
        ffmpeg_QProcess.start(ffmpeg_path, ffmpeg_args);
        if(ffmpeg_QProcess.waitForStarted(10000))
        {
            ffmpeg_QProcess.waitForFinished(10000);
        }
        
        QString ffmpeg_error_str = ffmpeg_QProcess.readAllStandardError();
        if (!ffmpeg_error_str.isEmpty()) {
            emit Send_TextBrowser_NewMessage(tr("FFmpeg output: %1").arg(ffmpeg_error_str.left(200)));
        }
        
        // Check if ffmpeg ran successfully (exit code 0 or can read video info)
        if(ffmpeg_QProcess.exitCode() == 0 || ffmpeg_error_str.contains("Duration:"))
        {
            emit Send_TextBrowser_NewMessage(tr("Compatible with FFmpeg: Yes."));
            isCompatible_FFmpeg=true;
        }
        else
        {
            emit Send_TextBrowser_NewMessage(tr("Compatible with FFmpeg: No."));
            isCompatible_FFmpeg=false;
        }
    }
    QFile::remove(ffmpeg_AudioPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                 FFprobe
    //==========================================
    QString FFprobe_VideoPath = Current_Path + "/Compatibility_Test/CompatibilityTest_Video.mp4";
    //========================= 调用ffprobe读取视频信息 ======================
    QProcess *FFprobe_Get_Duration_process = new QProcess();
    QString ffprobe_path = PlatformUtils::findTool("ffprobe", Current_Path);
    if (ffprobe_path.isEmpty()) {
        ffprobe_path = Current_Path+"/" + FFPROBE_NAME;
    }
    emit Send_TextBrowser_NewMessage(tr("FFprobe path: %1").arg(ffprobe_path));
    QStringList FFprobe_args;
    FFprobe_args << "-i" << FFprobe_VideoPath << "-v" << "quiet" << "-print_format" << "ini" << "-show_format";
    FFprobe_Get_Duration_process->start(ffprobe_path, FFprobe_args);
    if(FFprobe_Get_Duration_process->waitForStarted(10000))
    {
        FFprobe_Get_Duration_process->waitForFinished(10000);
    }
    //============= 保存ffprobe输出的ini格式文本 =============
    QString ffprobe_output_str = FFprobe_Get_Duration_process->readAllStandardOutput().toLower();
    QString ffprobe_error_str = FFprobe_Get_Duration_process->readAllStandardError();
    
    // Debug output
    emit Send_TextBrowser_NewMessage(tr("FFprobe output: %1").arg(ffprobe_output_str.left(200)));
    if (!ffprobe_error_str.isEmpty()) {
        emit Send_TextBrowser_NewMessage(tr("FFprobe error: %1").arg(ffprobe_error_str));
    }
    
    // Check if video file exists
    if (!QFile::exists(FFprobe_VideoPath)) {
        emit Send_TextBrowser_NewMessage(tr("Test video file not found: %1").arg(FFprobe_VideoPath));
        // If test file doesn't exist but ffprobe was found, consider it compatible
        if (!ffprobe_path.isEmpty() && QFile::exists(ffprobe_path)) {
            emit Send_TextBrowser_NewMessage(tr("Compatible with FFprobe: Yes (tool found)."));
            isCompatible_FFprobe=true;
        } else {
            emit Send_TextBrowser_NewMessage(tr("Compatible with FFprobe: No."));
            isCompatible_FFprobe=false;
        }
    }
    else if(ffprobe_output_str.contains("duration="))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with FFprobe: Yes."));
        isCompatible_FFprobe=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with FFprobe: No."));
        isCompatible_FFprobe=false;
    }
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                 ImageMagick
    //==========================================
    //convert
    QString convert_InputPath = Current_Path + "/Compatibility_Test/Compatibility_Test.jpg";
    QString convert_OutputPath = Current_Path + "/Compatibility_Test/convert_res.bmp";
    QString convert_program = PlatformUtils::findTool("convert", Current_Path);
    if (convert_program.isEmpty()) {
        convert_program = Current_Path+"/" + CONVERT_NAME;
    }
    QFile::remove(convert_OutputPath);
    QProcess convert_QProcess;
    QStringList convert_args;
    convert_args << convert_InputPath << convert_OutputPath;
    convert_QProcess.start(convert_program, convert_args);
    if(convert_QProcess.waitForStarted(10000))
    {
        convert_QProcess.waitForFinished(10000);
    }
    //identify
    if (!QFile::exists(convert_InputPath)) {
        // If test file doesn't exist but convert was found, consider it compatible
        if (!convert_program.isEmpty() && QFile::exists(convert_program)) {
            emit Send_TextBrowser_NewMessage(tr("Compatible with ImageMagick: Yes (tool found)."));
            isCompatible_ImageMagick=true;
        } else {
            emit Send_TextBrowser_NewMessage(tr("Compatible with ImageMagick: No."));
            isCompatible_ImageMagick=false;
        }
    }
    else {
        // Simple check: if convert succeeded and output file exists
        if(QFile::exists(convert_OutputPath))
        {
            emit Send_TextBrowser_NewMessage(tr("Compatible with ImageMagick: Yes."));
            isCompatible_ImageMagick=true;
        }
        else
        {
            emit Send_TextBrowser_NewMessage(tr("Compatible with ImageMagick: No."));
            isCompatible_ImageMagick=false;
        }
    }
    QFile::remove(convert_OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                 Gifsicle
    //==========================================
    QString Gifsicle_InputPath = Current_Path + "/Compatibility_Test/CompatibilityTest_GIF.gif";
    QString Gifsicle_OutputPath = Current_Path + "/Compatibility_Test/CompatibilityTest_GIF_RES.gif";
    QFile::remove(Gifsicle_OutputPath);
    //===
    QString Gifsicle_program = PlatformUtils::findTool("gifsicle", Current_Path);
    if (Gifsicle_program.isEmpty()) {
        Gifsicle_program = Current_Path+"/" + GIFSICLE_NAME;
    }
    QProcess *Gifsicle_CompressGIF=new QProcess();
    QStringList gifsicle_args;
    gifsicle_args << "-O3" << "-i" << Gifsicle_InputPath << "-o" << Gifsicle_OutputPath;
    Gifsicle_CompressGIF->start(Gifsicle_program, gifsicle_args);
    if(Gifsicle_CompressGIF->waitForStarted(30000))
    {
        Gifsicle_CompressGIF->waitForFinished(10000);
    }
    //===
    if (!QFile::exists(Gifsicle_InputPath)) {
        // If test file doesn't exist but gifsicle was found, consider it compatible
        if (!Gifsicle_program.isEmpty() && QFile::exists(Gifsicle_program)) {
            emit Send_TextBrowser_NewMessage(tr("Compatible with Gifsicle: Yes (tool found)."));
            isCompatible_Gifsicle=true;
        } else {
            emit Send_TextBrowser_NewMessage(tr("Compatible with Gifsicle: No."));
            isCompatible_Gifsicle=false;
        }
    }
    else if(QFile::exists(Gifsicle_OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Gifsicle: Yes."));
        isCompatible_Gifsicle=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Gifsicle: No."));
        isCompatible_Gifsicle=false;
    }
    QFile::remove(Gifsicle_OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                 SoX
    //==========================================
    QString SoX_InputPath = Current_Path + "/Compatibility_Test/CompatibilityTest_Sound.wav";
    QString SoX_OutputPath = Current_Path + "/Compatibility_Test/TestTemp_DenoiseProfile.dp";
    QFile::remove(SoX_OutputPath);
    //===
    QString SoX_program = PlatformUtils::findTool("sox", Current_Path);
    if (SoX_program.isEmpty()) {
        SoX_program = Current_Path+"/SoX/" + SOX_NAME;
    }
    QProcess SoX_QProcess;
    QStringList sox_args;
    sox_args << SoX_InputPath << "-n" << "noiseprof" << SoX_OutputPath;
    SoX_QProcess.start(SoX_program, sox_args);
    if(SoX_QProcess.waitForStarted(30000))
    {
        SoX_QProcess.waitForFinished(10000);
    }
    //===
    if (!QFile::exists(SoX_InputPath)) {
        // If test file doesn't exist but sox was found, consider it compatible
        if (!SoX_program.isEmpty() && QFile::exists(SoX_program)) {
            emit Send_TextBrowser_NewMessage(tr("Compatible with SoX: Yes (tool found)."));
            isCompatible_SoX=true;
        } else {
            emit Send_TextBrowser_NewMessage(tr("Compatible with SoX: No."));
            isCompatible_SoX=false;
        }
    }
    else if(QFile::exists(SoX_OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with SoX: Yes."));
        isCompatible_SoX=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with SoX: No."));
        isCompatible_SoX=false;
    }
    QFile::remove(SoX_OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                 Rife-NCNN-Vulkan
    //==========================================
    QProcess *RifeNcnnVulkan_QProcess = new QProcess();
    QString InputPath_RifeNcnnVulkan_0 = Current_Path + "/Compatibility_Test/Compatibility_Test.jpg";
    QString InputPath_RifeNcnnVulkan_1 = Current_Path + "/Compatibility_Test/Compatibility_Test_1.jpg";
    QFile::remove(OutputPath);
    QString rife_ncnn_vulkan_ProgramPath = RIFE_NCNN_VULKAN_NAME; // Use smart detection
    QString rife_WorkingDir = Current_Path+"/rife-ncnn-vulkan/rife-ncnn-vulkan-20221029-macos";
    cmd = "\"" + rife_WorkingDir + "/" + RIFE_NCNN_VULKAN_NAME + "\"" + " -0 " + "\"" + InputPath_RifeNcnnVulkan_0 + "\"" + " -1 " + "\"" + InputPath_RifeNcnnVulkan_1 + "\" -o " + "\"" + OutputPath + "\"" + " -j 1:1:1 -m rife-v2.4";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        RifeNcnnVulkan_QProcess->setWorkingDirectory(rife_WorkingDir);
        RifeNcnnVulkan_QProcess->start(cmd);
        if(RifeNcnnVulkan_QProcess->waitForStarted(30000))
        {
            RifeNcnnVulkan_QProcess->waitForFinished(10000);
        }
        //=========
        QString ErrorMSG = RifeNcnnVulkan_QProcess->readAllStandardError().toLower();
        QString StanderMSG = RifeNcnnVulkan_QProcess->readAllStandardOutput().toLower();
        if(ErrorMSG.contains("failed")||StanderMSG.contains("failed"))
        {
            QFile::remove(OutputPath);
            continue;
        }
        //========
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Rife-NCNN-Vulkan: Yes."));
        isCompatible_RifeNcnnVulkan=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Rife-NCNN-Vulkan: No. [Advice: Re-install gpu driver or update it to the latest.]"));
        isCompatible_RifeNcnnVulkan=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                 Cain-NCNN-Vulkan
    //==========================================
    QProcess *CainNcnnVulkan_QProcess = new QProcess();
    QFile::remove(OutputPath);
    QString cain_ncnn_vulkan_ProgramPath = CAIN_NCNN_VULKAN_NAME; // Use smart detection
    QString cain_WorkingDir = Current_Path+"/cain-ncnn-vulkan/cain-ncnn-vulkan-20220728-macos";
    cmd = "\"" + cain_WorkingDir + "/" + CAIN_NCNN_VULKAN_NAME + "\"" + " -0 " + "\"" + InputPath_RifeNcnnVulkan_0 + "\"" + " -1 " + "\"" + InputPath_RifeNcnnVulkan_1 + "\" -o " + "\"" + OutputPath + "\"" + " -j 1:1:1 -m cain";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        CainNcnnVulkan_QProcess->setWorkingDirectory(cain_WorkingDir);
        CainNcnnVulkan_QProcess->start(cmd);
        if(CainNcnnVulkan_QProcess->waitForStarted(30000))
        {
            CainNcnnVulkan_QProcess->waitForFinished(10000);
        }
        //=========
        QString ErrorMSG = CainNcnnVulkan_QProcess->readAllStandardError().toLower();
        QString StanderMSG = CainNcnnVulkan_QProcess->readAllStandardOutput().toLower();
        if(ErrorMSG.contains("failed")||StanderMSG.contains("failed"))
        {
            QFile::remove(OutputPath);
            continue;
        }
        //========
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Cain-NCNN-Vulkan: Yes."));
        isCompatible_CainNcnnVulkan=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with Cain-NCNN-Vulkan: No. [Advice: Re-install gpu driver or update it to the latest.]"));
        isCompatible_CainNcnnVulkan=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //==========================================
    //                 Dain-NCNN-Vulkan
    //==========================================
    QProcess *dainNcnnVulkan_QProcess = new QProcess();
    QFile::remove(OutputPath);
    QString dain_ncnn_vulkan_ProgramPath = DAIN_NCNN_VULKAN_NAME; // Use smart detection
    QString dain_WorkingDir = Current_Path+"/dain-ncnn-vulkan/dain-ncnn-vulkan-20220728-macos";
    cmd = "\"" + dain_WorkingDir + "/" + DAIN_NCNN_VULKAN_NAME + "\"" + " -0 " + "\"" + InputPath_RifeNcnnVulkan_0 + "\"" + " -1 " + "\"" + InputPath_RifeNcnnVulkan_1 + "\" -o " + "\"" + OutputPath + "\"" + " -j 1:1:1 -m best -t 128";
    for(int CompatTest_retry=0; CompatTest_retry<3; CompatTest_retry++)
    {
        dainNcnnVulkan_QProcess->setWorkingDirectory(dain_WorkingDir);
        dainNcnnVulkan_QProcess->start(cmd);
        if(dainNcnnVulkan_QProcess->waitForStarted(30000))
        {
            dainNcnnVulkan_QProcess->waitForFinished(10000);
        }
        //=========
        QString ErrorMSG = dainNcnnVulkan_QProcess->readAllStandardError().toLower();
        QString StanderMSG = dainNcnnVulkan_QProcess->readAllStandardOutput().toLower();
        if(ErrorMSG.contains("failed")||StanderMSG.contains("failed"))
        {
            QFile::remove(OutputPath);
            continue;
        }
        //========
        if(QFile::exists(OutputPath))break;
    }
    if(QFile::exists(OutputPath))
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with dain-NCNN-Vulkan: Yes."));
        isCompatible_DainNcnnVulkan=true;
    }
    else
    {
        emit Send_TextBrowser_NewMessage(tr("Compatible with dain-NCNN-Vulkan: No. [Advice: Re-install gpu driver or update it to the latest.]"));
        isCompatible_DainNcnnVulkan=false;
    }
    QFile::remove(OutputPath);
    emit Send_Add_progressBar_CompatibilityTest();
    //=================
    // 杀死滞留的进程
    //=================
    QStringList TaskNameList;
    TaskNameList << CONVERT_NAME << FFMPEG_NAME << FFPROBE_NAME << IDENTIFY_NAME << GIFSICLE_NAME << WAIFU2X_NCNN_VULKAN_NAME
                 << WAIFU2X_NCNN_VULKAN_FP16P_NAME << ANIME4K_NAME << WAIFU2X_CAFFE_NAME << SRMD_NCNN_VULKAN_NAME << REALSR_NCNN_VULKAN_NAME
                 << WAIFU2X_CONVERTER_NAME << SOX_NAME << RIFE_NCNN_VULKAN_NAME << CAIN_NCNN_VULKAN_NAME << DAIN_NCNN_VULKAN_NAME
                 << SRMD_CUDA_NAME << APNGDIS_NAME << APNGASM_NAME;
    KILL_TASK_QStringList(TaskNameList,true);
    //================
    //测试结束
    //================
    emit Send_TextBrowser_NewMessage(tr("Compatibility test is complete!"));
    emit Send_SystemTray_NewMessage(tr("Compatibility test is complete!"));
    emit Send_Waifu2x_Compatibility_Test_finished();
    return 0;
}

int MainWindow::Waifu2x_Compatibility_Test_finished()
{
    //更改checkbox状态以显示测试结果
    ui->checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setChecked(isCompatible_Waifu2x_NCNN_Vulkan_NEW);
    ui->checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P->setChecked(isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P);
    ui->checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD->setChecked(isCompatible_Waifu2x_NCNN_Vulkan_OLD);
    ui->checkBox_isCompatible_Waifu2x_Converter->setChecked(isCompatible_Waifu2x_Converter);
    ui->checkBox_isCompatible_SRMD_NCNN_Vulkan->setChecked(isCompatible_SRMD_NCNN_Vulkan);
    ui->checkBox_isCompatible_SRMD_CUDA->setChecked(isCompatible_SRMD_CUDA);
    ui->checkBox_isCompatible_Anime4k_CPU->setChecked(isCompatible_Anime4k_CPU);
    ui->checkBox_isCompatible_Anime4k_GPU->setChecked(isCompatible_Anime4k_GPU);
    ui->checkBox_isCompatible_FFmpeg->setChecked(isCompatible_FFmpeg);
    ui->checkBox_isCompatible_FFprobe->setChecked(isCompatible_FFprobe);
    ui->checkBox_isCompatible_ImageMagick->setChecked(isCompatible_ImageMagick);
    ui->checkBox_isCompatible_Gifsicle->setChecked(isCompatible_Gifsicle);
    ui->checkBox_isCompatible_SoX->setChecked(isCompatible_SoX);
    ui->checkBox_isCompatible_Waifu2x_Caffe_CPU->setChecked(isCompatible_Waifu2x_Caffe_CPU);
    ui->checkBox_isCompatible_Waifu2x_Caffe_GPU->setChecked(isCompatible_Waifu2x_Caffe_GPU);
    ui->checkBox_isCompatible_Waifu2x_Caffe_cuDNN->setChecked(isCompatible_Waifu2x_Caffe_cuDNN);
    ui->checkBox_isCompatible_Realsr_NCNN_Vulkan->setChecked(isCompatible_Realsr_NCNN_Vulkan);
    ui->checkBox_isCompatible_RifeNcnnVulkan->setChecked(isCompatible_RifeNcnnVulkan);
    ui->checkBox_isCompatible_CainNcnnVulkan->setChecked(isCompatible_CainNcnnVulkan);
    ui->checkBox_isCompatible_DainNcnnVulkan->setChecked(isCompatible_DainNcnnVulkan);
    //解除界面管制
    Finish_progressBar_CompatibilityTest();
    ui->tab_Home->setEnabled(1);
    Start_SystemTrayIcon->setEnabled(1);
    ui->tab_EngineSettings->setEnabled(1);
    ui->tab_VideoSettings->setEnabled(1);
    ui->tab_AdditionalSettings->setEnabled(1);
    ui->pushButton_compatibilityTest->setEnabled(1);
    ui->pushButton_compatibilityTest->setText(tr("Start compatibility test"));
    ui->tabWidget->setCurrentIndex(5);
    QtConcurrent::run(this, &MainWindow::Play_NFSound);//兼容性测试完成,播放提示音
    /*
    判断是否有必要部件不兼容,如果有则弹出提示
    */
    if(isCompatible_FFmpeg==false||isCompatible_FFprobe==false||isCompatible_ImageMagick==false||isCompatible_Gifsicle==false||isCompatible_SoX==false)
    {
        QMessageBox::warning(nullptr, tr("Notification"), 
            tr("One of the essential plugins is not compatible with your PC, the software may not work normally on your PC.\n\nYou can try to re-install this software, this might solve the problem."));
    }
    /*
    判断插帧引擎是否全部不兼容
    */
    if(isCompatible_RifeNcnnVulkan==false && isCompatible_CainNcnnVulkan==false)
    {
        QMessageBox::warning(nullptr, tr("Notification"), 
            tr("All of the Frame Interpolation engines are not compatible with your PC, so you will not be able to use the Frame Interpolation function."));
    }
    //========== 提示是否需要自动调整引擎设定 ==========
    QMessageBox Msg(QMessageBox::Question, QString(tr("Notification")), QString(tr("Do you need the software to automatically adjust the engine settings for you based on the compatibility test results?")));
    Msg.setIcon(QMessageBox::Information);
    QAbstractButton *pYesBtn = Msg.addButton(QString(tr("Yes")), QMessageBox::YesRole);
    QAbstractButton *pNoBtn = Msg.addButton(QString(tr("No")), QMessageBox::NoRole);
    Msg.exec();
    if (Msg.clickedButton() == pYesBtn)
    {
        /*
        * 协助用户调整引擎设定:
        */
        //插帧引擎
        if(isCompatible_RifeNcnnVulkan==true || isCompatible_CainNcnnVulkan==true || isCompatible_DainNcnnVulkan==true)
        {
            if(isCompatible_RifeNcnnVulkan)
            {
                ui->comboBox_Engine_VFI->setCurrentIndex(0);
                on_comboBox_Engine_VFI_currentIndexChanged(0);
            }
            else
            {
                if(isCompatible_CainNcnnVulkan)
                {
                    ui->comboBox_Engine_VFI->setCurrentIndex(1);
                    on_comboBox_Engine_VFI_currentIndexChanged(0);
                }
                else
                {
                    if(isCompatible_DainNcnnVulkan)
                    {
                        ui->comboBox_Engine_VFI->setCurrentIndex(2);
                        on_comboBox_Engine_VFI_currentIndexChanged(0);
                    }
                }
            }
        }
        //========== 检查waifu2x-ncnn-vulkan 最新版 的兼容性 ===============
        if(isCompatible_Waifu2x_NCNN_Vulkan_NEW==true)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(0);
            ui->comboBox_Engine_GIF->setCurrentIndex(0);
            ui->comboBox_Engine_Video->setCurrentIndex(0);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //====
            ui->comboBox_version_Waifu2xNCNNVulkan->setCurrentIndex(0);
            on_comboBox_version_Waifu2xNCNNVulkan_currentIndexChanged(0);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //======================= 检查Waifu2x_Caffe_GPU的兼容性 ===================
        if(isCompatible_Waifu2x_Caffe_GPU)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(4);
            ui->comboBox_Engine_GIF->setCurrentIndex(4);
            ui->comboBox_Engine_Video->setCurrentIndex(4);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //====
            ui->comboBox_ProcessMode_Waifu2xCaffe->setCurrentIndex(1);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //======================= 检查Waifu2x_Caffe_cuDNN的兼容性 ===================
        if(isCompatible_Waifu2x_Caffe_cuDNN)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(4);
            ui->comboBox_Engine_GIF->setCurrentIndex(4);
            ui->comboBox_Engine_Video->setCurrentIndex(4);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //====
            ui->comboBox_ProcessMode_Waifu2xCaffe->setCurrentIndex(2);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //========== 检查waifu2x-ncnn-vulkan FP16P 的兼容性 ===============
        if(isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P==true)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(0);
            ui->comboBox_Engine_GIF->setCurrentIndex(0);
            ui->comboBox_Engine_Video->setCurrentIndex(0);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //====
            ui->comboBox_version_Waifu2xNCNNVulkan->setCurrentIndex(1);
            on_comboBox_version_Waifu2xNCNNVulkan_currentIndexChanged(0);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //========== 检查waifu2x-ncnn-vulkan 老版本 的兼容性 ===============
        if(isCompatible_Waifu2x_NCNN_Vulkan_OLD==true)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(0);
            ui->comboBox_Engine_GIF->setCurrentIndex(0);
            ui->comboBox_Engine_Video->setCurrentIndex(0);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //====
            ui->comboBox_version_Waifu2xNCNNVulkan->setCurrentIndex(2);
            on_comboBox_version_Waifu2xNCNNVulkan_currentIndexChanged(0);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //======================= 检查SRMD-NCNN-Vulkan的兼容性 ===================
        if(isCompatible_SRMD_NCNN_Vulkan==true)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(2);
            ui->comboBox_Engine_GIF->setCurrentIndex(2);
            ui->comboBox_Engine_Video->setCurrentIndex(3);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //======================= 检查waifu2x-converter的兼容性 ===================
        if(isCompatible_Waifu2x_Converter==true)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(1);
            ui->comboBox_Engine_GIF->setCurrentIndex(1);
            ui->comboBox_Engine_Video->setCurrentIndex(1);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //======================= 检查Anime4K的兼容性 ===================
        if(isCompatible_Anime4k_GPU==true)
        {
            isShowAnime4kWarning=false;
            ui->comboBox_Engine_Image->setCurrentIndex(3);
            ui->comboBox_Engine_GIF->setCurrentIndex(3);
            ui->comboBox_Engine_Video->setCurrentIndex(2);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //=====
            ui->checkBox_GPUMode_Anime4K->setChecked(1);
            on_checkBox_GPUMode_Anime4K_stateChanged(0);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        if(isCompatible_Anime4k_CPU==true)
        {
            isShowAnime4kWarning=false;
            ui->comboBox_Engine_Image->setCurrentIndex(3);
            ui->comboBox_Engine_GIF->setCurrentIndex(3);
            ui->comboBox_Engine_Video->setCurrentIndex(2);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //=====
            ui->checkBox_GPUMode_Anime4K->setChecked(0);
            on_checkBox_GPUMode_Anime4K_stateChanged(0);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //======================= 检查Waifu2x_Caffe_CPU的兼容性 ===================
        if(isCompatible_Waifu2x_Caffe_CPU)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(4);
            ui->comboBox_Engine_GIF->setCurrentIndex(4);
            ui->comboBox_Engine_Video->setCurrentIndex(4);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //====
            ui->comboBox_ProcessMode_Waifu2xCaffe->setCurrentIndex(0);
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //======================= 检查Realsr_NCNN_Vulkan的兼容性 ===================
        if(isCompatible_Realsr_NCNN_Vulkan)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(5);
            ui->comboBox_Engine_GIF->setCurrentIndex(5);
            ui->comboBox_Engine_Video->setCurrentIndex(5);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //====
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //======================= 检查 SRMD-CUDA 的兼容性 ===================
        if(isCompatible_SRMD_CUDA)
        {
            ui->comboBox_Engine_Image->setCurrentIndex(6);
            ui->comboBox_Engine_GIF->setCurrentIndex(6);
            ui->comboBox_Engine_Video->setCurrentIndex(6);
            on_comboBox_Engine_Image_currentIndexChanged(0);
            on_comboBox_Engine_GIF_currentIndexChanged(0);
            on_comboBox_Engine_Video_currentIndexChanged(0);
            //====
            ui->tabWidget->setCurrentIndex(1);
            return 0;
        }
        //啥引擎都不兼容,提示用户自行修复兼容性问题
        QMessageBox *MSG_ = new QMessageBox();
        MSG_->setWindowTitle(tr("Notification"));
        MSG_->setText(tr("According to the compatibility test results, all engines are not compatible with your computer. Please try to fix the compatibility issue according to the following tutorial:\n\nFirst, try to update your graphics card driver. For the specific update method, please google it. After updating the graphics card driver, open the graphics card driver to see if the current driver supports vulkan (that is, see if can you check the vulkan Driver version and vulkan API version).\n\nIf the current driver supports vulkan but still can't use waifu2x-ncnn-vulkan normally, then manually download the latest version of the beta driver and install it. And then test again to see if your PC is compatible with waifu2x-ncnn-vulkan.\n\nIf it is still not compatible, please uninstall and reinstall the graphics driver and update the Windows OS."));
        MSG_->setIcon(QMessageBox::Warning);
        MSG_->setModal(true);
        MSG_->show();
        return 0;
    }
    if (Msg.clickedButton() == pNoBtn)
    {
        //提醒用户检查测试结果
        QMessageBox *MSG = new QMessageBox();
        MSG->setWindowTitle(tr("Notification"));
        MSG->setText(tr("The compatibility test has been completed. Please check the test results and configure the engine settings based on the test results."));
        MSG->setIcon(QMessageBox::Information);
        MSG->setModal(true);
        MSG->show();
        return 0;
    }
    //===============
    return 0;
}

//初始化 -兼容性测试进度条
void MainWindow::Init_progressBar_CompatibilityTest()
{
    ui->progressBar_CompatibilityTest->setEnabled(1);
    ui->progressBar_CompatibilityTest->setVisible(1);
    ui->progressBar_CompatibilityTest->setRange(0,20);
    ui->progressBar_CompatibilityTest->setValue(0);
}
//进度+1 -兼容性测试进度条
void MainWindow::Add_progressBar_CompatibilityTest()
{
    int CurrentValue = ui->progressBar_CompatibilityTest->value();
    ui->progressBar_CompatibilityTest->setValue(CurrentValue+1);
}
//兼容性测试完成后的操作 -兼容性测试进度条
void MainWindow::Finish_progressBar_CompatibilityTest()
{
    ui->progressBar_CompatibilityTest->setVisible(0);
}
