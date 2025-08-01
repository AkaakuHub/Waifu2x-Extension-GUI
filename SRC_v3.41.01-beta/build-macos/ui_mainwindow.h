/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_40;
    QSplitter *splitter_4;
    QTabWidget *tabWidget;
    QWidget *tab_Donate;
    QGridLayout *gridLayout_22;
    QLabel *label_DonateText;
    QHBoxLayout *horizontalLayout_60;
    QPushButton *pushButton_PayPal;
    QPushButton *pushButton_Patreon;
    QLabel *label_DonateQRCode;
    QWidget *tab_Home;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox_Progress;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton_Start;
    QProgressBar *progressBar;
    QLabel *label_ETA;
    QLabel *label_progressBar_filenum;
    QLabel *label_TimeCost;
    QPushButton *pushButton_ForceRetry;
    QPushButton *pushButton_Stop;
    QLabel *label_TimeRemain;
    QGroupBox *groupBox_CurrentFile;
    QGridLayout *gridLayout_28;
    QLabel *label_FrameProgress_CurrentFile;
    QLabel *label_ETA_CurrentFile;
    QProgressBar *progressBar_CurrentFile;
    QLabel *label_TimeRemain_CurrentFile;
    QLabel *label_TimeCost_CurrentFile;
    QSplitter *splitter_2;
    QGroupBox *groupBox_FileList;
    QGridLayout *gridLayout_21;
    QSplitter *splitter_FilesList;
    QTableView *tableView_image;
    QTableView *tableView_gif;
    QTableView *tableView_video;
    QLabel *label_DropFile;
    QLabel *label_FileCount;
    QFrame *frame_11;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_ReadFileList;
    QFrame *line_10;
    QFrame *line_25;
    QPushButton *pushButton_ResizeFilesListSplitter;
    QPushButton *pushButton_RemoveItem;
    QPushButton *pushButton_BrowserFile;
    QFrame *line_20;
    QPushButton *pushButton_ClearList;
    QPushButton *pushButton_SaveFileList;
    QPushButton *pushButton_TurnOffScreen;
    QFrame *line_15;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_HideSettings;
    QPushButton *pushButton_HideTextBro;
    QGroupBox *groupBox_Setting;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_CustRes;
    QGridLayout *gridLayout_13;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_44;
    QComboBox *comboBox_AspectRatio_custRes;
    QLabel *label_15;
    QSpinBox *spinBox_CustRes_height;
    QSpinBox *spinBox_CustRes_width;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_CustRes_apply;
    QPushButton *pushButton_CustRes_cancel;
    QCheckBox *checkBox_AutoSkip_CustomRes;
    QCheckBox *checkBox_custres_isAll;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_26;
    QFrame *frame_2;
    QGridLayout *gridLayout_45;
    QLabel *label_63;
    QSpinBox *spinBox_ImageQualityLevel;
    QLabel *label_ImageStyle_W2xNCNNVulkan;
    QLabel *label_ImageStyle_W2xCaffe;
    QFrame *frame;
    QGridLayout *gridLayout_42;
    QComboBox *comboBox_ImageSaveFormat;
    QLabel *label_20;
    QComboBox *comboBox_ImageStyle;
    QComboBox *comboBox_ImageStyle_Waifu2xCaffe;
    QFrame *frame_13;
    QGridLayout *gridLayout_66;
    QCheckBox *checkBox_DelOriginal;
    QCheckBox *checkBox_ReplaceOriginalFile;
    QCheckBox *checkBox_OptGIF;
    QComboBox *comboBox_FinishAction;
    QCheckBox *checkBox_ReProcFinFiles;
    QCheckBox *checkBox_FrameInterpolationOnly_Video;
    QCheckBox *checkBox_EnableVFI_Home;
    QGroupBox *groupBox_OutPut;
    QGridLayout *gridLayout_23;
    QLineEdit *lineEdit_outputPath;
    QScrollArea *scrollArea_outputPathSettings;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_37;
    QCheckBox *checkBox_OutPath_KeepOriginalFileName;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_OutPath_isEnabled;
    QCheckBox *checkBox_OutPath_Overwrite;
    QSpacerItem *horizontalSpacer_17;
    QCheckBox *checkBox_KeepParentFolder;
    QCheckBox *checkBox_AutoOpenOutputPath;
    QGroupBox *groupBox_ScaleRaton_DenoiseLevel;
    QGridLayout *gridLayout;
    QFrame *line_45;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_57;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_ScaleRatio_image;
    QFrame *line_3;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_ScaleRatio_gif;
    QFrame *line_4;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox_ScaleRatio_video;
    QFrame *line_49;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_66;
    QLabel *label_ImageDenoiseLevel;
    QSpinBox *spinBox_DenoiseLevel_image;
    QFrame *line_47;
    QLabel *label_GIFDenoiseLevel;
    QSpinBox *spinBox_DenoiseLevel_gif;
    QFrame *line_48;
    QLabel *label_VideoDenoiseLevel;
    QSpinBox *spinBox_DenoiseLevel_video;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_50;
    QPushButton *pushButton_MultipleOfFPS_VFI_MIN;
    QSpinBox *spinBox_MultipleOfFPS_VFI;
    QPushButton *pushButton_MultipleOfFPS_VFI_ADD;
    QSpacerItem *horizontalSpacer_15;
    QWidget *tab_EngineSettings;
    QGridLayout *gridLayout_29;
    QGroupBox *groupBox_NumOfThreads;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_16;
    QGridLayout *gridLayout_57;
    QLabel *label_11;
    QFrame *line;
    QLabel *label_13;
    QFrame *line_2;
    QSpinBox *spinBox_ThreadNum_gif_internal;
    QSpinBox *spinBox_ThreadNum_video_internal;
    QLabel *label_12;
    QSpinBox *spinBox_ThreadNum_image;
    QSpacerItem *horizontalSpacer_29;
    QGroupBox *groupBox_Engine;
    QGridLayout *gridLayout_6;
    QFrame *line_6;
    QFrame *frame_18;
    QGridLayout *gridLayout_59;
    QFrame *frame_17;
    QGridLayout *gridLayout_58;
    QLabel *label_7;
    QFrame *line_12;
    QComboBox *comboBox_Engine_GIF;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_6;
    QLabel *label_8;
    QFrame *line_11;
    QComboBox *comboBox_Engine_Video;
    QComboBox *comboBox_Engine_Image;
    QSpacerItem *horizontalSpacer_8;
    QTabWidget *tabWidget_Engines;
    QWidget *tab_W2xNcnnVulkan;
    QGridLayout *gridLayout_53;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QComboBox *comboBox_GPUID;
    QPushButton *pushButton_DetectGPU;
    QCheckBox *checkBox_MultiGPU_Waifu2xNCNNVulkan;
    QSpacerItem *horizontalSpacer_28;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QFrame *frame_TileSize_W2xNcnnVulkan;
    QGridLayout *gridLayout_31;
    QPushButton *pushButton_TileSize_Minus_W2xNCNNVulkan;
    QSpinBox *spinBox_TileSize;
    QPushButton *pushButton_TileSize_Add_W2xNCNNVulkan;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_24;
    QGroupBox *groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan;
    QGridLayout *gridLayout_39;
    QComboBox *comboBox_GPUIDs_MultiGPU_Waifu2xNCNNVulkan;
    QSpinBox *spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan;
    QCheckBox *checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan;
    QPushButton *pushButton_ShowMultiGPUSettings_Waifu2xNCNNVulkan;
    QLabel *label_64;
    QLabel *label_65;
    QFrame *line_21;
    QSpacerItem *horizontalSpacer_31;
    QFrame *line_31;
    QFrame *line_30;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_47;
    QComboBox *comboBox_version_Waifu2xNCNNVulkan;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_26;
    QComboBox *comboBox_model_vulkan;
    QCheckBox *checkBox_TTA_vulkan;
    QSpacerItem *horizontalSpacer_22;
    QFrame *line_32;
    QWidget *tab_W2xConverter;
    QGridLayout *gridLayout_54;
    QFrame *line_34;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *checkBox_ForceOpenCL_converter;
    QCheckBox *checkBox_DisableGPU_converter;
    QCheckBox *checkBox_TTA_converter;
    QSpacerItem *horizontalSpacer_20;
    QFrame *line_33;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_53;
    QComboBox *comboBox_TargetProcessor_converter;
    QPushButton *pushButton_DumpProcessorList_converter;
    QCheckBox *checkBox_MultiGPU_Waifu2xConverter;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_54;
    QFrame *frame_BlockSize_W2xConverter;
    QGridLayout *gridLayout_35;
    QPushButton *pushButton_BlockSize_Minus_W2xConverter;
    QSpinBox *spinBox_BlockSize_converter;
    QPushButton *pushButton_BlockSize_Add_W2xConverter;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_25;
    QGroupBox *groupBox_GPUSettings_MultiGPU_Waifu2xConverter;
    QGridLayout *gridLayout_44;
    QPushButton *pushButton_ShowMultiGPUSettings_Waifu2xConverter;
    QLabel *label_75;
    QLabel *label_74;
    QComboBox *comboBox_GPUIDs_MultiGPU_Waifu2xConverter;
    QCheckBox *checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter;
    QSpinBox *spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter;
    QFrame *line_22;
    QSpacerItem *horizontalSpacer_32;
    QWidget *tab_A4k;
    QGridLayout *gridLayout_62;
    QFrame *frame_21;
    QGridLayout *gridLayout_61;
    QCheckBox *checkBox_OpenCLParallelIO_A4k;
    QCheckBox *checkBox_ACNet_Anime4K;
    QCheckBox *checkBox_HDNMode_Anime4k;
    QCheckBox *checkBox_FastMode_Anime4K;
    QLabel *label_23;
    QSpinBox *spinBox_OpenCLCommandQueues_A4k;
    QFrame *line_26;
    QSpacerItem *horizontalSpacer_46;
    QFrame *line_5;
    QFrame *frame_20;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_GPUs_Anime4k;
    QPushButton *pushButton_ListGPUs_Anime4k;
    QComboBox *comboBox_GPGPUModel_A4k;
    QFrame *line_13;
    QCheckBox *checkBox_GPUMode_Anime4K;
    QPushButton *pushButton_VerifyGPUsConfig_Anime4k;
    QCheckBox *checkBox_SpecifyGPU_Anime4k;
    QSpacerItem *horizontalSpacer_45;
    QFrame *line_14;
    QWidget *widget;
    QGridLayout *gridLayout_38;
    QLabel *label_50;
    QDoubleSpinBox *doubleSpinBox_PushGradientStrength_Anime4K;
    QSpinBox *spinBox_PushColorCount_Anime4K;
    QDoubleSpinBox *doubleSpinBox_PushColorStrength_Anime4K;
    QLabel *label_48;
    QSpinBox *spinBox_Passes_Anime4K;
    QLabel *label_51;
    QLabel *label_49;
    QSpacerItem *horizontalSpacer_47;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_PreProcessing_Anime4k;
    QGridLayout *gridLayout_25;
    QFrame *line_8;
    QCheckBox *checkBox_MeanBlur_Pre_Anime4k;
    QCheckBox *checkBox_MedianBlur_Pre_Anime4k;
    QCheckBox *checkBox_GaussianBlurWeak_Pre_Anime4k;
    QCheckBox *checkBox_CASSharping_Pre_Anime4k;
    QCheckBox *checkBox_GaussianBlur_Pre_Anime4k;
    QCheckBox *checkBox_BilateralFilter_Pre_Anime4k;
    QCheckBox *checkBox_BilateralFilterFaster_Pre_Anime4k;
    QCheckBox *checkBox_EnablePreProcessing_Anime4k;
    QGroupBox *groupBox_PostProcessing_Anime4k;
    QGridLayout *gridLayout_24;
    QCheckBox *checkBox_EnablePostProcessing_Anime4k;
    QFrame *line_9;
    QCheckBox *checkBox_MedianBlur_Post_Anime4k;
    QCheckBox *checkBox_MeanBlur_Post_Anime4k;
    QCheckBox *checkBox_CASSharping_Post_Anime4k;
    QCheckBox *checkBox_GaussianBlur_Post_Anime4k;
    QCheckBox *checkBox_BilateralFilter_Post_Anime4k;
    QCheckBox *checkBox_GaussianBlurWeak_Post_Anime4k;
    QCheckBox *checkBox_BilateralFilterFaster_Post_Anime4k;
    QWidget *tab_SrmdNcnnVulkan;
    QGridLayout *gridLayout_55;
    QHBoxLayout *horizontalLayout_26;
    QGroupBox *groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan;
    QGridLayout *gridLayout_41;
    QCheckBox *checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan;
    QLabel *label_68;
    QComboBox *comboBox_GPUIDs_MultiGPU_SrmdNCNNVulkan;
    QPushButton *pushButton_ShowMultiGPUSettings_SrmdNCNNVulkan;
    QSpinBox *spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan;
    QLabel *label_69;
    QFrame *line_23;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_41;
    QComboBox *comboBox_GPUID_srmd;
    QPushButton *pushButton_DetectGPUID_srmd;
    QCheckBox *checkBox_MultiGPU_SrmdNCNNVulkan;
    QSpacerItem *horizontalSpacer_34;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_40;
    QFrame *frame_TileSize_SrmdNcnnVulkan;
    QGridLayout *gridLayout_36;
    QPushButton *pushButton_Add_TileSize_SrmdNCNNVulkan;
    QPushButton *pushButton_Minus_TileSize_SrmdNCNNVulkan;
    QSpinBox *spinBox_TileSize_srmd;
    QCheckBox *checkBox_TTA_srmd;
    QSpacerItem *horizontalSpacer_33;
    QFrame *line_37;
    QWidget *tab_W2xCaffe;
    QGridLayout *gridLayout_30;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_56;
    QComboBox *comboBox_Model_3D_Waifu2xCaffe;
    QSpacerItem *horizontalSpacer_38;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_43;
    QSpinBox *spinBox_BatchSize_Waifu2xCaffe;
    QSpacerItem *horizontalSpacer_36;
    QFrame *line_41;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_14;
    QComboBox *comboBox_ProcessMode_Waifu2xCaffe;
    QCheckBox *checkBox_TTA_Waifu2xCaffe;
    QSpacerItem *horizontalSpacer_40;
    QHBoxLayout *horizontalLayout_33;
    QCheckBox *checkBox_EnableMultiGPU_Waifu2xCaffe;
    QLineEdit *lineEdit_MultiGPUInfo_Waifu2xCaffe;
    QPushButton *pushButton_VerifyGPUsConfig_Waifu2xCaffe;
    QSpacerItem *horizontalSpacer_35;
    QFrame *line_40;
    QFrame *line_42;
    QFrame *line_39;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_25;
    QComboBox *comboBox_Model_2D_Waifu2xCaffe;
    QSpacerItem *horizontalSpacer_39;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_38;
    QSpinBox *spinBox_GPUID_Waifu2xCaffe;
    QSpacerItem *horizontalSpacer_37;
    QFrame *line_38;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_52;
    QPushButton *pushButton_SplitSize_Minus_Waifu2xCaffe;
    QSpinBox *spinBox_SplitSize_Waifu2xCaffe;
    QPushButton *pushButton_SplitSize_Add_Waifu2xCaffe;
    QSpacerItem *horizontalSpacer_24;
    QFrame *line_43;
    QWidget *tab_RealsrNcnnVulkan;
    QGridLayout *gridLayout_34;
    QFrame *line_36;
    QFrame *line_35;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_60;
    QComboBox *comboBox_Model_RealsrNCNNVulkan;
    QCheckBox *checkBox_TTA_RealsrNCNNVulkan;
    QSpacerItem *horizontalSpacer_41;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_62;
    QComboBox *comboBox_GPUID_RealsrNCNNVulkan;
    QPushButton *pushButton_DetectGPU_RealsrNCNNVulkan;
    QCheckBox *checkBox_MultiGPU_RealsrNcnnVulkan;
    QSpacerItem *horizontalSpacer_42;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_61;
    QFrame *frame_TileSize_RealsrNcnnVulkan;
    QGridLayout *gridLayout_56;
    QPushButton *pushButton_Minus_TileSize_RealsrNCNNVulkan;
    QSpinBox *spinBox_TileSize_RealsrNCNNVulkan;
    QPushButton *pushButton_Add_TileSize_RealsrNCNNVulkan;
    QSpacerItem *horizontalSpacer_26;
    QHBoxLayout *horizontalLayout_34;
    QGroupBox *groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan;
    QGridLayout *gridLayout_43;
    QCheckBox *checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan;
    QLabel *label_73;
    QLabel *label_72;
    QPushButton *pushButton_ShowMultiGPUSettings_RealsrNcnnVulkan;
    QComboBox *comboBox_GPUIDs_MultiGPU_RealsrNcnnVulkan;
    QSpinBox *spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan;
    QFrame *line_24;
    QSpacerItem *horizontalSpacer_25;
    QWidget *tab_VideoSettings;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_13;
    QGroupBox *groupBox_FrameInterpolation;
    QGridLayout *gridLayout_64;
    QFrame *frame_FrameInterpolation;
    QGridLayout *gridLayout_68;
    QFrame *frame_15;
    QGridLayout *gridLayout_67;
    QCheckBox *checkBox_UHD_VFI;
    QSpacerItem *horizontalSpacer_12;
    QFrame *line_28;
    QFrame *frame_14;
    QGridLayout *gridLayout_65;
    QLabel *label_37;
    QComboBox *comboBox_Engine_VFI;
    QCheckBox *checkBox_TTA_VFI;
    QCheckBox *checkBox_VfiAfterScale_VFI;
    QFrame *line_27;
    QFrame *line_29;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_30;
    QComboBox *comboBox_GPUID_VFI;
    QPushButton *pushButton_DetectGPU_VFI;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_MultiGPU_VFI;
    QLineEdit *lineEdit_MultiGPU_IDs_VFI;
    QPushButton *pushButton_Verify_MultiGPU_VFI;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_19;
    QSpinBox *spinBox_TileSize_VFI;
    QSpacerItem *horizontalSpacer_48;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QComboBox *comboBox_Model_VFI;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_MultiThread_VFI;
    QSpinBox *spinBox_NumOfThreads_VFI;
    QCheckBox *checkBox_AutoAdjustNumOfThreads_VFI;
    QGroupBox *groupBox_AudioDenoise;
    QGridLayout *gridLayout_16;
    QDoubleSpinBox *doubleSpinBox_AudioDenoiseLevel;
    QLabel *label_46;
    QCheckBox *checkBox_AudioDenoise;
    QFrame *line_7;
    QSpacerItem *horizontalSpacer_11;
    QGroupBox *groupBox_video_settings;
    QGridLayout *gridLayout_18;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_OutputVideoSettings;
    QGridLayout *gridLayout_51;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_31;
    QLineEdit *lineEdit_encoder_vid;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_27;
    QSpinBox *spinBox_bitrate_vid;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_32;
    QLineEdit *lineEdit_encoder_audio;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_29;
    QSpinBox *spinBox_bitrate_audio;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_33;
    QLineEdit *lineEdit_pixformat;
    QFrame *line_17;
    QSpacerItem *horizontalSpacer_10;
    QFrame *frame_9;
    QGridLayout *gridLayout_12;
    QLabel *label_42;
    QLineEdit *lineEdit_ExCommand_output;
    QGroupBox *groupBox_ToMp4VideoSettings;
    QGridLayout *gridLayout_33;
    QSpacerItem *horizontalSpacer_27;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_35;
    QSpinBox *spinBox_bitrate_audio_2mp4;
    QFrame *line_18;
    QHBoxLayout *horizontalLayout_39;
    QCheckBox *checkBox_acodec_copy_2mp4;
    QCheckBox *checkBox_vcodec_copy_2mp4;
    QSpacerItem *horizontalSpacer_43;
    QFrame *frame_10;
    QGridLayout *gridLayout_52;
    QLabel *label_45;
    QLineEdit *lineEdit_ExCommand_2mp4;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_34;
    QSpinBox *spinBox_bitrate_vid_2mp4;
    QCheckBox *checkBox_IgnoreFrameRateMode;
    QFrame *frame_19;
    QGridLayout *gridLayout_60;
    QPushButton *pushButton_ResetVideoSettings;
    QPushButton *pushButton_encodersList;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_ProcessVideoBySegment;
    QGridLayout *gridLayout_69;
    QLabel *label_SegmentDuration;
    QSpinBox *spinBox_SegmentDuration;
    QCheckBox *checkBox_ProcessVideoBySegment;
    QFrame *line_46;
    QWidget *tab_AdditionalSettings;
    QGridLayout *gridLayout_19;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_InputExt;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_4;
    QLineEdit *Ext_image;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_5;
    QLineEdit *Ext_video;
    QHBoxLayout *horizontalLayout_35;
    QCheckBox *checkBox_PreProcessImage;
    QCheckBox *checkBox_AutoDetectAlphaChannel;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_AlwaysPreProcessAlphaPNG;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_17;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_24;
    QFontComboBox *fontComboBox_CustFont;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *pushButton_Save_GlobalFontSize;
    QCheckBox *checkBox_isCustFontEnable;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_22;
    QSpinBox *spinBox_GlobalFontSize;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_other_1;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_57;
    QPushButton *pushButton_SaveSettings;
    QPushButton *pushButton_ResetSettings;
    QPushButton *pushButton_CheckUpdate;
    QHBoxLayout *horizontalLayout_58;
    QPushButton *pushButton_Report;
    QPushButton *pushButton_ReadMe;
    QPushButton *pushButton_wiki;
    QHBoxLayout *horizontalLayout_59;
    QPushButton *pushButton_about;
    QPushButton *pushButton_SupportersList;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_14;
    QFrame *frame_7;
    QGridLayout *gridLayout_50;
    QCheckBox *checkBox_UpdatePopup;
    QCheckBox *checkBox_AutoSaveSettings;
    QCheckBox *checkBox_DisableResize_gif;
    QCheckBox *checkBox_PromptWhenExit;
    QCheckBox *checkBox_MinimizeToTaskbar;
    QCheckBox *checkBox_AlwaysHideTextBrowser;
    QCheckBox *checkBox_ScanSubFolders;
    QFrame *frame_4;
    QGridLayout *gridLayout_46;
    QLabel *label_39;
    QSpinBox *spinBox_retry;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkBox_BanGitee;
    QSpacerItem *horizontalSpacer_44;
    QFrame *line_44;
    QSpacerItem *horizontalSpacer_9;
    QFrame *frame_8;
    QGridLayout *gridLayout_49;
    QFrame *frame_3;
    QGridLayout *gridLayout_27;
    QComboBox *comboBox_language;
    QLabel *label_21;
    QCheckBox *checkBox_NfSound;
    QCheckBox *checkBox_FileListAutoSlide;
    QFrame *frame_6;
    QGridLayout *gridLayout_48;
    QLabel *label_55;
    QComboBox *comboBox_UpdateChannel;
    QCheckBox *checkBox_KeepVideoCache;
    QCheckBox *checkBox_FileList_Interactive;
    QCheckBox *checkBox_AlwaysHideSettings;
    QCheckBox *checkBox_ShowInterPro;
    QCheckBox *checkBox_SummaryPopup;
    QWidget *tab_CompatibilityTest;
    QGridLayout *gridLayout_32;
    QPushButton *pushButton_compatibilityTest;
    QProgressBar *progressBar_CompatibilityTest;
    QGroupBox *groupBox_CompatibilityTestRes;
    QGridLayout *gridLayout_20;
    QCheckBox *checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD;
    QCheckBox *checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW;
    QCheckBox *checkBox_isCompatible_Realsr_NCNN_Vulkan;
    QCheckBox *checkBox_isCompatible_FFprobe;
    QCheckBox *checkBox_isCompatible_Waifu2x_Converter;
    QCheckBox *checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P;
    QCheckBox *checkBox_isCompatible_Gifsicle;
    QCheckBox *checkBox_isCompatible_SRMD_NCNN_Vulkan;
    QFrame *line_16;
    QCheckBox *checkBox_isCompatible_ImageMagick;
    QCheckBox *checkBox_isCompatible_SoX;
    QCheckBox *checkBox_isCompatible_Anime4k_GPU;
    QCheckBox *checkBox_isCompatible_Waifu2x_Caffe_CPU;
    QLabel *label_59;
    QCheckBox *checkBox_isCompatible_Waifu2x_Caffe_GPU;
    QLabel *label_58;
    QCheckBox *checkBox_isCompatible_FFmpeg;
    QCheckBox *checkBox_isCompatible_Anime4k_CPU;
    QCheckBox *checkBox_isCompatible_Waifu2x_Caffe_cuDNN;
    QFrame *line_19;
    QLabel *label_36;
    QCheckBox *checkBox_isCompatible_RifeNcnnVulkan;
    QCheckBox *checkBox_isCompatible_CainNcnnVulkan;
    QCheckBox *checkBox_isCompatible_DainNcnnVulkan;
    QLabel *label_2;
    QCheckBox *checkBox_isCompatible_SRMD_CUDA;
    QSplitter *splitter_TextBrowser;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_textBrowserSettings;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton_clear_textbrowser;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_TextBroFontSize;
    QSpinBox *spinBox_textbrowser_fontsize;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1096, 794);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        MainWindow->setWindowTitle(QString::fromUtf8("Waifu2x-Extension-GUI by Aaron Feng"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/icon_main.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_40 = new QGridLayout(centralwidget);
        gridLayout_40->setObjectName("gridLayout_40");
        gridLayout_40->setContentsMargins(6, 6, 6, 6);
        splitter_4 = new QSplitter(centralwidget);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setStyleSheet(QString::fromUtf8(""));
        splitter_4->setOrientation(Qt::Vertical);
        splitter_4->setHandleWidth(5);
        tabWidget = new QTabWidget(splitter_4);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"height:35\n"
"}"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(23, 23));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_Donate = new QWidget();
        tab_Donate->setObjectName("tab_Donate");
        tab_Donate->setEnabled(true);
        tab_Donate->setStyleSheet(QString::fromUtf8(""));
        gridLayout_22 = new QGridLayout(tab_Donate);
        gridLayout_22->setObjectName("gridLayout_22");
        label_DonateText = new QLabel(tab_Donate);
        label_DonateText->setObjectName("label_DonateText");
        label_DonateText->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_DonateText->setFont(font);
        label_DonateText->setAlignment(Qt::AlignCenter);

        gridLayout_22->addWidget(label_DonateText, 0, 0, 1, 1);

        horizontalLayout_60 = new QHBoxLayout();
        horizontalLayout_60->setObjectName("horizontalLayout_60");
        pushButton_PayPal = new QPushButton(tab_Donate);
        pushButton_PayPal->setObjectName("pushButton_PayPal");
        sizePolicy.setHeightForWidth(pushButton_PayPal->sizePolicy().hasHeightForWidth());
        pushButton_PayPal->setSizePolicy(sizePolicy);
        pushButton_PayPal->setMinimumSize(QSize(240, 60));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        pushButton_PayPal->setFont(font1);
        pushButton_PayPal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(52, 152, 219);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 177, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 134, 193);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));
        pushButton_PayPal->setText(QString::fromUtf8(" PayPal"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/icon/paypal.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_PayPal->setIcon(icon1);
        pushButton_PayPal->setIconSize(QSize(38, 38));

        horizontalLayout_60->addWidget(pushButton_PayPal);

        pushButton_Patreon = new QPushButton(tab_Donate);
        pushButton_Patreon->setObjectName("pushButton_Patreon");
        pushButton_Patreon->setMinimumSize(QSize(0, 60));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        pushButton_Patreon->setFont(font2);
        pushButton_Patreon->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 66, 77);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 105, 112);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(223, 50, 61);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/icon/patreon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Patreon->setIcon(icon2);
        pushButton_Patreon->setIconSize(QSize(38, 38));

        horizontalLayout_60->addWidget(pushButton_Patreon);

        horizontalLayout_60->setStretch(0, 10);
        horizontalLayout_60->setStretch(1, 33);

        gridLayout_22->addLayout(horizontalLayout_60, 1, 0, 1, 1);

        label_DonateQRCode = new QLabel(tab_Donate);
        label_DonateQRCode->setObjectName("label_DonateQRCode");
        sizePolicy1.setHeightForWidth(label_DonateQRCode->sizePolicy().hasHeightForWidth());
        label_DonateQRCode->setSizePolicy(sizePolicy1);
        label_DonateQRCode->setMinimumSize(QSize(750, 360));
        label_DonateQRCode->setSizeIncrement(QSize(2, 1));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(13);
        font3.setBold(true);
        label_DonateQRCode->setFont(font3);
        label_DonateQRCode->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/donate/Donate_QRCode.jpg);"));
        label_DonateQRCode->setFrameShape(QFrame::NoFrame);
        label_DonateQRCode->setScaledContents(false);
        label_DonateQRCode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_22->addWidget(label_DonateQRCode, 2, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/icon/donateTabIcon_1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_Donate, icon3, QString());
        tab_Home = new QWidget();
        tab_Home->setObjectName("tab_Home");
        QFont font4;
        font4.setPointSize(9);
        tab_Home->setFont(font4);
        gridLayout_15 = new QGridLayout(tab_Home);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_15->setContentsMargins(6, 6, 6, 6);
        groupBox_Progress = new QGroupBox(tab_Home);
        groupBox_Progress->setObjectName("groupBox_Progress");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_Progress->sizePolicy().hasHeightForWidth());
        groupBox_Progress->setSizePolicy(sizePolicy2);
        groupBox_Progress->setMinimumSize(QSize(0, 0));
        groupBox_Progress->setMaximumSize(QSize(16777215, 51));
        gridLayout_11 = new QGridLayout(groupBox_Progress);
        gridLayout_11->setObjectName("gridLayout_11");
        gridLayout_11->setContentsMargins(6, 6, 6, 6);
        pushButton_Start = new QPushButton(groupBox_Progress);
        pushButton_Start->setObjectName("pushButton_Start");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_Start->sizePolicy().hasHeightForWidth());
        pushButton_Start->setSizePolicy(sizePolicy3);
        pushButton_Start->setMinimumSize(QSize(0, 0));
        pushButton_Start->setMaximumSize(QSize(16777215, 16777215));
        pushButton_Start->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(26, 188, 156);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(29, 214, 177);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(23, 173, 143);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));
        pushButton_Start->setIcon(icon);
        pushButton_Start->setIconSize(QSize(25, 25));

        gridLayout_11->addWidget(pushButton_Start, 0, 5, 1, 1);

        progressBar = new QProgressBar(groupBox_Progress);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);
        progressBar->setFormat(QString::fromUtf8("%p%"));

        gridLayout_11->addWidget(progressBar, 0, 1, 1, 1);

        label_ETA = new QLabel(groupBox_Progress);
        label_ETA->setObjectName("label_ETA");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_ETA->sizePolicy().hasHeightForWidth());
        label_ETA->setSizePolicy(sizePolicy4);
        label_ETA->setFrameShape(QFrame::Box);
        label_ETA->setLineWidth(1);

        gridLayout_11->addWidget(label_ETA, 0, 4, 1, 1);

        label_progressBar_filenum = new QLabel(groupBox_Progress);
        label_progressBar_filenum->setObjectName("label_progressBar_filenum");
        sizePolicy4.setHeightForWidth(label_progressBar_filenum->sizePolicy().hasHeightForWidth());
        label_progressBar_filenum->setSizePolicy(sizePolicy4);
        label_progressBar_filenum->setFrameShape(QFrame::Box);
        label_progressBar_filenum->setFrameShadow(QFrame::Plain);
        label_progressBar_filenum->setLineWidth(1);
        label_progressBar_filenum->setText(QString::fromUtf8("0/0"));

        gridLayout_11->addWidget(label_progressBar_filenum, 0, 0, 1, 1);

        label_TimeCost = new QLabel(groupBox_Progress);
        label_TimeCost->setObjectName("label_TimeCost");
        sizePolicy4.setHeightForWidth(label_TimeCost->sizePolicy().hasHeightForWidth());
        label_TimeCost->setSizePolicy(sizePolicy4);
        label_TimeCost->setFrameShape(QFrame::Box);
        label_TimeCost->setLineWidth(1);

        gridLayout_11->addWidget(label_TimeCost, 0, 2, 1, 1);

        pushButton_ForceRetry = new QPushButton(groupBox_Progress);
        pushButton_ForceRetry->setObjectName("pushButton_ForceRetry");
        pushButton_ForceRetry->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButton_ForceRetry->sizePolicy().hasHeightForWidth());
        pushButton_ForceRetry->setSizePolicy(sizePolicy3);
        pushButton_ForceRetry->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(178, 58, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(191, 62, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(154, 50, 205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/icon/refresh.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_ForceRetry->setIcon(icon4);
        pushButton_ForceRetry->setIconSize(QSize(25, 25));

        gridLayout_11->addWidget(pushButton_ForceRetry, 0, 7, 1, 1);

        pushButton_Stop = new QPushButton(groupBox_Progress);
        pushButton_Stop->setObjectName("pushButton_Stop");
        sizePolicy3.setHeightForWidth(pushButton_Stop->sizePolicy().hasHeightForWidth());
        pushButton_Stop->setSizePolicy(sizePolicy3);
        pushButton_Stop->setMaximumSize(QSize(16777215, 16777215));
        pushButton_Stop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(204, 65, 53);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/icon/pause-button.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Stop->setIcon(icon5);
        pushButton_Stop->setIconSize(QSize(25, 25));

        gridLayout_11->addWidget(pushButton_Stop, 0, 6, 1, 1);

        label_TimeRemain = new QLabel(groupBox_Progress);
        label_TimeRemain->setObjectName("label_TimeRemain");
        sizePolicy4.setHeightForWidth(label_TimeRemain->sizePolicy().hasHeightForWidth());
        label_TimeRemain->setSizePolicy(sizePolicy4);
        label_TimeRemain->setFrameShape(QFrame::Box);
        label_TimeRemain->setLineWidth(1);

        gridLayout_11->addWidget(label_TimeRemain, 0, 3, 1, 1);


        gridLayout_15->addWidget(groupBox_Progress, 3, 0, 1, 1);

        groupBox_CurrentFile = new QGroupBox(tab_Home);
        groupBox_CurrentFile->setObjectName("groupBox_CurrentFile");
        sizePolicy2.setHeightForWidth(groupBox_CurrentFile->sizePolicy().hasHeightForWidth());
        groupBox_CurrentFile->setSizePolicy(sizePolicy2);
        groupBox_CurrentFile->setMinimumSize(QSize(0, 0));
        gridLayout_28 = new QGridLayout(groupBox_CurrentFile);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setObjectName("gridLayout_28");
        gridLayout_28->setContentsMargins(6, 6, 6, 6);
        label_FrameProgress_CurrentFile = new QLabel(groupBox_CurrentFile);
        label_FrameProgress_CurrentFile->setObjectName("label_FrameProgress_CurrentFile");
        sizePolicy4.setHeightForWidth(label_FrameProgress_CurrentFile->sizePolicy().hasHeightForWidth());
        label_FrameProgress_CurrentFile->setSizePolicy(sizePolicy4);
        label_FrameProgress_CurrentFile->setFrameShape(QFrame::Box);
        label_FrameProgress_CurrentFile->setFrameShadow(QFrame::Plain);
        label_FrameProgress_CurrentFile->setText(QString::fromUtf8("0/0"));

        gridLayout_28->addWidget(label_FrameProgress_CurrentFile, 0, 0, 1, 1);

        label_ETA_CurrentFile = new QLabel(groupBox_CurrentFile);
        label_ETA_CurrentFile->setObjectName("label_ETA_CurrentFile");
        sizePolicy4.setHeightForWidth(label_ETA_CurrentFile->sizePolicy().hasHeightForWidth());
        label_ETA_CurrentFile->setSizePolicy(sizePolicy4);
        label_ETA_CurrentFile->setFrameShape(QFrame::Box);

        gridLayout_28->addWidget(label_ETA_CurrentFile, 0, 4, 1, 1);

        progressBar_CurrentFile = new QProgressBar(groupBox_CurrentFile);
        progressBar_CurrentFile->setObjectName("progressBar_CurrentFile");
        progressBar_CurrentFile->setValue(0);

        gridLayout_28->addWidget(progressBar_CurrentFile, 0, 1, 1, 1);

        label_TimeRemain_CurrentFile = new QLabel(groupBox_CurrentFile);
        label_TimeRemain_CurrentFile->setObjectName("label_TimeRemain_CurrentFile");
        sizePolicy4.setHeightForWidth(label_TimeRemain_CurrentFile->sizePolicy().hasHeightForWidth());
        label_TimeRemain_CurrentFile->setSizePolicy(sizePolicy4);
        label_TimeRemain_CurrentFile->setFrameShape(QFrame::Box);

        gridLayout_28->addWidget(label_TimeRemain_CurrentFile, 0, 3, 1, 1);

        label_TimeCost_CurrentFile = new QLabel(groupBox_CurrentFile);
        label_TimeCost_CurrentFile->setObjectName("label_TimeCost_CurrentFile");
        sizePolicy4.setHeightForWidth(label_TimeCost_CurrentFile->sizePolicy().hasHeightForWidth());
        label_TimeCost_CurrentFile->setSizePolicy(sizePolicy4);
        label_TimeCost_CurrentFile->setFrameShape(QFrame::Box);

        gridLayout_28->addWidget(label_TimeCost_CurrentFile, 0, 2, 1, 1);


        gridLayout_15->addWidget(groupBox_CurrentFile, 1, 0, 1, 1);

        splitter_2 = new QSplitter(tab_Home);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setStyleSheet(QString::fromUtf8("QSplitter:handle{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        splitter_2->setLineWidth(0);
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setHandleWidth(3);
        groupBox_FileList = new QGroupBox(splitter_2);
        groupBox_FileList->setObjectName("groupBox_FileList");
        sizePolicy1.setHeightForWidth(groupBox_FileList->sizePolicy().hasHeightForWidth());
        groupBox_FileList->setSizePolicy(sizePolicy1);
        groupBox_FileList->setMinimumSize(QSize(0, 0));
        gridLayout_21 = new QGridLayout(groupBox_FileList);
        gridLayout_21->setObjectName("gridLayout_21");
        gridLayout_21->setContentsMargins(6, 6, 6, 6);
        splitter_FilesList = new QSplitter(groupBox_FileList);
        splitter_FilesList->setObjectName("splitter_FilesList");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(splitter_FilesList->sizePolicy().hasHeightForWidth());
        splitter_FilesList->setSizePolicy(sizePolicy5);
        splitter_FilesList->setStyleSheet(QString::fromUtf8("QSplitter:handle{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        splitter_FilesList->setOrientation(Qt::Horizontal);
        splitter_FilesList->setHandleWidth(5);
        splitter_FilesList->setChildrenCollapsible(false);
        tableView_image = new QTableView(splitter_FilesList);
        tableView_image->setObjectName("tableView_image");
        tableView_image->setMinimumSize(QSize(0, 0));
        tableView_image->setContextMenuPolicy(Qt::ActionsContextMenu);
        tableView_image->setStyleSheet(QString::fromUtf8("QTableView{\n"
"selection-background-color: rgb(52, 152, 219);\n"
"\n"
"}"));
        tableView_image->setAutoScroll(false);
        tableView_image->setAutoScrollMargin(0);
        tableView_image->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_image->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_image->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_image->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_image->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_image->setSortingEnabled(false);
        tableView_image->setCornerButtonEnabled(false);
        splitter_FilesList->addWidget(tableView_image);
        tableView_image->horizontalHeader()->setCascadingSectionResizes(false);
        tableView_image->horizontalHeader()->setMinimumSectionSize(20);
        tableView_image->horizontalHeader()->setDefaultSectionSize(200);
        tableView_image->horizontalHeader()->setStretchLastSection(false);
        tableView_image->verticalHeader()->setVisible(false);
        tableView_image->verticalHeader()->setCascadingSectionResizes(false);
        tableView_image->verticalHeader()->setStretchLastSection(false);
        tableView_gif = new QTableView(splitter_FilesList);
        tableView_gif->setObjectName("tableView_gif");
        tableView_gif->setEnabled(true);
        tableView_gif->setMinimumSize(QSize(0, 0));
        tableView_gif->setContextMenuPolicy(Qt::ActionsContextMenu);
        tableView_gif->setStyleSheet(QString::fromUtf8("QTableView{\n"
"selection-background-color: rgb(26, 188, 156);\n"
"}"));
        tableView_gif->setAutoScroll(false);
        tableView_gif->setAutoScrollMargin(0);
        tableView_gif->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_gif->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_gif->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_gif->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_gif->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_gif->setSortingEnabled(false);
        tableView_gif->setCornerButtonEnabled(false);
        splitter_FilesList->addWidget(tableView_gif);
        tableView_gif->horizontalHeader()->setCascadingSectionResizes(false);
        tableView_gif->horizontalHeader()->setMinimumSectionSize(20);
        tableView_gif->horizontalHeader()->setDefaultSectionSize(200);
        tableView_gif->verticalHeader()->setVisible(false);
        tableView_gif->verticalHeader()->setCascadingSectionResizes(false);
        tableView_video = new QTableView(splitter_FilesList);
        tableView_video->setObjectName("tableView_video");
        tableView_video->setMinimumSize(QSize(0, 0));
        tableView_video->setContextMenuPolicy(Qt::ActionsContextMenu);
        tableView_video->setStyleSheet(QString::fromUtf8("QTableView{\n"
"selection-background-color: rgb(178, 58, 238);\n"
"}"));
        tableView_video->setAutoScroll(false);
        tableView_video->setAutoScrollMargin(0);
        tableView_video->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_video->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_video->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_video->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_video->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_video->setSortingEnabled(false);
        tableView_video->setCornerButtonEnabled(false);
        splitter_FilesList->addWidget(tableView_video);
        tableView_video->horizontalHeader()->setVisible(false);
        tableView_video->horizontalHeader()->setMinimumSectionSize(20);
        tableView_video->horizontalHeader()->setDefaultSectionSize(200);
        tableView_video->verticalHeader()->setVisible(false);
        label_DropFile = new QLabel(splitter_FilesList);
        label_DropFile->setObjectName("label_DropFile");
        label_DropFile->setMinimumSize(QSize(0, 90));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(13);
        font5.setBold(false);
        font5.setItalic(false);
        label_DropFile->setFont(font5);
        label_DropFile->setStyleSheet(QString::fromUtf8(""));
        label_DropFile->setFrameShape(QFrame::Box);
        label_DropFile->setFrameShadow(QFrame::Plain);
        label_DropFile->setLineWidth(1);
        label_DropFile->setAlignment(Qt::AlignCenter);
        splitter_FilesList->addWidget(label_DropFile);

        gridLayout_21->addWidget(splitter_FilesList, 0, 0, 1, 5);

        label_FileCount = new QLabel(groupBox_FileList);
        label_FileCount->setObjectName("label_FileCount");
        sizePolicy4.setHeightForWidth(label_FileCount->sizePolicy().hasHeightForWidth());
        label_FileCount->setSizePolicy(sizePolicy4);
        label_FileCount->setStyleSheet(QString::fromUtf8(""));
        label_FileCount->setFrameShape(QFrame::Box);
        label_FileCount->setFrameShadow(QFrame::Plain);
        label_FileCount->setMidLineWidth(0);
        label_FileCount->setText(QString::fromUtf8("File count: 0"));
        label_FileCount->setAlignment(Qt::AlignCenter);
        label_FileCount->setMargin(5);
        label_FileCount->setOpenExternalLinks(false);

        gridLayout_21->addWidget(label_FileCount, 1, 0, 1, 1);

        frame_11 = new QFrame(groupBox_FileList);
        frame_11->setObjectName("frame_11");
        sizePolicy3.setHeightForWidth(frame_11->sizePolicy().hasHeightForWidth());
        frame_11->setSizePolicy(sizePolicy3);
        frame_11->setMaximumSize(QSize(16777215, 16777215));
        frame_11->setFrameShape(QFrame::NoFrame);
        frame_11->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_ReadFileList = new QPushButton(frame_11);
        pushButton_ReadFileList->setObjectName("pushButton_ReadFileList");
        sizePolicy3.setHeightForWidth(pushButton_ReadFileList->sizePolicy().hasHeightForWidth());
        pushButton_ReadFileList->setSizePolicy(sizePolicy3);
        pushButton_ReadFileList->setMinimumSize(QSize(35, 35));
        pushButton_ReadFileList->setMaximumSize(QSize(16777215, 16777215));
        pushButton_ReadFileList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/new/prefix1/icon/Read_FileList.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:hover{\n"
"image: url(:/new/prefix1/icon/Read_FileList_hover.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:pressed{\n"
"image: url(:/new/prefix1/icon/Read_FileList.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:disabled{\n"
"image: url(:/new/prefix1/icon/Read_FileList_disabled.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}"));
        pushButton_ReadFileList->setIconSize(QSize(35, 35));

        gridLayout_3->addWidget(pushButton_ReadFileList, 0, 6, 1, 1);

        line_10 = new QFrame(frame_11);
        line_10->setObjectName("line_10");
        line_10->setFrameShadow(QFrame::Sunken);
        line_10->setLineWidth(1);
        line_10->setFrameShape(QFrame::Shape::VLine);

        gridLayout_3->addWidget(line_10, 0, 7, 1, 1);

        line_25 = new QFrame(frame_11);
        line_25->setObjectName("line_25");
        line_25->setFrameShape(QFrame::Shape::VLine);
        line_25->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_3->addWidget(line_25, 0, 4, 1, 1);

        pushButton_ResizeFilesListSplitter = new QPushButton(frame_11);
        pushButton_ResizeFilesListSplitter->setObjectName("pushButton_ResizeFilesListSplitter");
        sizePolicy3.setHeightForWidth(pushButton_ResizeFilesListSplitter->sizePolicy().hasHeightForWidth());
        pushButton_ResizeFilesListSplitter->setSizePolicy(sizePolicy3);
        pushButton_ResizeFilesListSplitter->setMinimumSize(QSize(35, 35));
        pushButton_ResizeFilesListSplitter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/new/prefix1/icon/ResizeFilesListSplitter.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:hover{\n"
"image: url(:/new/prefix1/icon/ResizeFilesListSplitter_hover.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:pressed{\n"
"image: url(:/new/prefix1/icon/ResizeFilesListSplitter.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:disabled{\n"
"image: url(:/new/prefix1/icon/ResizeFilesListSplitter_disabled.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_ResizeFilesListSplitter, 0, 3, 1, 1);

        pushButton_RemoveItem = new QPushButton(frame_11);
        pushButton_RemoveItem->setObjectName("pushButton_RemoveItem");
        sizePolicy3.setHeightForWidth(pushButton_RemoveItem->sizePolicy().hasHeightForWidth());
        pushButton_RemoveItem->setSizePolicy(sizePolicy3);
        pushButton_RemoveItem->setMinimumSize(QSize(35, 35));
        pushButton_RemoveItem->setMaximumSize(QSize(16777215, 16777215));
        pushButton_RemoveItem->setContextMenuPolicy(Qt::ActionsContextMenu);
        pushButton_RemoveItem->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/new/prefix1/icon/RemoveItem.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:hover{\n"
"image: url(:/new/prefix1/icon/RemoveItem_hover.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:pressed{\n"
"image: url(:/new/prefix1/icon/RemoveItem.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:disabled{\n"
"image: url(:/new/prefix1/icon/RemoveItem_disabled.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_RemoveItem, 0, 1, 1, 1);

        pushButton_BrowserFile = new QPushButton(frame_11);
        pushButton_BrowserFile->setObjectName("pushButton_BrowserFile");
        sizePolicy3.setHeightForWidth(pushButton_BrowserFile->sizePolicy().hasHeightForWidth());
        pushButton_BrowserFile->setSizePolicy(sizePolicy3);
        pushButton_BrowserFile->setMinimumSize(QSize(35, 35));
        pushButton_BrowserFile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/new/prefix1/icon/AddNewFile.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:hover{\n"
"image: url(:/new/prefix1/icon/AddNewFile_hover.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:pressed{\n"
"image: url(:/new/prefix1/icon/AddNewFile.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:disabled{\n"
"image: url(:/new/prefix1/icon/AddNewFile_disabled.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_BrowserFile, 0, 8, 1, 1);

        line_20 = new QFrame(frame_11);
        line_20->setObjectName("line_20");
        line_20->setFrameShape(QFrame::Shape::VLine);
        line_20->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_3->addWidget(line_20, 0, 2, 1, 1);

        pushButton_ClearList = new QPushButton(frame_11);
        pushButton_ClearList->setObjectName("pushButton_ClearList");
        sizePolicy3.setHeightForWidth(pushButton_ClearList->sizePolicy().hasHeightForWidth());
        pushButton_ClearList->setSizePolicy(sizePolicy3);
        pushButton_ClearList->setMinimumSize(QSize(35, 35));
        pushButton_ClearList->setMaximumSize(QSize(16777215, 16777215));
        pushButton_ClearList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/new/prefix1/icon/ClearList.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:hover{\n"
"image: url(:/new/prefix1/icon/ClearList_hover.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:pressed{\n"
"image: url(:/new/prefix1/icon/ClearList.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:disabled{\n"
"image: url(:/new/prefix1/icon/ClearList_disabled.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_ClearList, 0, 0, 1, 1);

        pushButton_SaveFileList = new QPushButton(frame_11);
        pushButton_SaveFileList->setObjectName("pushButton_SaveFileList");
        sizePolicy3.setHeightForWidth(pushButton_SaveFileList->sizePolicy().hasHeightForWidth());
        pushButton_SaveFileList->setSizePolicy(sizePolicy3);
        pushButton_SaveFileList->setMinimumSize(QSize(35, 35));
        pushButton_SaveFileList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/new/prefix1/icon/Save_FileList.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:hover{\n"
"image: url(:/new/prefix1/icon/Save_FileList_hover.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:pressed{\n"
"image: url(:/new/prefix1/icon/Save_FileList.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:disabled{\n"
"image: url(:/new/prefix1/icon/Save_FileList_disabled.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}"));
        pushButton_SaveFileList->setIconSize(QSize(35, 35));

        gridLayout_3->addWidget(pushButton_SaveFileList, 0, 5, 1, 1);

        pushButton_TurnOffScreen = new QPushButton(frame_11);
        pushButton_TurnOffScreen->setObjectName("pushButton_TurnOffScreen");
        sizePolicy3.setHeightForWidth(pushButton_TurnOffScreen->sizePolicy().hasHeightForWidth());
        pushButton_TurnOffScreen->setSizePolicy(sizePolicy3);
        pushButton_TurnOffScreen->setMinimumSize(QSize(35, 35));
        pushButton_TurnOffScreen->setToolTipDuration(60000);
        pushButton_TurnOffScreen->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/new/prefix1/icon/TurnOffScreen.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:hover{\n"
"image: url(:/new/prefix1/icon/TurnOffScreen_hover.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:pressed{\n"
"image: url(:/new/prefix1/icon/TurnOffScreen.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}\n"
"QPushButton:disabled{\n"
"image: url(:/new/prefix1/icon/TurnOffScreen_disabled.png);\n"
"border-style:transparent;\n"
"border-radius:0px;\n"
"padding:0px;\n"
"}"));
        pushButton_TurnOffScreen->setText(QString::fromUtf8(""));

        gridLayout_3->addWidget(pushButton_TurnOffScreen, 0, 10, 1, 1);

        line_15 = new QFrame(frame_11);
        line_15->setObjectName("line_15");
        line_15->setFrameShape(QFrame::Shape::VLine);
        line_15->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_3->addWidget(line_15, 0, 9, 1, 1);


        gridLayout_21->addWidget(frame_11, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_21->addItem(horizontalSpacer, 1, 2, 1, 1);

        pushButton_HideSettings = new QPushButton(groupBox_FileList);
        pushButton_HideSettings->setObjectName("pushButton_HideSettings");
        sizePolicy3.setHeightForWidth(pushButton_HideSettings->sizePolicy().hasHeightForWidth());
        pushButton_HideSettings->setSizePolicy(sizePolicy3);
        pushButton_HideSettings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(52, 152, 219);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 177, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 134, 193);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_21->addWidget(pushButton_HideSettings, 1, 3, 1, 1);

        pushButton_HideTextBro = new QPushButton(groupBox_FileList);
        pushButton_HideTextBro->setObjectName("pushButton_HideTextBro");
        sizePolicy3.setHeightForWidth(pushButton_HideTextBro->sizePolicy().hasHeightForWidth());
        pushButton_HideTextBro->setSizePolicy(sizePolicy3);
        pushButton_HideTextBro->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(178, 58, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(191, 62, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(154, 50, 205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_21->addWidget(pushButton_HideTextBro, 1, 4, 1, 1);

        splitter_2->addWidget(groupBox_FileList);
        groupBox_Setting = new QGroupBox(splitter_2);
        groupBox_Setting->setObjectName("groupBox_Setting");
        sizePolicy2.setHeightForWidth(groupBox_Setting->sizePolicy().hasHeightForWidth());
        groupBox_Setting->setSizePolicy(sizePolicy2);
        groupBox_Setting->setMinimumSize(QSize(0, 0));
        groupBox_Setting->setMaximumSize(QSize(16777215, 305));
        gridLayout_4 = new QGridLayout(groupBox_Setting);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(5);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        groupBox_CustRes = new QGroupBox(groupBox_Setting);
        groupBox_CustRes->setObjectName("groupBox_CustRes");
        sizePolicy4.setHeightForWidth(groupBox_CustRes->sizePolicy().hasHeightForWidth());
        groupBox_CustRes->setSizePolicy(sizePolicy4);
        groupBox_CustRes->setMaximumSize(QSize(16777215, 16777215));
        groupBox_CustRes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_13 = new QGridLayout(groupBox_CustRes);
        gridLayout_13->setSpacing(5);
        gridLayout_13->setObjectName("gridLayout_13");
        gridLayout_13->setContentsMargins(6, 6, 6, 6);
        label_18 = new QLabel(groupBox_CustRes);
        label_18->setObjectName("label_18");
        sizePolicy4.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy4);

        gridLayout_13->addWidget(label_18, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_44 = new QLabel(groupBox_CustRes);
        label_44->setObjectName("label_44");
        sizePolicy2.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy2);
        label_44->setMaximumSize(QSize(16777215, 16777215));
#if QT_CONFIG(tooltip)
        label_44->setToolTip(QString::fromUtf8("<html><head/><body><p><img src=\":/new/prefix1/OtherPic/AspectRatioStrategy.jpg\"/></p></body></html>"));
#endif // QT_CONFIG(tooltip)
        label_44->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_44);

        comboBox_AspectRatio_custRes = new QComboBox(groupBox_CustRes);
        comboBox_AspectRatio_custRes->addItem(QString());
        comboBox_AspectRatio_custRes->addItem(QString());
        comboBox_AspectRatio_custRes->addItem(QString());
        comboBox_AspectRatio_custRes->setObjectName("comboBox_AspectRatio_custRes");
        comboBox_AspectRatio_custRes->setMinimumSize(QSize(280, 0));
#if QT_CONFIG(tooltip)
        comboBox_AspectRatio_custRes->setToolTip(QString::fromUtf8("<html><head/><body><p><img src=\":/new/prefix1/OtherPic/AspectRatioStrategy.jpg\"/></p></body></html>"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_2->addWidget(comboBox_AspectRatio_custRes);


        gridLayout_13->addLayout(verticalLayout_2, 6, 0, 1, 3);

        label_15 = new QLabel(groupBox_CustRes);
        label_15->setObjectName("label_15");
        sizePolicy4.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy4);

        gridLayout_13->addWidget(label_15, 1, 0, 1, 1);

        spinBox_CustRes_height = new QSpinBox(groupBox_CustRes);
        spinBox_CustRes_height->setObjectName("spinBox_CustRes_height");
        spinBox_CustRes_height->setMinimum(1);
        spinBox_CustRes_height->setMaximum(999999999);
        spinBox_CustRes_height->setValue(1080);

        gridLayout_13->addWidget(spinBox_CustRes_height, 1, 1, 1, 2);

        spinBox_CustRes_width = new QSpinBox(groupBox_CustRes);
        spinBox_CustRes_width->setObjectName("spinBox_CustRes_width");
        spinBox_CustRes_width->setMinimum(1);
        spinBox_CustRes_width->setMaximum(999999999);
        spinBox_CustRes_width->setValue(1920);

        gridLayout_13->addWidget(spinBox_CustRes_width, 0, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_CustRes_apply = new QPushButton(groupBox_CustRes);
        pushButton_CustRes_apply->setObjectName("pushButton_CustRes_apply");
        pushButton_CustRes_apply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(26, 188, 156);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(29, 214, 177);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(23, 173, 143);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout->addWidget(pushButton_CustRes_apply);

        pushButton_CustRes_cancel = new QPushButton(groupBox_CustRes);
        pushButton_CustRes_cancel->setObjectName("pushButton_CustRes_cancel");
        pushButton_CustRes_cancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(204, 65, 53);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"	background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout->addWidget(pushButton_CustRes_cancel);


        gridLayout_13->addLayout(horizontalLayout, 2, 0, 2, 3);

        checkBox_AutoSkip_CustomRes = new QCheckBox(groupBox_CustRes);
        checkBox_AutoSkip_CustomRes->setObjectName("checkBox_AutoSkip_CustomRes");
        sizePolicy2.setHeightForWidth(checkBox_AutoSkip_CustomRes->sizePolicy().hasHeightForWidth());
        checkBox_AutoSkip_CustomRes->setSizePolicy(sizePolicy2);

        gridLayout_13->addWidget(checkBox_AutoSkip_CustomRes, 4, 2, 1, 1);

        checkBox_custres_isAll = new QCheckBox(groupBox_CustRes);
        checkBox_custres_isAll->setObjectName("checkBox_custres_isAll");
        sizePolicy2.setHeightForWidth(checkBox_custres_isAll->sizePolicy().hasHeightForWidth());
        checkBox_custres_isAll->setSizePolicy(sizePolicy2);

        gridLayout_13->addWidget(checkBox_custres_isAll, 4, 0, 1, 2);


        horizontalLayout_8->addWidget(groupBox_CustRes);

        groupBox_2 = new QGroupBox(groupBox_Setting);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy4.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy4);
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_26 = new QGridLayout(groupBox_2);
        gridLayout_26->setObjectName("gridLayout_26");
        gridLayout_26->setContentsMargins(6, 6, 6, 6);
        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName("frame_2");
        frame_2->setEnabled(true);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMinimumSize(QSize(0, 45));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_45 = new QGridLayout(frame_2);
        gridLayout_45->setSpacing(7);
        gridLayout_45->setObjectName("gridLayout_45");
        gridLayout_45->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_45->setContentsMargins(0, 0, 0, 0);
        label_63 = new QLabel(frame_2);
        label_63->setObjectName("label_63");
        sizePolicy2.setHeightForWidth(label_63->sizePolicy().hasHeightForWidth());
        label_63->setSizePolicy(sizePolicy2);

        gridLayout_45->addWidget(label_63, 1, 0, 1, 1);

        spinBox_ImageQualityLevel = new QSpinBox(frame_2);
        spinBox_ImageQualityLevel->setObjectName("spinBox_ImageQualityLevel");
        spinBox_ImageQualityLevel->setMinimum(1);
        spinBox_ImageQualityLevel->setMaximum(100);
        spinBox_ImageQualityLevel->setValue(100);

        gridLayout_45->addWidget(spinBox_ImageQualityLevel, 2, 0, 1, 1);


        gridLayout_26->addWidget(frame_2, 1, 1, 1, 1);

        label_ImageStyle_W2xNCNNVulkan = new QLabel(groupBox_2);
        label_ImageStyle_W2xNCNNVulkan->setObjectName("label_ImageStyle_W2xNCNNVulkan");
        label_ImageStyle_W2xNCNNVulkan->setMaximumSize(QSize(16777215, 16777215));
        label_ImageStyle_W2xNCNNVulkan->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_26->addWidget(label_ImageStyle_W2xNCNNVulkan, 7, 0, 1, 1);

        label_ImageStyle_W2xCaffe = new QLabel(groupBox_2);
        label_ImageStyle_W2xCaffe->setObjectName("label_ImageStyle_W2xCaffe");

        gridLayout_26->addWidget(label_ImageStyle_W2xCaffe, 8, 0, 1, 1);

        frame = new QFrame(groupBox_2);
        frame->setObjectName("frame");
        frame->setEnabled(true);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setMinimumSize(QSize(0, 45));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        gridLayout_42 = new QGridLayout(frame);
        gridLayout_42->setSpacing(7);
        gridLayout_42->setObjectName("gridLayout_42");
        gridLayout_42->setContentsMargins(0, 0, 0, 0);
        comboBox_ImageSaveFormat = new QComboBox(frame);
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("png"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("jpg"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("webp"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("bmp"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("tiff"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("pdf"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("gif"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("eps"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("tga"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("jp2"));
        comboBox_ImageSaveFormat->addItem(QString::fromUtf8("svg"));
        comboBox_ImageSaveFormat->setObjectName("comboBox_ImageSaveFormat");
        comboBox_ImageSaveFormat->setMaxVisibleItems(15);

        gridLayout_42->addWidget(comboBox_ImageSaveFormat, 1, 0, 1, 1);

        label_20 = new QLabel(frame);
        label_20->setObjectName("label_20");

        gridLayout_42->addWidget(label_20, 0, 0, 1, 1);


        gridLayout_26->addWidget(frame, 1, 0, 1, 1);

        comboBox_ImageStyle = new QComboBox(groupBox_2);
        comboBox_ImageStyle->addItem(QString());
        comboBox_ImageStyle->addItem(QString());
        comboBox_ImageStyle->setObjectName("comboBox_ImageStyle");
        comboBox_ImageStyle->setMinimumSize(QSize(120, 0));
        comboBox_ImageStyle->setCurrentText(QString::fromUtf8("2D Anime"));

        gridLayout_26->addWidget(comboBox_ImageStyle, 7, 1, 1, 1);

        comboBox_ImageStyle_Waifu2xCaffe = new QComboBox(groupBox_2);
        comboBox_ImageStyle_Waifu2xCaffe->addItem(QString());
        comboBox_ImageStyle_Waifu2xCaffe->addItem(QString());
        comboBox_ImageStyle_Waifu2xCaffe->setObjectName("comboBox_ImageStyle_Waifu2xCaffe");

        gridLayout_26->addWidget(comboBox_ImageStyle_Waifu2xCaffe, 8, 1, 1, 1);

        frame_13 = new QFrame(groupBox_2);
        frame_13->setObjectName("frame_13");
        sizePolicy2.setHeightForWidth(frame_13->sizePolicy().hasHeightForWidth());
        frame_13->setSizePolicy(sizePolicy2);
        frame_13->setMinimumSize(QSize(0, 0));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        gridLayout_66 = new QGridLayout(frame_13);
        gridLayout_66->setObjectName("gridLayout_66");
        gridLayout_66->setHorizontalSpacing(3);
        gridLayout_66->setVerticalSpacing(0);
        gridLayout_66->setContentsMargins(0, 0, 0, 0);
        checkBox_DelOriginal = new QCheckBox(frame_13);
        checkBox_DelOriginal->setObjectName("checkBox_DelOriginal");
        sizePolicy2.setHeightForWidth(checkBox_DelOriginal->sizePolicy().hasHeightForWidth());
        checkBox_DelOriginal->setSizePolicy(sizePolicy2);
        checkBox_DelOriginal->setContextMenuPolicy(Qt::ActionsContextMenu);

        gridLayout_66->addWidget(checkBox_DelOriginal, 0, 1, 1, 1);

        checkBox_ReplaceOriginalFile = new QCheckBox(frame_13);
        checkBox_ReplaceOriginalFile->setObjectName("checkBox_ReplaceOriginalFile");
        sizePolicy2.setHeightForWidth(checkBox_ReplaceOriginalFile->sizePolicy().hasHeightForWidth());
        checkBox_ReplaceOriginalFile->setSizePolicy(sizePolicy2);
        checkBox_ReplaceOriginalFile->setContextMenuPolicy(Qt::ActionsContextMenu);

        gridLayout_66->addWidget(checkBox_ReplaceOriginalFile, 0, 2, 1, 1);

        checkBox_OptGIF = new QCheckBox(frame_13);
        checkBox_OptGIF->setObjectName("checkBox_OptGIF");
        sizePolicy2.setHeightForWidth(checkBox_OptGIF->sizePolicy().hasHeightForWidth());
        checkBox_OptGIF->setSizePolicy(sizePolicy2);

        gridLayout_66->addWidget(checkBox_OptGIF, 0, 0, 1, 1);


        gridLayout_26->addWidget(frame_13, 4, 0, 1, 2);

        comboBox_FinishAction = new QComboBox(groupBox_2);
        comboBox_FinishAction->addItem(QString());
        comboBox_FinishAction->addItem(QString());
        comboBox_FinishAction->addItem(QString());
        comboBox_FinishAction->addItem(QString());
        comboBox_FinishAction->addItem(QString());
        comboBox_FinishAction->setObjectName("comboBox_FinishAction");

        gridLayout_26->addWidget(comboBox_FinishAction, 5, 0, 1, 1);

        checkBox_ReProcFinFiles = new QCheckBox(groupBox_2);
        checkBox_ReProcFinFiles->setObjectName("checkBox_ReProcFinFiles");

        gridLayout_26->addWidget(checkBox_ReProcFinFiles, 5, 1, 1, 1);

        checkBox_FrameInterpolationOnly_Video = new QCheckBox(groupBox_2);
        checkBox_FrameInterpolationOnly_Video->setObjectName("checkBox_FrameInterpolationOnly_Video");
        checkBox_FrameInterpolationOnly_Video->setEnabled(false);
        QFont font6;
        font6.setBold(false);
        checkBox_FrameInterpolationOnly_Video->setFont(font6);
        checkBox_FrameInterpolationOnly_Video->setStyleSheet(QString::fromUtf8(""));

        gridLayout_26->addWidget(checkBox_FrameInterpolationOnly_Video, 0, 1, 1, 1);

        checkBox_EnableVFI_Home = new QCheckBox(groupBox_2);
        checkBox_EnableVFI_Home->setObjectName("checkBox_EnableVFI_Home");
        checkBox_EnableVFI_Home->setStyleSheet(QString::fromUtf8("color: rgb(33, 85, 255);"));

        gridLayout_26->addWidget(checkBox_EnableVFI_Home, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(groupBox_2);

        groupBox_OutPut = new QGroupBox(groupBox_Setting);
        groupBox_OutPut->setObjectName("groupBox_OutPut");
        groupBox_OutPut->setMinimumSize(QSize(0, 0));
        groupBox_OutPut->setMaximumSize(QSize(16777215, 16777215));
        groupBox_OutPut->setCheckable(false);
        gridLayout_23 = new QGridLayout(groupBox_OutPut);
        gridLayout_23->setObjectName("gridLayout_23");
        gridLayout_23->setContentsMargins(6, 6, 6, 6);
        lineEdit_outputPath = new QLineEdit(groupBox_OutPut);
        lineEdit_outputPath->setObjectName("lineEdit_outputPath");
        lineEdit_outputPath->setEnabled(false);
        lineEdit_outputPath->setFocusPolicy(Qt::StrongFocus);
        lineEdit_outputPath->setContextMenuPolicy(Qt::ActionsContextMenu);
        lineEdit_outputPath->setText(QString::fromUtf8(""));
        lineEdit_outputPath->setClearButtonEnabled(true);

        gridLayout_23->addWidget(lineEdit_outputPath, 0, 0, 1, 3);

        scrollArea_outputPathSettings = new QScrollArea(groupBox_OutPut);
        scrollArea_outputPathSettings->setObjectName("scrollArea_outputPathSettings");
        sizePolicy5.setHeightForWidth(scrollArea_outputPathSettings->sizePolicy().hasHeightForWidth());
        scrollArea_outputPathSettings->setSizePolicy(sizePolicy5);
        scrollArea_outputPathSettings->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea_outputPathSettings->setFrameShadow(QFrame::Sunken);
        scrollArea_outputPathSettings->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea_outputPathSettings->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 241, 122));
        gridLayout_37 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_37->setObjectName("gridLayout_37");
        checkBox_OutPath_KeepOriginalFileName = new QCheckBox(scrollAreaWidgetContents);
        checkBox_OutPath_KeepOriginalFileName->setObjectName("checkBox_OutPath_KeepOriginalFileName");
        checkBox_OutPath_KeepOriginalFileName->setEnabled(false);
        sizePolicy2.setHeightForWidth(checkBox_OutPath_KeepOriginalFileName->sizePolicy().hasHeightForWidth());
        checkBox_OutPath_KeepOriginalFileName->setSizePolicy(sizePolicy2);

        gridLayout_37->addWidget(checkBox_OutPath_KeepOriginalFileName, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        checkBox_OutPath_isEnabled = new QCheckBox(scrollAreaWidgetContents);
        checkBox_OutPath_isEnabled->setObjectName("checkBox_OutPath_isEnabled");
        sizePolicy2.setHeightForWidth(checkBox_OutPath_isEnabled->sizePolicy().hasHeightForWidth());
        checkBox_OutPath_isEnabled->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(checkBox_OutPath_isEnabled);

        checkBox_OutPath_Overwrite = new QCheckBox(scrollAreaWidgetContents);
        checkBox_OutPath_Overwrite->setObjectName("checkBox_OutPath_Overwrite");
        checkBox_OutPath_Overwrite->setEnabled(false);
        sizePolicy2.setHeightForWidth(checkBox_OutPath_Overwrite->sizePolicy().hasHeightForWidth());
        checkBox_OutPath_Overwrite->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(checkBox_OutPath_Overwrite);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_17);


        gridLayout_37->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        checkBox_KeepParentFolder = new QCheckBox(scrollAreaWidgetContents);
        checkBox_KeepParentFolder->setObjectName("checkBox_KeepParentFolder");
        checkBox_KeepParentFolder->setEnabled(false);
        sizePolicy2.setHeightForWidth(checkBox_KeepParentFolder->sizePolicy().hasHeightForWidth());
        checkBox_KeepParentFolder->setSizePolicy(sizePolicy2);

        gridLayout_37->addWidget(checkBox_KeepParentFolder, 3, 0, 1, 1);

        checkBox_AutoOpenOutputPath = new QCheckBox(scrollAreaWidgetContents);
        checkBox_AutoOpenOutputPath->setObjectName("checkBox_AutoOpenOutputPath");
        checkBox_AutoOpenOutputPath->setEnabled(false);

        gridLayout_37->addWidget(checkBox_AutoOpenOutputPath, 4, 0, 1, 1);

        scrollArea_outputPathSettings->setWidget(scrollAreaWidgetContents);

        gridLayout_23->addWidget(scrollArea_outputPathSettings, 1, 0, 3, 3);


        horizontalLayout_8->addWidget(groupBox_OutPut);


        gridLayout_4->addLayout(horizontalLayout_8, 0, 0, 1, 3);

        groupBox_ScaleRaton_DenoiseLevel = new QGroupBox(groupBox_Setting);
        groupBox_ScaleRaton_DenoiseLevel->setObjectName("groupBox_ScaleRaton_DenoiseLevel");
        sizePolicy2.setHeightForWidth(groupBox_ScaleRaton_DenoiseLevel->sizePolicy().hasHeightForWidth());
        groupBox_ScaleRaton_DenoiseLevel->setSizePolicy(sizePolicy2);
        groupBox_ScaleRaton_DenoiseLevel->setMinimumSize(QSize(0, 0));
        groupBox_ScaleRaton_DenoiseLevel->setMaximumSize(QSize(16777215, 85));
        groupBox_ScaleRaton_DenoiseLevel->setTitle(QString::fromUtf8(""));
        groupBox_ScaleRaton_DenoiseLevel->setAlignment(Qt::AlignCenter);
        groupBox_ScaleRaton_DenoiseLevel->setFlat(true);
        groupBox_ScaleRaton_DenoiseLevel->setCheckable(false);
        gridLayout = new QGridLayout(groupBox_ScaleRaton_DenoiseLevel);
        gridLayout->setObjectName("gridLayout");
        line_45 = new QFrame(groupBox_ScaleRaton_DenoiseLevel);
        line_45->setObjectName("line_45");
        line_45->setFrameShadow(QFrame::Plain);
        line_45->setFrameShape(QFrame::Shape::VLine);

        gridLayout->addWidget(line_45, 0, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 0, 4, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setObjectName("horizontalLayout_51");
        label_57 = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label_57->setObjectName("label_57");
        sizePolicy4.setHeightForWidth(label_57->sizePolicy().hasHeightForWidth());
        label_57->setSizePolicy(sizePolicy4);
        label_57->setStyleSheet(QString::fromUtf8("color: rgb(255, 70, 14);"));

        horizontalLayout_51->addWidget(label_57);

        label = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label->setObjectName("label");
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);

        horizontalLayout_51->addWidget(label);

        doubleSpinBox_ScaleRatio_image = new QDoubleSpinBox(groupBox_ScaleRaton_DenoiseLevel);
        doubleSpinBox_ScaleRatio_image->setObjectName("doubleSpinBox_ScaleRatio_image");
        doubleSpinBox_ScaleRatio_image->setDecimals(4);
        doubleSpinBox_ScaleRatio_image->setMinimum(1.000000000000000);
        doubleSpinBox_ScaleRatio_image->setMaximum(99999.000000000000000);
        doubleSpinBox_ScaleRatio_image->setValue(2.000000000000000);

        horizontalLayout_51->addWidget(doubleSpinBox_ScaleRatio_image);

        line_3 = new QFrame(groupBox_ScaleRaton_DenoiseLevel);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_51->addWidget(line_3);

        label_16 = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label_16->setObjectName("label_16");
        sizePolicy4.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy4);

        horizontalLayout_51->addWidget(label_16);

        doubleSpinBox_ScaleRatio_gif = new QDoubleSpinBox(groupBox_ScaleRaton_DenoiseLevel);
        doubleSpinBox_ScaleRatio_gif->setObjectName("doubleSpinBox_ScaleRatio_gif");
        doubleSpinBox_ScaleRatio_gif->setDecimals(4);
        doubleSpinBox_ScaleRatio_gif->setMinimum(1.000000000000000);
        doubleSpinBox_ScaleRatio_gif->setMaximum(99999.000000000000000);
        doubleSpinBox_ScaleRatio_gif->setValue(2.000000000000000);

        horizontalLayout_51->addWidget(doubleSpinBox_ScaleRatio_gif);

        line_4 = new QFrame(groupBox_ScaleRaton_DenoiseLevel);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_51->addWidget(line_4);

        label_17 = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label_17->setObjectName("label_17");
        sizePolicy4.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy4);

        horizontalLayout_51->addWidget(label_17);

        doubleSpinBox_ScaleRatio_video = new QDoubleSpinBox(groupBox_ScaleRaton_DenoiseLevel);
        doubleSpinBox_ScaleRatio_video->setObjectName("doubleSpinBox_ScaleRatio_video");
        doubleSpinBox_ScaleRatio_video->setDecimals(4);
        doubleSpinBox_ScaleRatio_video->setMinimum(1.000000000000000);
        doubleSpinBox_ScaleRatio_video->setMaximum(99999.000000000000000);
        doubleSpinBox_ScaleRatio_video->setValue(2.000000000000000);

        horizontalLayout_51->addWidget(doubleSpinBox_ScaleRatio_video);


        verticalLayout_3->addLayout(horizontalLayout_51);

        line_49 = new QFrame(groupBox_ScaleRaton_DenoiseLevel);
        line_49->setObjectName("line_49");
        line_49->setFrameShadow(QFrame::Plain);
        line_49->setFrameShape(QFrame::Shape::HLine);

        verticalLayout_3->addWidget(line_49);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setObjectName("horizontalLayout_52");
        label_66 = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label_66->setObjectName("label_66");
        sizePolicy4.setHeightForWidth(label_66->sizePolicy().hasHeightForWidth());
        label_66->setSizePolicy(sizePolicy4);
        label_66->setStyleSheet(QString::fromUtf8("color: rgb(33, 85, 254);"));

        horizontalLayout_52->addWidget(label_66);

        label_ImageDenoiseLevel = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label_ImageDenoiseLevel->setObjectName("label_ImageDenoiseLevel");
        sizePolicy4.setHeightForWidth(label_ImageDenoiseLevel->sizePolicy().hasHeightForWidth());
        label_ImageDenoiseLevel->setSizePolicy(sizePolicy4);

        horizontalLayout_52->addWidget(label_ImageDenoiseLevel);

        spinBox_DenoiseLevel_image = new QSpinBox(groupBox_ScaleRaton_DenoiseLevel);
        spinBox_DenoiseLevel_image->setObjectName("spinBox_DenoiseLevel_image");
        spinBox_DenoiseLevel_image->setEnabled(true);
        spinBox_DenoiseLevel_image->setFocusPolicy(Qt::WheelFocus);
        spinBox_DenoiseLevel_image->setMinimum(-1);
        spinBox_DenoiseLevel_image->setMaximum(3);
        spinBox_DenoiseLevel_image->setSingleStep(1);
        spinBox_DenoiseLevel_image->setStepType(QAbstractSpinBox::DefaultStepType);
        spinBox_DenoiseLevel_image->setValue(2);
        spinBox_DenoiseLevel_image->setDisplayIntegerBase(10);

        horizontalLayout_52->addWidget(spinBox_DenoiseLevel_image);

        line_47 = new QFrame(groupBox_ScaleRaton_DenoiseLevel);
        line_47->setObjectName("line_47");
        line_47->setFrameShape(QFrame::Shape::VLine);
        line_47->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_52->addWidget(line_47);

        label_GIFDenoiseLevel = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label_GIFDenoiseLevel->setObjectName("label_GIFDenoiseLevel");
        sizePolicy4.setHeightForWidth(label_GIFDenoiseLevel->sizePolicy().hasHeightForWidth());
        label_GIFDenoiseLevel->setSizePolicy(sizePolicy4);

        horizontalLayout_52->addWidget(label_GIFDenoiseLevel);

        spinBox_DenoiseLevel_gif = new QSpinBox(groupBox_ScaleRaton_DenoiseLevel);
        spinBox_DenoiseLevel_gif->setObjectName("spinBox_DenoiseLevel_gif");
        spinBox_DenoiseLevel_gif->setEnabled(true);
        spinBox_DenoiseLevel_gif->setFocusPolicy(Qt::WheelFocus);
        spinBox_DenoiseLevel_gif->setMinimum(-1);
        spinBox_DenoiseLevel_gif->setMaximum(3);
        spinBox_DenoiseLevel_gif->setSingleStep(1);
        spinBox_DenoiseLevel_gif->setStepType(QAbstractSpinBox::DefaultStepType);
        spinBox_DenoiseLevel_gif->setValue(2);
        spinBox_DenoiseLevel_gif->setDisplayIntegerBase(10);

        horizontalLayout_52->addWidget(spinBox_DenoiseLevel_gif);

        line_48 = new QFrame(groupBox_ScaleRaton_DenoiseLevel);
        line_48->setObjectName("line_48");
        line_48->setFrameShape(QFrame::Shape::VLine);
        line_48->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_52->addWidget(line_48);

        label_VideoDenoiseLevel = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label_VideoDenoiseLevel->setObjectName("label_VideoDenoiseLevel");
        sizePolicy4.setHeightForWidth(label_VideoDenoiseLevel->sizePolicy().hasHeightForWidth());
        label_VideoDenoiseLevel->setSizePolicy(sizePolicy4);

        horizontalLayout_52->addWidget(label_VideoDenoiseLevel);

        spinBox_DenoiseLevel_video = new QSpinBox(groupBox_ScaleRaton_DenoiseLevel);
        spinBox_DenoiseLevel_video->setObjectName("spinBox_DenoiseLevel_video");
        spinBox_DenoiseLevel_video->setEnabled(true);
        spinBox_DenoiseLevel_video->setFocusPolicy(Qt::WheelFocus);
        spinBox_DenoiseLevel_video->setMinimum(-1);
        spinBox_DenoiseLevel_video->setMaximum(3);
        spinBox_DenoiseLevel_video->setSingleStep(1);
        spinBox_DenoiseLevel_video->setStepType(QAbstractSpinBox::DefaultStepType);
        spinBox_DenoiseLevel_video->setValue(2);
        spinBox_DenoiseLevel_video->setDisplayIntegerBase(10);

        horizontalLayout_52->addWidget(spinBox_DenoiseLevel_video);


        verticalLayout_3->addLayout(horizontalLayout_52);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_28 = new QLabel(groupBox_ScaleRaton_DenoiseLevel);
        label_28->setObjectName("label_28");
        sizePolicy4.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(label_28);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setObjectName("horizontalLayout_50");
        pushButton_MultipleOfFPS_VFI_MIN = new QPushButton(groupBox_ScaleRaton_DenoiseLevel);
        pushButton_MultipleOfFPS_VFI_MIN->setObjectName("pushButton_MultipleOfFPS_VFI_MIN");
        pushButton_MultipleOfFPS_VFI_MIN->setMaximumSize(QSize(30, 16777215));
        pushButton_MultipleOfFPS_VFI_MIN->setText(QString::fromUtf8("-"));

        horizontalLayout_50->addWidget(pushButton_MultipleOfFPS_VFI_MIN);

        spinBox_MultipleOfFPS_VFI = new QSpinBox(groupBox_ScaleRaton_DenoiseLevel);
        spinBox_MultipleOfFPS_VFI->setObjectName("spinBox_MultipleOfFPS_VFI");
        spinBox_MultipleOfFPS_VFI->setFocusPolicy(Qt::NoFocus);
        spinBox_MultipleOfFPS_VFI->setWrapping(false);
        spinBox_MultipleOfFPS_VFI->setReadOnly(true);
        spinBox_MultipleOfFPS_VFI->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_MultipleOfFPS_VFI->setKeyboardTracking(false);
        spinBox_MultipleOfFPS_VFI->setMinimum(2);
        spinBox_MultipleOfFPS_VFI->setMaximum(999999999);
        spinBox_MultipleOfFPS_VFI->setSingleStep(0);

        horizontalLayout_50->addWidget(spinBox_MultipleOfFPS_VFI);

        pushButton_MultipleOfFPS_VFI_ADD = new QPushButton(groupBox_ScaleRaton_DenoiseLevel);
        pushButton_MultipleOfFPS_VFI_ADD->setObjectName("pushButton_MultipleOfFPS_VFI_ADD");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton_MultipleOfFPS_VFI_ADD->sizePolicy().hasHeightForWidth());
        pushButton_MultipleOfFPS_VFI_ADD->setSizePolicy(sizePolicy6);
        pushButton_MultipleOfFPS_VFI_ADD->setMaximumSize(QSize(30, 16777215));
        pushButton_MultipleOfFPS_VFI_ADD->setText(QString::fromUtf8("+"));

        horizontalLayout_50->addWidget(pushButton_MultipleOfFPS_VFI_ADD);


        verticalLayout_6->addLayout(horizontalLayout_50);


        gridLayout->addLayout(verticalLayout_6, 0, 3, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_ScaleRaton_DenoiseLevel, 1, 0, 1, 3);

        splitter_2->addWidget(groupBox_Setting);

        gridLayout_15->addWidget(splitter_2, 0, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/icon/Home.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_Home, icon6, QString());
        tab_EngineSettings = new QWidget();
        tab_EngineSettings->setObjectName("tab_EngineSettings");
        gridLayout_29 = new QGridLayout(tab_EngineSettings);
        gridLayout_29->setObjectName("gridLayout_29");
        gridLayout_29->setHorizontalSpacing(0);
        gridLayout_29->setContentsMargins(6, 6, 6, 6);
        groupBox_NumOfThreads = new QGroupBox(tab_EngineSettings);
        groupBox_NumOfThreads->setObjectName("groupBox_NumOfThreads");
        groupBox_NumOfThreads->setEnabled(true);
        sizePolicy2.setHeightForWidth(groupBox_NumOfThreads->sizePolicy().hasHeightForWidth());
        groupBox_NumOfThreads->setSizePolicy(sizePolicy2);
        groupBox_NumOfThreads->setMaximumSize(QSize(16777215, 16777215));
        groupBox_NumOfThreads->setAlignment(Qt::AlignCenter);
        groupBox_NumOfThreads->setFlat(false);
        gridLayout_8 = new QGridLayout(groupBox_NumOfThreads);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(6, 6, 6, 6);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        frame_16 = new QFrame(groupBox_NumOfThreads);
        frame_16->setObjectName("frame_16");
        sizePolicy2.setHeightForWidth(frame_16->sizePolicy().hasHeightForWidth());
        frame_16->setSizePolicy(sizePolicy2);
        frame_16->setFrameShape(QFrame::NoFrame);
        frame_16->setFrameShadow(QFrame::Raised);
        gridLayout_57 = new QGridLayout(frame_16);
        gridLayout_57->setObjectName("gridLayout_57");
        gridLayout_57->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(frame_16);
        label_11->setObjectName("label_11");
        sizePolicy4.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy4);
        label_11->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_57->addWidget(label_11, 0, 2, 1, 1);

        line = new QFrame(frame_16);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_57->addWidget(line, 0, 4, 1, 1);

        label_13 = new QLabel(frame_16);
        label_13->setObjectName("label_13");
        sizePolicy4.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy4);
        label_13->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_57->addWidget(label_13, 0, 8, 1, 1);

        line_2 = new QFrame(frame_16);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_57->addWidget(line_2, 0, 7, 1, 1);

        spinBox_ThreadNum_gif_internal = new QSpinBox(frame_16);
        spinBox_ThreadNum_gif_internal->setObjectName("spinBox_ThreadNum_gif_internal");
        sizePolicy2.setHeightForWidth(spinBox_ThreadNum_gif_internal->sizePolicy().hasHeightForWidth());
        spinBox_ThreadNum_gif_internal->setSizePolicy(sizePolicy2);
        spinBox_ThreadNum_gif_internal->setMinimum(1);
        spinBox_ThreadNum_gif_internal->setMaximum(999999999);
        spinBox_ThreadNum_gif_internal->setSingleStep(1);
        spinBox_ThreadNum_gif_internal->setValue(1);

        gridLayout_57->addWidget(spinBox_ThreadNum_gif_internal, 0, 6, 1, 1);

        spinBox_ThreadNum_video_internal = new QSpinBox(frame_16);
        spinBox_ThreadNum_video_internal->setObjectName("spinBox_ThreadNum_video_internal");
        sizePolicy2.setHeightForWidth(spinBox_ThreadNum_video_internal->sizePolicy().hasHeightForWidth());
        spinBox_ThreadNum_video_internal->setSizePolicy(sizePolicy2);
        spinBox_ThreadNum_video_internal->setMinimum(1);
        spinBox_ThreadNum_video_internal->setMaximum(999999999);
        spinBox_ThreadNum_video_internal->setSingleStep(1);
        spinBox_ThreadNum_video_internal->setValue(1);

        gridLayout_57->addWidget(spinBox_ThreadNum_video_internal, 0, 9, 1, 1);

        label_12 = new QLabel(frame_16);
        label_12->setObjectName("label_12");
        sizePolicy4.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy4);
        label_12->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_57->addWidget(label_12, 0, 5, 1, 1);

        spinBox_ThreadNum_image = new QSpinBox(frame_16);
        spinBox_ThreadNum_image->setObjectName("spinBox_ThreadNum_image");
        sizePolicy2.setHeightForWidth(spinBox_ThreadNum_image->sizePolicy().hasHeightForWidth());
        spinBox_ThreadNum_image->setSizePolicy(sizePolicy2);
        spinBox_ThreadNum_image->setMinimum(1);
        spinBox_ThreadNum_image->setMaximum(999999999);
        spinBox_ThreadNum_image->setSingleStep(1);
        spinBox_ThreadNum_image->setValue(1);

        gridLayout_57->addWidget(spinBox_ThreadNum_image, 0, 3, 1, 1);


        gridLayout_8->addWidget(frame_16, 0, 1, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_29, 0, 0, 1, 1);

        gridLayout_8->setColumnStretch(0, 20);
        gridLayout_8->setColumnStretch(1, 18);
        gridLayout_8->setColumnStretch(2, 20);

        gridLayout_29->addWidget(groupBox_NumOfThreads, 1, 0, 1, 1);

        groupBox_Engine = new QGroupBox(tab_EngineSettings);
        groupBox_Engine->setObjectName("groupBox_Engine");
        groupBox_Engine->setMinimumSize(QSize(0, 0));
        groupBox_Engine->setAlignment(Qt::AlignCenter);
        groupBox_Engine->setFlat(false);
        groupBox_Engine->setCheckable(false);
        gridLayout_6 = new QGridLayout(groupBox_Engine);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(6, 6, 6, 6);
        line_6 = new QFrame(groupBox_Engine);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_6->addWidget(line_6, 2, 0, 1, 4);

        frame_18 = new QFrame(groupBox_Engine);
        frame_18->setObjectName("frame_18");
        frame_18->setMinimumSize(QSize(0, 0));
        frame_18->setFrameShape(QFrame::NoFrame);
        frame_18->setFrameShadow(QFrame::Raised);
        gridLayout_59 = new QGridLayout(frame_18);
        gridLayout_59->setObjectName("gridLayout_59");
        gridLayout_59->setContentsMargins(0, 0, 0, 0);
        frame_17 = new QFrame(frame_18);
        frame_17->setObjectName("frame_17");
        sizePolicy2.setHeightForWidth(frame_17->sizePolicy().hasHeightForWidth());
        frame_17->setSizePolicy(sizePolicy2);
        frame_17->setFrameShape(QFrame::NoFrame);
        frame_17->setFrameShadow(QFrame::Raised);
        gridLayout_58 = new QGridLayout(frame_17);
        gridLayout_58->setObjectName("gridLayout_58");
        gridLayout_58->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(frame_17);
        label_7->setObjectName("label_7");
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setMaximumSize(QSize(16777215, 16777215));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_58->addWidget(label_7, 0, 4, 1, 1);

        line_12 = new QFrame(frame_17);
        line_12->setObjectName("line_12");
        line_12->setFrameShape(QFrame::Shape::VLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_58->addWidget(line_12, 0, 6, 1, 1);

        comboBox_Engine_GIF = new QComboBox(frame_17);
        comboBox_Engine_GIF->addItem(QString::fromUtf8("waifu2x-ncnn-vulkan"));
        comboBox_Engine_GIF->addItem(QString::fromUtf8("waifu2x-converter"));
        comboBox_Engine_GIF->addItem(QString::fromUtf8("srmd-ncnn-vulkan"));
        comboBox_Engine_GIF->addItem(QString::fromUtf8("Anime4K"));
        comboBox_Engine_GIF->addItem(QString::fromUtf8("waifu2x-caffe"));
        comboBox_Engine_GIF->addItem(QString::fromUtf8("realsr-ncnn-vulkan"));
        comboBox_Engine_GIF->addItem(QString());
        comboBox_Engine_GIF->setObjectName("comboBox_Engine_GIF");
        comboBox_Engine_GIF->setEnabled(true);
        comboBox_Engine_GIF->setMinimumSize(QSize(190, 0));
        comboBox_Engine_GIF->setCurrentText(QString::fromUtf8("waifu2x-ncnn-vulkan"));
        comboBox_Engine_GIF->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_58->addWidget(comboBox_Engine_GIF, 0, 5, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_58->addItem(horizontalSpacer_30, 0, 0, 1, 1);

        label_6 = new QLabel(frame_17);
        label_6->setObjectName("label_6");
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_58->addWidget(label_6, 0, 1, 1, 1);

        label_8 = new QLabel(frame_17);
        label_8->setObjectName("label_8");
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);
        label_8->setMaximumSize(QSize(16777215, 16777215));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_58->addWidget(label_8, 0, 7, 1, 1);

        line_11 = new QFrame(frame_17);
        line_11->setObjectName("line_11");
        line_11->setFrameShape(QFrame::Shape::VLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_58->addWidget(line_11, 0, 3, 1, 1);

        comboBox_Engine_Video = new QComboBox(frame_17);
        comboBox_Engine_Video->addItem(QString::fromUtf8("waifu2x-ncnn-vulkan"));
        comboBox_Engine_Video->addItem(QString::fromUtf8("waifu2x-converter"));
        comboBox_Engine_Video->addItem(QString::fromUtf8("Anime4k"));
        comboBox_Engine_Video->addItem(QString::fromUtf8("srmd-ncnn-vulkan"));
        comboBox_Engine_Video->addItem(QString::fromUtf8("waifu2x-caffe"));
        comboBox_Engine_Video->addItem(QString::fromUtf8("realsr-ncnn-vulkan"));
        comboBox_Engine_Video->addItem(QString());
        comboBox_Engine_Video->setObjectName("comboBox_Engine_Video");
        comboBox_Engine_Video->setEnabled(true);
        comboBox_Engine_Video->setMinimumSize(QSize(190, 0));
        comboBox_Engine_Video->setCurrentText(QString::fromUtf8("waifu2x-ncnn-vulkan"));
        comboBox_Engine_Video->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_58->addWidget(comboBox_Engine_Video, 0, 8, 1, 1);

        comboBox_Engine_Image = new QComboBox(frame_17);
        comboBox_Engine_Image->addItem(QString::fromUtf8("waifu2x-ncnn-vulkan"));
        comboBox_Engine_Image->addItem(QString::fromUtf8("waifu2x-converter"));
        comboBox_Engine_Image->addItem(QString::fromUtf8("srmd-ncnn-vulkan"));
        comboBox_Engine_Image->addItem(QString::fromUtf8("Anime4K"));
        comboBox_Engine_Image->addItem(QString::fromUtf8("waifu2x-caffe"));
        comboBox_Engine_Image->addItem(QString::fromUtf8("realsr-ncnn-vulkan"));
        comboBox_Engine_Image->addItem(QString());
        comboBox_Engine_Image->setObjectName("comboBox_Engine_Image");
        comboBox_Engine_Image->setEnabled(true);
        comboBox_Engine_Image->setMinimumSize(QSize(190, 0));
        comboBox_Engine_Image->setMaximumSize(QSize(16777215, 16777215));
        comboBox_Engine_Image->setCurrentText(QString::fromUtf8("waifu2x-ncnn-vulkan"));
        comboBox_Engine_Image->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_58->addWidget(comboBox_Engine_Image, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_58->addItem(horizontalSpacer_8, 0, 9, 1, 1);


        gridLayout_59->addWidget(frame_17, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_18, 0, 0, 1, 4);

        tabWidget_Engines = new QTabWidget(groupBox_Engine);
        tabWidget_Engines->setObjectName("tabWidget_Engines");
        tabWidget_Engines->setTabPosition(QTabWidget::North);
        tabWidget_Engines->setUsesScrollButtons(false);
        tab_W2xNcnnVulkan = new QWidget();
        tab_W2xNcnnVulkan->setObjectName("tab_W2xNcnnVulkan");
        gridLayout_53 = new QGridLayout(tab_W2xNcnnVulkan);
        gridLayout_53->setObjectName("gridLayout_53");
        gridLayout_53->setVerticalSpacing(7);
        gridLayout_53->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_10 = new QLabel(tab_W2xNcnnVulkan);
        label_10->setObjectName("label_10");
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);

        horizontalLayout_13->addWidget(label_10);

        comboBox_GPUID = new QComboBox(tab_W2xNcnnVulkan);
        comboBox_GPUID->addItem(QString::fromUtf8("auto"));
        comboBox_GPUID->setObjectName("comboBox_GPUID");
        comboBox_GPUID->setEnabled(true);
        sizePolicy2.setHeightForWidth(comboBox_GPUID->sizePolicy().hasHeightForWidth());
        comboBox_GPUID->setSizePolicy(sizePolicy2);
        comboBox_GPUID->setMinimumSize(QSize(180, 0));
        comboBox_GPUID->setCurrentText(QString::fromUtf8("auto"));

        horizontalLayout_13->addWidget(comboBox_GPUID);

        pushButton_DetectGPU = new QPushButton(tab_W2xNcnnVulkan);
        pushButton_DetectGPU->setObjectName("pushButton_DetectGPU");
        pushButton_DetectGPU->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButton_DetectGPU->sizePolicy().hasHeightForWidth());
        pushButton_DetectGPU->setSizePolicy(sizePolicy3);
        pushButton_DetectGPU->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(178, 58, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(191, 62, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(154, 50, 205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_13->addWidget(pushButton_DetectGPU);

        checkBox_MultiGPU_Waifu2xNCNNVulkan = new QCheckBox(tab_W2xNcnnVulkan);
        checkBox_MultiGPU_Waifu2xNCNNVulkan->setObjectName("checkBox_MultiGPU_Waifu2xNCNNVulkan");
        sizePolicy2.setHeightForWidth(checkBox_MultiGPU_Waifu2xNCNNVulkan->sizePolicy().hasHeightForWidth());
        checkBox_MultiGPU_Waifu2xNCNNVulkan->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(checkBox_MultiGPU_Waifu2xNCNNVulkan);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_28);


        gridLayout_53->addLayout(horizontalLayout_13, 8, 0, 1, 2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_9 = new QLabel(tab_W2xNcnnVulkan);
        label_9->setObjectName("label_9");
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_12->addWidget(label_9);

        frame_TileSize_W2xNcnnVulkan = new QFrame(tab_W2xNcnnVulkan);
        frame_TileSize_W2xNcnnVulkan->setObjectName("frame_TileSize_W2xNcnnVulkan");
        sizePolicy3.setHeightForWidth(frame_TileSize_W2xNcnnVulkan->sizePolicy().hasHeightForWidth());
        frame_TileSize_W2xNcnnVulkan->setSizePolicy(sizePolicy3);
        frame_TileSize_W2xNcnnVulkan->setFrameShape(QFrame::NoFrame);
        frame_TileSize_W2xNcnnVulkan->setFrameShadow(QFrame::Raised);
        gridLayout_31 = new QGridLayout(frame_TileSize_W2xNcnnVulkan);
        gridLayout_31->setObjectName("gridLayout_31");
        gridLayout_31->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_31->setContentsMargins(0, 0, 0, 0);
        pushButton_TileSize_Minus_W2xNCNNVulkan = new QPushButton(frame_TileSize_W2xNcnnVulkan);
        pushButton_TileSize_Minus_W2xNCNNVulkan->setObjectName("pushButton_TileSize_Minus_W2xNCNNVulkan");
        sizePolicy3.setHeightForWidth(pushButton_TileSize_Minus_W2xNCNNVulkan->sizePolicy().hasHeightForWidth());
        pushButton_TileSize_Minus_W2xNCNNVulkan->setSizePolicy(sizePolicy3);
        pushButton_TileSize_Minus_W2xNCNNVulkan->setMaximumSize(QSize(30, 30));
        pushButton_TileSize_Minus_W2xNCNNVulkan->setText(QString::fromUtf8("-"));

        gridLayout_31->addWidget(pushButton_TileSize_Minus_W2xNCNNVulkan, 0, 0, 1, 1);

        spinBox_TileSize = new QSpinBox(frame_TileSize_W2xNcnnVulkan);
        spinBox_TileSize->setObjectName("spinBox_TileSize");
        sizePolicy3.setHeightForWidth(spinBox_TileSize->sizePolicy().hasHeightForWidth());
        spinBox_TileSize->setSizePolicy(sizePolicy3);
        spinBox_TileSize->setMinimum(32);
        spinBox_TileSize->setMaximum(999999999);
        spinBox_TileSize->setSingleStep(10);
        spinBox_TileSize->setValue(128);

        gridLayout_31->addWidget(spinBox_TileSize, 0, 1, 1, 1);

        pushButton_TileSize_Add_W2xNCNNVulkan = new QPushButton(frame_TileSize_W2xNcnnVulkan);
        pushButton_TileSize_Add_W2xNCNNVulkan->setObjectName("pushButton_TileSize_Add_W2xNCNNVulkan");
        sizePolicy3.setHeightForWidth(pushButton_TileSize_Add_W2xNCNNVulkan->sizePolicy().hasHeightForWidth());
        pushButton_TileSize_Add_W2xNCNNVulkan->setSizePolicy(sizePolicy3);
        pushButton_TileSize_Add_W2xNCNNVulkan->setMaximumSize(QSize(30, 30));
        pushButton_TileSize_Add_W2xNCNNVulkan->setText(QString::fromUtf8("+"));

        gridLayout_31->addWidget(pushButton_TileSize_Add_W2xNCNNVulkan, 0, 2, 1, 1);


        horizontalLayout_12->addWidget(frame_TileSize_W2xNcnnVulkan);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);


        gridLayout_53->addLayout(horizontalLayout_12, 4, 0, 1, 2);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(0);
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan = new QGroupBox(tab_W2xNcnnVulkan);
        groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan->setObjectName("groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan");
        groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan->setEnabled(false);
        sizePolicy2.setHeightForWidth(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan->sizePolicy().hasHeightForWidth());
        groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan->setSizePolicy(sizePolicy2);
        groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan->setMaximumSize(QSize(16777215, 16777215));
        groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan->setAlignment(Qt::AlignCenter);
        groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan->setFlat(true);
        gridLayout_39 = new QGridLayout(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);
        gridLayout_39->setObjectName("gridLayout_39");
        gridLayout_39->setHorizontalSpacing(7);
        gridLayout_39->setContentsMargins(0, 6, 0, 6);
        comboBox_GPUIDs_MultiGPU_Waifu2xNCNNVulkan = new QComboBox(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);
        comboBox_GPUIDs_MultiGPU_Waifu2xNCNNVulkan->setObjectName("comboBox_GPUIDs_MultiGPU_Waifu2xNCNNVulkan");
        comboBox_GPUIDs_MultiGPU_Waifu2xNCNNVulkan->setCurrentText(QString::fromUtf8(""));

        gridLayout_39->addWidget(comboBox_GPUIDs_MultiGPU_Waifu2xNCNNVulkan, 0, 1, 1, 1);

        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan = new QSpinBox(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setObjectName("spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan");
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setMinimum(32);
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setMaximum(999999999);
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setSingleStep(10);
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setValue(128);

        gridLayout_39->addWidget(spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan, 0, 5, 1, 1);

        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan = new QCheckBox(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);
        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setObjectName("checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan");
        sizePolicy3.setHeightForWidth(checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->sizePolicy().hasHeightForWidth());
        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setSizePolicy(sizePolicy3);
        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setChecked(true);

        gridLayout_39->addWidget(checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan, 0, 2, 1, 1);

        pushButton_ShowMultiGPUSettings_Waifu2xNCNNVulkan = new QPushButton(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);
        pushButton_ShowMultiGPUSettings_Waifu2xNCNNVulkan->setObjectName("pushButton_ShowMultiGPUSettings_Waifu2xNCNNVulkan");
        pushButton_ShowMultiGPUSettings_Waifu2xNCNNVulkan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(204, 65, 53);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_39->addWidget(pushButton_ShowMultiGPUSettings_Waifu2xNCNNVulkan, 0, 6, 1, 1);

        label_64 = new QLabel(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);
        label_64->setObjectName("label_64");
        sizePolicy4.setHeightForWidth(label_64->sizePolicy().hasHeightForWidth());
        label_64->setSizePolicy(sizePolicy4);
        label_64->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_39->addWidget(label_64, 0, 4, 1, 1);

        label_65 = new QLabel(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);
        label_65->setObjectName("label_65");
        sizePolicy4.setHeightForWidth(label_65->sizePolicy().hasHeightForWidth());
        label_65->setSizePolicy(sizePolicy4);
        label_65->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_39->addWidget(label_65, 0, 0, 1, 1);

        line_21 = new QFrame(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);
        line_21->setObjectName("line_21");
        line_21->setFrameShape(QFrame::Shape::VLine);
        line_21->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_39->addWidget(line_21, 0, 3, 1, 1);


        horizontalLayout_24->addWidget(groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_31);

        horizontalLayout_24->setStretch(0, 1);
        horizontalLayout_24->setStretch(1, 2);

        gridLayout_53->addLayout(horizontalLayout_24, 10, 0, 1, 2);

        line_31 = new QFrame(tab_W2xNcnnVulkan);
        line_31->setObjectName("line_31");
        line_31->setFrameShape(QFrame::Shape::HLine);
        line_31->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_53->addWidget(line_31, 5, 0, 1, 2);

        line_30 = new QFrame(tab_W2xNcnnVulkan);
        line_30->setObjectName("line_30");
        line_30->setFrameShape(QFrame::Shape::HLine);
        line_30->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_53->addWidget(line_30, 2, 0, 1, 2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_47 = new QLabel(tab_W2xNcnnVulkan);
        label_47->setObjectName("label_47");
        sizePolicy3.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy3);

        horizontalLayout_14->addWidget(label_47);

        comboBox_version_Waifu2xNCNNVulkan = new QComboBox(tab_W2xNcnnVulkan);
        comboBox_version_Waifu2xNCNNVulkan->addItem(QString());
        comboBox_version_Waifu2xNCNNVulkan->addItem(QString());
        comboBox_version_Waifu2xNCNNVulkan->addItem(QString());
        comboBox_version_Waifu2xNCNNVulkan->setObjectName("comboBox_version_Waifu2xNCNNVulkan");

        horizontalLayout_14->addWidget(comboBox_version_Waifu2xNCNNVulkan);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_18);


        gridLayout_53->addLayout(horizontalLayout_14, 6, 0, 1, 2);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_26 = new QLabel(tab_W2xNcnnVulkan);
        label_26->setObjectName("label_26");
        sizePolicy3.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy3);

        horizontalLayout_15->addWidget(label_26);

        comboBox_model_vulkan = new QComboBox(tab_W2xNcnnVulkan);
        comboBox_model_vulkan->addItem(QString::fromUtf8("upconv_7"));
        comboBox_model_vulkan->addItem(QString());
        comboBox_model_vulkan->setObjectName("comboBox_model_vulkan");

        horizontalLayout_15->addWidget(comboBox_model_vulkan);

        checkBox_TTA_vulkan = new QCheckBox(tab_W2xNcnnVulkan);
        checkBox_TTA_vulkan->setObjectName("checkBox_TTA_vulkan");
        sizePolicy2.setHeightForWidth(checkBox_TTA_vulkan->sizePolicy().hasHeightForWidth());
        checkBox_TTA_vulkan->setSizePolicy(sizePolicy2);
        checkBox_TTA_vulkan->setText(QString::fromUtf8("TTA"));

        horizontalLayout_15->addWidget(checkBox_TTA_vulkan);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_22);


        gridLayout_53->addLayout(horizontalLayout_15, 1, 0, 1, 2);

        line_32 = new QFrame(tab_W2xNcnnVulkan);
        line_32->setObjectName("line_32");
        line_32->setFrameShape(QFrame::Shape::HLine);
        line_32->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_53->addWidget(line_32, 7, 0, 1, 2);

        tabWidget_Engines->addTab(tab_W2xNcnnVulkan, QString());
        tabWidget_Engines->setTabText(tabWidget_Engines->indexOf(tab_W2xNcnnVulkan), QString::fromUtf8("Waifu2x-ncnn-vulkan"));
        tab_W2xConverter = new QWidget();
        tab_W2xConverter->setObjectName("tab_W2xConverter");
        gridLayout_54 = new QGridLayout(tab_W2xConverter);
        gridLayout_54->setObjectName("gridLayout_54");
        gridLayout_54->setVerticalSpacing(7);
        gridLayout_54->setContentsMargins(6, 6, 6, 6);
        line_34 = new QFrame(tab_W2xConverter);
        line_34->setObjectName("line_34");
        line_34->setFrameShape(QFrame::Shape::HLine);
        line_34->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_54->addWidget(line_34, 2, 0, 1, 2);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        checkBox_ForceOpenCL_converter = new QCheckBox(tab_W2xConverter);
        checkBox_ForceOpenCL_converter->setObjectName("checkBox_ForceOpenCL_converter");
        sizePolicy3.setHeightForWidth(checkBox_ForceOpenCL_converter->sizePolicy().hasHeightForWidth());
        checkBox_ForceOpenCL_converter->setSizePolicy(sizePolicy3);

        horizontalLayout_17->addWidget(checkBox_ForceOpenCL_converter);

        checkBox_DisableGPU_converter = new QCheckBox(tab_W2xConverter);
        checkBox_DisableGPU_converter->setObjectName("checkBox_DisableGPU_converter");
        sizePolicy3.setHeightForWidth(checkBox_DisableGPU_converter->sizePolicy().hasHeightForWidth());
        checkBox_DisableGPU_converter->setSizePolicy(sizePolicy3);

        horizontalLayout_17->addWidget(checkBox_DisableGPU_converter);

        checkBox_TTA_converter = new QCheckBox(tab_W2xConverter);
        checkBox_TTA_converter->setObjectName("checkBox_TTA_converter");
        sizePolicy3.setHeightForWidth(checkBox_TTA_converter->sizePolicy().hasHeightForWidth());
        checkBox_TTA_converter->setSizePolicy(sizePolicy3);
        checkBox_TTA_converter->setText(QString::fromUtf8("TTA"));

        horizontalLayout_17->addWidget(checkBox_TTA_converter);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_20);


        gridLayout_54->addLayout(horizontalLayout_17, 3, 0, 1, 2);

        line_33 = new QFrame(tab_W2xConverter);
        line_33->setObjectName("line_33");
        line_33->setFrameShape(QFrame::Shape::HLine);
        line_33->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_54->addWidget(line_33, 4, 0, 1, 2);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_53 = new QLabel(tab_W2xConverter);
        label_53->setObjectName("label_53");
        sizePolicy3.setHeightForWidth(label_53->sizePolicy().hasHeightForWidth());
        label_53->setSizePolicy(sizePolicy3);

        horizontalLayout_16->addWidget(label_53);

        comboBox_TargetProcessor_converter = new QComboBox(tab_W2xConverter);
        comboBox_TargetProcessor_converter->addItem(QString::fromUtf8("auto"));
        comboBox_TargetProcessor_converter->setObjectName("comboBox_TargetProcessor_converter");
        comboBox_TargetProcessor_converter->setEnabled(true);
        comboBox_TargetProcessor_converter->setMinimumSize(QSize(180, 0));
        comboBox_TargetProcessor_converter->setCurrentText(QString::fromUtf8("auto"));

        horizontalLayout_16->addWidget(comboBox_TargetProcessor_converter);

        pushButton_DumpProcessorList_converter = new QPushButton(tab_W2xConverter);
        pushButton_DumpProcessorList_converter->setObjectName("pushButton_DumpProcessorList_converter");
        pushButton_DumpProcessorList_converter->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButton_DumpProcessorList_converter->sizePolicy().hasHeightForWidth());
        pushButton_DumpProcessorList_converter->setSizePolicy(sizePolicy3);
        pushButton_DumpProcessorList_converter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(238, 119, 133);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 127, 144);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(226, 112, 128);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_16->addWidget(pushButton_DumpProcessorList_converter);

        checkBox_MultiGPU_Waifu2xConverter = new QCheckBox(tab_W2xConverter);
        checkBox_MultiGPU_Waifu2xConverter->setObjectName("checkBox_MultiGPU_Waifu2xConverter");
        sizePolicy2.setHeightForWidth(checkBox_MultiGPU_Waifu2xConverter->sizePolicy().hasHeightForWidth());
        checkBox_MultiGPU_Waifu2xConverter->setSizePolicy(sizePolicy2);

        horizontalLayout_16->addWidget(checkBox_MultiGPU_Waifu2xConverter);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_21);


        gridLayout_54->addLayout(horizontalLayout_16, 5, 0, 1, 2);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_54 = new QLabel(tab_W2xConverter);
        label_54->setObjectName("label_54");
        sizePolicy3.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy3);

        horizontalLayout_18->addWidget(label_54);

        frame_BlockSize_W2xConverter = new QFrame(tab_W2xConverter);
        frame_BlockSize_W2xConverter->setObjectName("frame_BlockSize_W2xConverter");
        sizePolicy3.setHeightForWidth(frame_BlockSize_W2xConverter->sizePolicy().hasHeightForWidth());
        frame_BlockSize_W2xConverter->setSizePolicy(sizePolicy3);
        frame_BlockSize_W2xConverter->setFrameShape(QFrame::NoFrame);
        frame_BlockSize_W2xConverter->setFrameShadow(QFrame::Raised);
        gridLayout_35 = new QGridLayout(frame_BlockSize_W2xConverter);
        gridLayout_35->setObjectName("gridLayout_35");
        gridLayout_35->setContentsMargins(0, 0, 0, 0);
        pushButton_BlockSize_Minus_W2xConverter = new QPushButton(frame_BlockSize_W2xConverter);
        pushButton_BlockSize_Minus_W2xConverter->setObjectName("pushButton_BlockSize_Minus_W2xConverter");
        pushButton_BlockSize_Minus_W2xConverter->setMaximumSize(QSize(30, 30));
        pushButton_BlockSize_Minus_W2xConverter->setText(QString::fromUtf8("-"));

        gridLayout_35->addWidget(pushButton_BlockSize_Minus_W2xConverter, 0, 0, 1, 1);

        spinBox_BlockSize_converter = new QSpinBox(frame_BlockSize_W2xConverter);
        spinBox_BlockSize_converter->setObjectName("spinBox_BlockSize_converter");
        spinBox_BlockSize_converter->setMinimum(32);
        spinBox_BlockSize_converter->setMaximum(999999999);
        spinBox_BlockSize_converter->setSingleStep(10);
        spinBox_BlockSize_converter->setValue(256);

        gridLayout_35->addWidget(spinBox_BlockSize_converter, 0, 1, 1, 1);

        pushButton_BlockSize_Add_W2xConverter = new QPushButton(frame_BlockSize_W2xConverter);
        pushButton_BlockSize_Add_W2xConverter->setObjectName("pushButton_BlockSize_Add_W2xConverter");
        pushButton_BlockSize_Add_W2xConverter->setMaximumSize(QSize(30, 30));
        pushButton_BlockSize_Add_W2xConverter->setText(QString::fromUtf8("+"));

        gridLayout_35->addWidget(pushButton_BlockSize_Add_W2xConverter, 0, 2, 1, 1);


        horizontalLayout_18->addWidget(frame_BlockSize_W2xConverter);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_19);


        gridLayout_54->addLayout(horizontalLayout_18, 1, 0, 1, 2);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        groupBox_GPUSettings_MultiGPU_Waifu2xConverter = new QGroupBox(tab_W2xConverter);
        groupBox_GPUSettings_MultiGPU_Waifu2xConverter->setObjectName("groupBox_GPUSettings_MultiGPU_Waifu2xConverter");
        groupBox_GPUSettings_MultiGPU_Waifu2xConverter->setEnabled(false);
        sizePolicy2.setHeightForWidth(groupBox_GPUSettings_MultiGPU_Waifu2xConverter->sizePolicy().hasHeightForWidth());
        groupBox_GPUSettings_MultiGPU_Waifu2xConverter->setSizePolicy(sizePolicy2);
        groupBox_GPUSettings_MultiGPU_Waifu2xConverter->setMaximumSize(QSize(16777215, 16777215));
        groupBox_GPUSettings_MultiGPU_Waifu2xConverter->setAlignment(Qt::AlignCenter);
        groupBox_GPUSettings_MultiGPU_Waifu2xConverter->setFlat(true);
        gridLayout_44 = new QGridLayout(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);
        gridLayout_44->setObjectName("gridLayout_44");
        gridLayout_44->setContentsMargins(6, 6, 6, 6);
        pushButton_ShowMultiGPUSettings_Waifu2xConverter = new QPushButton(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);
        pushButton_ShowMultiGPUSettings_Waifu2xConverter->setObjectName("pushButton_ShowMultiGPUSettings_Waifu2xConverter");
        pushButton_ShowMultiGPUSettings_Waifu2xConverter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(204, 65, 53);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_44->addWidget(pushButton_ShowMultiGPUSettings_Waifu2xConverter, 0, 6, 1, 1);

        label_75 = new QLabel(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);
        label_75->setObjectName("label_75");
        sizePolicy3.setHeightForWidth(label_75->sizePolicy().hasHeightForWidth());
        label_75->setSizePolicy(sizePolicy3);
        label_75->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_44->addWidget(label_75, 0, 0, 1, 1);

        label_74 = new QLabel(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);
        label_74->setObjectName("label_74");
        sizePolicy3.setHeightForWidth(label_74->sizePolicy().hasHeightForWidth());
        label_74->setSizePolicy(sizePolicy3);
        label_74->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_44->addWidget(label_74, 0, 4, 1, 1);

        comboBox_GPUIDs_MultiGPU_Waifu2xConverter = new QComboBox(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);
        comboBox_GPUIDs_MultiGPU_Waifu2xConverter->setObjectName("comboBox_GPUIDs_MultiGPU_Waifu2xConverter");
        comboBox_GPUIDs_MultiGPU_Waifu2xConverter->setCurrentText(QString::fromUtf8(""));

        gridLayout_44->addWidget(comboBox_GPUIDs_MultiGPU_Waifu2xConverter, 0, 1, 1, 1);

        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter = new QCheckBox(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);
        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter->setObjectName("checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter");
        sizePolicy3.setHeightForWidth(checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter->sizePolicy().hasHeightForWidth());
        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter->setSizePolicy(sizePolicy3);
        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter->setChecked(true);

        gridLayout_44->addWidget(checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter, 0, 2, 1, 1);

        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter = new QSpinBox(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter->setObjectName("spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter");
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter->setMinimum(32);
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter->setMaximum(999999999);
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter->setSingleStep(10);
        spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter->setValue(256);

        gridLayout_44->addWidget(spinBox_TileSize_CurrentGPU_MultiGPU_Waifu2xConverter, 0, 5, 1, 1);

        line_22 = new QFrame(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);
        line_22->setObjectName("line_22");
        line_22->setFrameShape(QFrame::Shape::VLine);
        line_22->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_44->addWidget(line_22, 0, 3, 1, 1);


        horizontalLayout_25->addWidget(groupBox_GPUSettings_MultiGPU_Waifu2xConverter);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_32);

        horizontalLayout_25->setStretch(0, 1);
        horizontalLayout_25->setStretch(1, 2);

        gridLayout_54->addLayout(horizontalLayout_25, 6, 0, 1, 2);

        tabWidget_Engines->addTab(tab_W2xConverter, QString());
        tabWidget_Engines->setTabText(tabWidget_Engines->indexOf(tab_W2xConverter), QString::fromUtf8("Waifu2x-converter"));
        tab_A4k = new QWidget();
        tab_A4k->setObjectName("tab_A4k");
        sizePolicy.setHeightForWidth(tab_A4k->sizePolicy().hasHeightForWidth());
        tab_A4k->setSizePolicy(sizePolicy);
        gridLayout_62 = new QGridLayout(tab_A4k);
        gridLayout_62->setObjectName("gridLayout_62");
        gridLayout_62->setContentsMargins(6, 6, 6, 6);
        frame_21 = new QFrame(tab_A4k);
        frame_21->setObjectName("frame_21");
        sizePolicy2.setHeightForWidth(frame_21->sizePolicy().hasHeightForWidth());
        frame_21->setSizePolicy(sizePolicy2);
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        gridLayout_61 = new QGridLayout(frame_21);
        gridLayout_61->setObjectName("gridLayout_61");
        gridLayout_61->setContentsMargins(0, 0, 0, 0);
        checkBox_OpenCLParallelIO_A4k = new QCheckBox(frame_21);
        checkBox_OpenCLParallelIO_A4k->setObjectName("checkBox_OpenCLParallelIO_A4k");
        checkBox_OpenCLParallelIO_A4k->setEnabled(false);
        sizePolicy2.setHeightForWidth(checkBox_OpenCLParallelIO_A4k->sizePolicy().hasHeightForWidth());
        checkBox_OpenCLParallelIO_A4k->setSizePolicy(sizePolicy2);

        gridLayout_61->addWidget(checkBox_OpenCLParallelIO_A4k, 0, 6, 1, 1);

        checkBox_ACNet_Anime4K = new QCheckBox(frame_21);
        checkBox_ACNet_Anime4K->setObjectName("checkBox_ACNet_Anime4K");
        checkBox_ACNet_Anime4K->setEnabled(true);
        sizePolicy2.setHeightForWidth(checkBox_ACNet_Anime4K->sizePolicy().hasHeightForWidth());
        checkBox_ACNet_Anime4K->setSizePolicy(sizePolicy2);
        checkBox_ACNet_Anime4K->setText(QString::fromUtf8("ACNet"));

        gridLayout_61->addWidget(checkBox_ACNet_Anime4K, 0, 0, 1, 1);

        checkBox_HDNMode_Anime4k = new QCheckBox(frame_21);
        checkBox_HDNMode_Anime4k->setObjectName("checkBox_HDNMode_Anime4k");
        checkBox_HDNMode_Anime4k->setEnabled(false);
        sizePolicy2.setHeightForWidth(checkBox_HDNMode_Anime4k->sizePolicy().hasHeightForWidth());
        checkBox_HDNMode_Anime4k->setSizePolicy(sizePolicy2);
        checkBox_HDNMode_Anime4k->setChecked(true);

        gridLayout_61->addWidget(checkBox_HDNMode_Anime4k, 0, 1, 1, 1);

        checkBox_FastMode_Anime4K = new QCheckBox(frame_21);
        checkBox_FastMode_Anime4K->setObjectName("checkBox_FastMode_Anime4K");
        sizePolicy2.setHeightForWidth(checkBox_FastMode_Anime4K->sizePolicy().hasHeightForWidth());
        checkBox_FastMode_Anime4K->setSizePolicy(sizePolicy2);

        gridLayout_61->addWidget(checkBox_FastMode_Anime4K, 0, 2, 1, 1);

        label_23 = new QLabel(frame_21);
        label_23->setObjectName("label_23");

        gridLayout_61->addWidget(label_23, 0, 4, 1, 1);

        spinBox_OpenCLCommandQueues_A4k = new QSpinBox(frame_21);
        spinBox_OpenCLCommandQueues_A4k->setObjectName("spinBox_OpenCLCommandQueues_A4k");
        spinBox_OpenCLCommandQueues_A4k->setEnabled(false);
        sizePolicy2.setHeightForWidth(spinBox_OpenCLCommandQueues_A4k->sizePolicy().hasHeightForWidth());
        spinBox_OpenCLCommandQueues_A4k->setSizePolicy(sizePolicy2);
        spinBox_OpenCLCommandQueues_A4k->setMinimum(1);
        spinBox_OpenCLCommandQueues_A4k->setMaximum(999999999);

        gridLayout_61->addWidget(spinBox_OpenCLCommandQueues_A4k, 0, 5, 1, 1);

        line_26 = new QFrame(frame_21);
        line_26->setObjectName("line_26");
        line_26->setFrameShape(QFrame::Shape::VLine);
        line_26->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_61->addWidget(line_26, 0, 3, 1, 1);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_61->addItem(horizontalSpacer_46, 0, 7, 1, 1);


        gridLayout_62->addWidget(frame_21, 0, 0, 1, 1);

        line_5 = new QFrame(tab_A4k);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_62->addWidget(line_5, 1, 0, 1, 1);

        frame_20 = new QFrame(tab_A4k);
        frame_20->setObjectName("frame_20");
        sizePolicy2.setHeightForWidth(frame_20->sizePolicy().hasHeightForWidth());
        frame_20->setSizePolicy(sizePolicy2);
        frame_20->setFrameShape(QFrame::NoFrame);
        frame_20->setFrameShadow(QFrame::Sunken);
        gridLayout_5 = new QGridLayout(frame_20);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_GPUs_Anime4k = new QLineEdit(frame_20);
        lineEdit_GPUs_Anime4k->setObjectName("lineEdit_GPUs_Anime4k");
        lineEdit_GPUs_Anime4k->setEnabled(false);
        sizePolicy2.setHeightForWidth(lineEdit_GPUs_Anime4k->sizePolicy().hasHeightForWidth());
        lineEdit_GPUs_Anime4k->setSizePolicy(sizePolicy2);
        lineEdit_GPUs_Anime4k->setMinimumSize(QSize(230, 0));
        lineEdit_GPUs_Anime4k->setText(QString::fromUtf8("0,0:"));
        lineEdit_GPUs_Anime4k->setClearButtonEnabled(true);

        gridLayout_5->addWidget(lineEdit_GPUs_Anime4k, 0, 4, 1, 1);

        pushButton_ListGPUs_Anime4k = new QPushButton(frame_20);
        pushButton_ListGPUs_Anime4k->setObjectName("pushButton_ListGPUs_Anime4k");
        pushButton_ListGPUs_Anime4k->setEnabled(false);
        sizePolicy3.setHeightForWidth(pushButton_ListGPUs_Anime4k->sizePolicy().hasHeightForWidth());
        pushButton_ListGPUs_Anime4k->setSizePolicy(sizePolicy3);
        pushButton_ListGPUs_Anime4k->setMaximumSize(QSize(16777215, 35));
        pushButton_ListGPUs_Anime4k->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(26, 188, 156);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(29, 214, 177);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(23, 173, 143);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_5->addWidget(pushButton_ListGPUs_Anime4k, 0, 6, 1, 1);

        comboBox_GPGPUModel_A4k = new QComboBox(frame_20);
        comboBox_GPGPUModel_A4k->addItem(QString::fromUtf8("OpenCL"));
        comboBox_GPGPUModel_A4k->addItem(QString::fromUtf8("CUDA"));
        comboBox_GPGPUModel_A4k->setObjectName("comboBox_GPGPUModel_A4k");
        comboBox_GPGPUModel_A4k->setEnabled(false);
        sizePolicy3.setHeightForWidth(comboBox_GPGPUModel_A4k->sizePolicy().hasHeightForWidth());
        comboBox_GPGPUModel_A4k->setSizePolicy(sizePolicy3);
        comboBox_GPGPUModel_A4k->setMinimumSize(QSize(130, 0));

        gridLayout_5->addWidget(comboBox_GPGPUModel_A4k, 0, 1, 1, 1);

        line_13 = new QFrame(frame_20);
        line_13->setObjectName("line_13");
        line_13->setFrameShape(QFrame::Shape::VLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_13, 0, 2, 1, 1);

        checkBox_GPUMode_Anime4K = new QCheckBox(frame_20);
        checkBox_GPUMode_Anime4K->setObjectName("checkBox_GPUMode_Anime4K");
        sizePolicy3.setHeightForWidth(checkBox_GPUMode_Anime4K->sizePolicy().hasHeightForWidth());
        checkBox_GPUMode_Anime4K->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(checkBox_GPUMode_Anime4K, 0, 0, 1, 1);

        pushButton_VerifyGPUsConfig_Anime4k = new QPushButton(frame_20);
        pushButton_VerifyGPUsConfig_Anime4k->setObjectName("pushButton_VerifyGPUsConfig_Anime4k");
        pushButton_VerifyGPUsConfig_Anime4k->setEnabled(false);
        sizePolicy3.setHeightForWidth(pushButton_VerifyGPUsConfig_Anime4k->sizePolicy().hasHeightForWidth());
        pushButton_VerifyGPUsConfig_Anime4k->setSizePolicy(sizePolicy3);
        pushButton_VerifyGPUsConfig_Anime4k->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(178, 58, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(191, 62, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(154, 50, 205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_5->addWidget(pushButton_VerifyGPUsConfig_Anime4k, 0, 5, 1, 1);

        checkBox_SpecifyGPU_Anime4k = new QCheckBox(frame_20);
        checkBox_SpecifyGPU_Anime4k->setObjectName("checkBox_SpecifyGPU_Anime4k");
        checkBox_SpecifyGPU_Anime4k->setEnabled(false);
        sizePolicy3.setHeightForWidth(checkBox_SpecifyGPU_Anime4k->sizePolicy().hasHeightForWidth());
        checkBox_SpecifyGPU_Anime4k->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(checkBox_SpecifyGPU_Anime4k, 0, 3, 1, 1);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_45, 0, 7, 1, 1);


        gridLayout_62->addWidget(frame_20, 2, 0, 1, 1);

        line_14 = new QFrame(tab_A4k);
        line_14->setObjectName("line_14");
        line_14->setFrameShape(QFrame::Shape::HLine);
        line_14->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_62->addWidget(line_14, 3, 0, 1, 1);

        widget = new QWidget(tab_A4k);
        widget->setObjectName("widget");
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMaximumSize(QSize(16777215, 42));
        gridLayout_38 = new QGridLayout(widget);
        gridLayout_38->setObjectName("gridLayout_38");
        gridLayout_38->setContentsMargins(0, 0, 0, 0);
        label_50 = new QLabel(widget);
        label_50->setObjectName("label_50");
        sizePolicy4.setHeightForWidth(label_50->sizePolicy().hasHeightForWidth());
        label_50->setSizePolicy(sizePolicy4);

        gridLayout_38->addWidget(label_50, 0, 4, 1, 1);

        doubleSpinBox_PushGradientStrength_Anime4K = new QDoubleSpinBox(widget);
        doubleSpinBox_PushGradientStrength_Anime4K->setObjectName("doubleSpinBox_PushGradientStrength_Anime4K");
        sizePolicy2.setHeightForWidth(doubleSpinBox_PushGradientStrength_Anime4K->sizePolicy().hasHeightForWidth());
        doubleSpinBox_PushGradientStrength_Anime4K->setSizePolicy(sizePolicy2);
        doubleSpinBox_PushGradientStrength_Anime4K->setMinimumSize(QSize(100, 0));
        doubleSpinBox_PushGradientStrength_Anime4K->setMaximum(1.000000000000000);
        doubleSpinBox_PushGradientStrength_Anime4K->setSingleStep(0.100000000000000);
        doubleSpinBox_PushGradientStrength_Anime4K->setValue(1.000000000000000);

        gridLayout_38->addWidget(doubleSpinBox_PushGradientStrength_Anime4K, 0, 7, 1, 1);

        spinBox_PushColorCount_Anime4K = new QSpinBox(widget);
        spinBox_PushColorCount_Anime4K->setObjectName("spinBox_PushColorCount_Anime4K");
        sizePolicy2.setHeightForWidth(spinBox_PushColorCount_Anime4K->sizePolicy().hasHeightForWidth());
        spinBox_PushColorCount_Anime4K->setSizePolicy(sizePolicy2);
        spinBox_PushColorCount_Anime4K->setMinimum(1);
        spinBox_PushColorCount_Anime4K->setMaximum(999999999);
        spinBox_PushColorCount_Anime4K->setValue(2);

        gridLayout_38->addWidget(spinBox_PushColorCount_Anime4K, 0, 3, 1, 1);

        doubleSpinBox_PushColorStrength_Anime4K = new QDoubleSpinBox(widget);
        doubleSpinBox_PushColorStrength_Anime4K->setObjectName("doubleSpinBox_PushColorStrength_Anime4K");
        sizePolicy2.setHeightForWidth(doubleSpinBox_PushColorStrength_Anime4K->sizePolicy().hasHeightForWidth());
        doubleSpinBox_PushColorStrength_Anime4K->setSizePolicy(sizePolicy2);
        doubleSpinBox_PushColorStrength_Anime4K->setMinimumSize(QSize(100, 0));
        doubleSpinBox_PushColorStrength_Anime4K->setMaximum(1.000000000000000);
        doubleSpinBox_PushColorStrength_Anime4K->setSingleStep(0.100000000000000);
        doubleSpinBox_PushColorStrength_Anime4K->setValue(0.300000000000000);

        gridLayout_38->addWidget(doubleSpinBox_PushColorStrength_Anime4K, 0, 5, 1, 1);

        label_48 = new QLabel(widget);
        label_48->setObjectName("label_48");
        sizePolicy3.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy3);

        gridLayout_38->addWidget(label_48, 0, 0, 1, 1);

        spinBox_Passes_Anime4K = new QSpinBox(widget);
        spinBox_Passes_Anime4K->setObjectName("spinBox_Passes_Anime4K");
        sizePolicy2.setHeightForWidth(spinBox_Passes_Anime4K->sizePolicy().hasHeightForWidth());
        spinBox_Passes_Anime4K->setSizePolicy(sizePolicy2);
        spinBox_Passes_Anime4K->setMinimum(1);
        spinBox_Passes_Anime4K->setMaximum(999999999);
        spinBox_Passes_Anime4K->setValue(2);

        gridLayout_38->addWidget(spinBox_Passes_Anime4K, 0, 1, 1, 1);

        label_51 = new QLabel(widget);
        label_51->setObjectName("label_51");
        sizePolicy4.setHeightForWidth(label_51->sizePolicy().hasHeightForWidth());
        label_51->setSizePolicy(sizePolicy4);

        gridLayout_38->addWidget(label_51, 0, 6, 1, 1);

        label_49 = new QLabel(widget);
        label_49->setObjectName("label_49");
        sizePolicy4.setHeightForWidth(label_49->sizePolicy().hasHeightForWidth());
        label_49->setSizePolicy(sizePolicy4);

        gridLayout_38->addWidget(label_49, 0, 2, 1, 1);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_38->addItem(horizontalSpacer_47, 0, 8, 1, 1);


        gridLayout_62->addWidget(widget, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox_PreProcessing_Anime4k = new QGroupBox(tab_A4k);
        groupBox_PreProcessing_Anime4k->setObjectName("groupBox_PreProcessing_Anime4k");
        groupBox_PreProcessing_Anime4k->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_25 = new QGridLayout(groupBox_PreProcessing_Anime4k);
        gridLayout_25->setObjectName("gridLayout_25");
        gridLayout_25->setContentsMargins(6, 6, 6, 6);
        line_8 = new QFrame(groupBox_PreProcessing_Anime4k);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_25->addWidget(line_8, 1, 0, 1, 4);

        checkBox_MeanBlur_Pre_Anime4k = new QCheckBox(groupBox_PreProcessing_Anime4k);
        checkBox_MeanBlur_Pre_Anime4k->setObjectName("checkBox_MeanBlur_Pre_Anime4k");

        gridLayout_25->addWidget(checkBox_MeanBlur_Pre_Anime4k, 2, 1, 1, 1);

        checkBox_MedianBlur_Pre_Anime4k = new QCheckBox(groupBox_PreProcessing_Anime4k);
        checkBox_MedianBlur_Pre_Anime4k->setObjectName("checkBox_MedianBlur_Pre_Anime4k");

        gridLayout_25->addWidget(checkBox_MedianBlur_Pre_Anime4k, 2, 0, 1, 1);

        checkBox_GaussianBlurWeak_Pre_Anime4k = new QCheckBox(groupBox_PreProcessing_Anime4k);
        checkBox_GaussianBlurWeak_Pre_Anime4k->setObjectName("checkBox_GaussianBlurWeak_Pre_Anime4k");

        gridLayout_25->addWidget(checkBox_GaussianBlurWeak_Pre_Anime4k, 3, 1, 1, 3);

        checkBox_CASSharping_Pre_Anime4k = new QCheckBox(groupBox_PreProcessing_Anime4k);
        checkBox_CASSharping_Pre_Anime4k->setObjectName("checkBox_CASSharping_Pre_Anime4k");
        checkBox_CASSharping_Pre_Anime4k->setChecked(true);

        gridLayout_25->addWidget(checkBox_CASSharping_Pre_Anime4k, 2, 2, 1, 2);

        checkBox_GaussianBlur_Pre_Anime4k = new QCheckBox(groupBox_PreProcessing_Anime4k);
        checkBox_GaussianBlur_Pre_Anime4k->setObjectName("checkBox_GaussianBlur_Pre_Anime4k");

        gridLayout_25->addWidget(checkBox_GaussianBlur_Pre_Anime4k, 3, 0, 1, 1);

        checkBox_BilateralFilter_Pre_Anime4k = new QCheckBox(groupBox_PreProcessing_Anime4k);
        checkBox_BilateralFilter_Pre_Anime4k->setObjectName("checkBox_BilateralFilter_Pre_Anime4k");

        gridLayout_25->addWidget(checkBox_BilateralFilter_Pre_Anime4k, 4, 0, 1, 1);

        checkBox_BilateralFilterFaster_Pre_Anime4k = new QCheckBox(groupBox_PreProcessing_Anime4k);
        checkBox_BilateralFilterFaster_Pre_Anime4k->setObjectName("checkBox_BilateralFilterFaster_Pre_Anime4k");

        gridLayout_25->addWidget(checkBox_BilateralFilterFaster_Pre_Anime4k, 4, 1, 1, 3);

        checkBox_EnablePreProcessing_Anime4k = new QCheckBox(groupBox_PreProcessing_Anime4k);
        checkBox_EnablePreProcessing_Anime4k->setObjectName("checkBox_EnablePreProcessing_Anime4k");
        checkBox_EnablePreProcessing_Anime4k->setChecked(true);

        gridLayout_25->addWidget(checkBox_EnablePreProcessing_Anime4k, 0, 0, 1, 3);


        horizontalLayout_2->addWidget(groupBox_PreProcessing_Anime4k);

        groupBox_PostProcessing_Anime4k = new QGroupBox(tab_A4k);
        groupBox_PostProcessing_Anime4k->setObjectName("groupBox_PostProcessing_Anime4k");
        gridLayout_24 = new QGridLayout(groupBox_PostProcessing_Anime4k);
        gridLayout_24->setObjectName("gridLayout_24");
        gridLayout_24->setContentsMargins(6, 6, 6, 6);
        checkBox_EnablePostProcessing_Anime4k = new QCheckBox(groupBox_PostProcessing_Anime4k);
        checkBox_EnablePostProcessing_Anime4k->setObjectName("checkBox_EnablePostProcessing_Anime4k");
        checkBox_EnablePostProcessing_Anime4k->setChecked(true);

        gridLayout_24->addWidget(checkBox_EnablePostProcessing_Anime4k, 0, 0, 1, 3);

        line_9 = new QFrame(groupBox_PostProcessing_Anime4k);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_24->addWidget(line_9, 1, 0, 1, 4);

        checkBox_MedianBlur_Post_Anime4k = new QCheckBox(groupBox_PostProcessing_Anime4k);
        checkBox_MedianBlur_Post_Anime4k->setObjectName("checkBox_MedianBlur_Post_Anime4k");

        gridLayout_24->addWidget(checkBox_MedianBlur_Post_Anime4k, 2, 0, 1, 1);

        checkBox_MeanBlur_Post_Anime4k = new QCheckBox(groupBox_PostProcessing_Anime4k);
        checkBox_MeanBlur_Post_Anime4k->setObjectName("checkBox_MeanBlur_Post_Anime4k");

        gridLayout_24->addWidget(checkBox_MeanBlur_Post_Anime4k, 2, 1, 1, 1);

        checkBox_CASSharping_Post_Anime4k = new QCheckBox(groupBox_PostProcessing_Anime4k);
        checkBox_CASSharping_Post_Anime4k->setObjectName("checkBox_CASSharping_Post_Anime4k");
        checkBox_CASSharping_Post_Anime4k->setChecked(false);

        gridLayout_24->addWidget(checkBox_CASSharping_Post_Anime4k, 2, 2, 1, 2);

        checkBox_GaussianBlur_Post_Anime4k = new QCheckBox(groupBox_PostProcessing_Anime4k);
        checkBox_GaussianBlur_Post_Anime4k->setObjectName("checkBox_GaussianBlur_Post_Anime4k");

        gridLayout_24->addWidget(checkBox_GaussianBlur_Post_Anime4k, 3, 0, 1, 1);

        checkBox_BilateralFilter_Post_Anime4k = new QCheckBox(groupBox_PostProcessing_Anime4k);
        checkBox_BilateralFilter_Post_Anime4k->setObjectName("checkBox_BilateralFilter_Post_Anime4k");
        checkBox_BilateralFilter_Post_Anime4k->setChecked(true);

        gridLayout_24->addWidget(checkBox_BilateralFilter_Post_Anime4k, 4, 0, 1, 1);

        checkBox_GaussianBlurWeak_Post_Anime4k = new QCheckBox(groupBox_PostProcessing_Anime4k);
        checkBox_GaussianBlurWeak_Post_Anime4k->setObjectName("checkBox_GaussianBlurWeak_Post_Anime4k");
        checkBox_GaussianBlurWeak_Post_Anime4k->setChecked(true);

        gridLayout_24->addWidget(checkBox_GaussianBlurWeak_Post_Anime4k, 3, 1, 1, 3);

        checkBox_BilateralFilterFaster_Post_Anime4k = new QCheckBox(groupBox_PostProcessing_Anime4k);
        checkBox_BilateralFilterFaster_Post_Anime4k->setObjectName("checkBox_BilateralFilterFaster_Post_Anime4k");

        gridLayout_24->addWidget(checkBox_BilateralFilterFaster_Post_Anime4k, 4, 1, 1, 3);


        horizontalLayout_2->addWidget(groupBox_PostProcessing_Anime4k);


        gridLayout_62->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        tabWidget_Engines->addTab(tab_A4k, QString());
        tabWidget_Engines->setTabText(tabWidget_Engines->indexOf(tab_A4k), QString::fromUtf8("Anime4K"));
        tab_SrmdNcnnVulkan = new QWidget();
        tab_SrmdNcnnVulkan->setObjectName("tab_SrmdNcnnVulkan");
        gridLayout_55 = new QGridLayout(tab_SrmdNcnnVulkan);
        gridLayout_55->setObjectName("gridLayout_55");
        gridLayout_55->setVerticalSpacing(7);
        gridLayout_55->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan = new QGroupBox(tab_SrmdNcnnVulkan);
        groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan->setObjectName("groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan");
        groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan->setEnabled(false);
        sizePolicy2.setHeightForWidth(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan->sizePolicy().hasHeightForWidth());
        groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan->setSizePolicy(sizePolicy2);
        groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan->setMaximumSize(QSize(16777215, 16777215));
        groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan->setAlignment(Qt::AlignCenter);
        groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan->setFlat(true);
        gridLayout_41 = new QGridLayout(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);
        gridLayout_41->setObjectName("gridLayout_41");
        gridLayout_41->setContentsMargins(6, 6, 6, 6);
        checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan = new QCheckBox(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);
        checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setObjectName("checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan");
        sizePolicy3.setHeightForWidth(checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan->sizePolicy().hasHeightForWidth());
        checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setSizePolicy(sizePolicy3);
        checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setChecked(true);

        gridLayout_41->addWidget(checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan, 0, 2, 1, 1);

        label_68 = new QLabel(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);
        label_68->setObjectName("label_68");
        sizePolicy4.setHeightForWidth(label_68->sizePolicy().hasHeightForWidth());
        label_68->setSizePolicy(sizePolicy4);
        label_68->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_41->addWidget(label_68, 0, 4, 1, 1);

        comboBox_GPUIDs_MultiGPU_SrmdNCNNVulkan = new QComboBox(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);
        comboBox_GPUIDs_MultiGPU_SrmdNCNNVulkan->setObjectName("comboBox_GPUIDs_MultiGPU_SrmdNCNNVulkan");
        comboBox_GPUIDs_MultiGPU_SrmdNCNNVulkan->setCurrentText(QString::fromUtf8(""));

        gridLayout_41->addWidget(comboBox_GPUIDs_MultiGPU_SrmdNCNNVulkan, 0, 1, 1, 1);

        pushButton_ShowMultiGPUSettings_SrmdNCNNVulkan = new QPushButton(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);
        pushButton_ShowMultiGPUSettings_SrmdNCNNVulkan->setObjectName("pushButton_ShowMultiGPUSettings_SrmdNCNNVulkan");
        pushButton_ShowMultiGPUSettings_SrmdNCNNVulkan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(204, 65, 53);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_41->addWidget(pushButton_ShowMultiGPUSettings_SrmdNCNNVulkan, 0, 6, 1, 1);

        spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan = new QSpinBox(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);
        spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setObjectName("spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan");
        spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setMinimum(32);
        spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setMaximum(999999999);
        spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setSingleStep(10);
        spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setValue(128);

        gridLayout_41->addWidget(spinBox_TileSize_CurrentGPU_MultiGPU_SrmdNCNNVulkan, 0, 5, 1, 1);

        label_69 = new QLabel(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);
        label_69->setObjectName("label_69");
        sizePolicy4.setHeightForWidth(label_69->sizePolicy().hasHeightForWidth());
        label_69->setSizePolicy(sizePolicy4);
        label_69->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_41->addWidget(label_69, 0, 0, 1, 1);

        line_23 = new QFrame(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);
        line_23->setObjectName("line_23");
        line_23->setFrameShape(QFrame::Shape::VLine);
        line_23->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_41->addWidget(line_23, 0, 3, 1, 1);


        horizontalLayout_26->addWidget(groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_23);

        horizontalLayout_26->setStretch(0, 1);
        horizontalLayout_26->setStretch(1, 2);

        gridLayout_55->addLayout(horizontalLayout_26, 3, 0, 1, 4);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_41 = new QLabel(tab_SrmdNcnnVulkan);
        label_41->setObjectName("label_41");
        sizePolicy3.setHeightForWidth(label_41->sizePolicy().hasHeightForWidth());
        label_41->setSizePolicy(sizePolicy3);

        horizontalLayout_19->addWidget(label_41);

        comboBox_GPUID_srmd = new QComboBox(tab_SrmdNcnnVulkan);
        comboBox_GPUID_srmd->addItem(QString::fromUtf8("auto"));
        comboBox_GPUID_srmd->setObjectName("comboBox_GPUID_srmd");
        comboBox_GPUID_srmd->setMinimumSize(QSize(180, 0));
        comboBox_GPUID_srmd->setCurrentText(QString::fromUtf8("auto"));

        horizontalLayout_19->addWidget(comboBox_GPUID_srmd);

        pushButton_DetectGPUID_srmd = new QPushButton(tab_SrmdNcnnVulkan);
        pushButton_DetectGPUID_srmd->setObjectName("pushButton_DetectGPUID_srmd");
        sizePolicy3.setHeightForWidth(pushButton_DetectGPUID_srmd->sizePolicy().hasHeightForWidth());
        pushButton_DetectGPUID_srmd->setSizePolicy(sizePolicy3);
        pushButton_DetectGPUID_srmd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(52, 152, 219);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 177, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 134, 193);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_19->addWidget(pushButton_DetectGPUID_srmd);

        checkBox_MultiGPU_SrmdNCNNVulkan = new QCheckBox(tab_SrmdNcnnVulkan);
        checkBox_MultiGPU_SrmdNCNNVulkan->setObjectName("checkBox_MultiGPU_SrmdNCNNVulkan");
        sizePolicy3.setHeightForWidth(checkBox_MultiGPU_SrmdNCNNVulkan->sizePolicy().hasHeightForWidth());
        checkBox_MultiGPU_SrmdNCNNVulkan->setSizePolicy(sizePolicy3);

        horizontalLayout_19->addWidget(checkBox_MultiGPU_SrmdNCNNVulkan);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_34);


        gridLayout_55->addLayout(horizontalLayout_19, 2, 0, 1, 4);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_40 = new QLabel(tab_SrmdNcnnVulkan);
        label_40->setObjectName("label_40");
        sizePolicy3.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy3);

        horizontalLayout_20->addWidget(label_40);

        frame_TileSize_SrmdNcnnVulkan = new QFrame(tab_SrmdNcnnVulkan);
        frame_TileSize_SrmdNcnnVulkan->setObjectName("frame_TileSize_SrmdNcnnVulkan");
        sizePolicy3.setHeightForWidth(frame_TileSize_SrmdNcnnVulkan->sizePolicy().hasHeightForWidth());
        frame_TileSize_SrmdNcnnVulkan->setSizePolicy(sizePolicy3);
        frame_TileSize_SrmdNcnnVulkan->setFrameShape(QFrame::NoFrame);
        frame_TileSize_SrmdNcnnVulkan->setFrameShadow(QFrame::Raised);
        gridLayout_36 = new QGridLayout(frame_TileSize_SrmdNcnnVulkan);
        gridLayout_36->setObjectName("gridLayout_36");
        gridLayout_36->setContentsMargins(0, 0, 0, 0);
        pushButton_Add_TileSize_SrmdNCNNVulkan = new QPushButton(frame_TileSize_SrmdNcnnVulkan);
        pushButton_Add_TileSize_SrmdNCNNVulkan->setObjectName("pushButton_Add_TileSize_SrmdNCNNVulkan");
        pushButton_Add_TileSize_SrmdNCNNVulkan->setMaximumSize(QSize(30, 30));
        pushButton_Add_TileSize_SrmdNCNNVulkan->setText(QString::fromUtf8("+"));

        gridLayout_36->addWidget(pushButton_Add_TileSize_SrmdNCNNVulkan, 0, 2, 1, 1);

        pushButton_Minus_TileSize_SrmdNCNNVulkan = new QPushButton(frame_TileSize_SrmdNcnnVulkan);
        pushButton_Minus_TileSize_SrmdNCNNVulkan->setObjectName("pushButton_Minus_TileSize_SrmdNCNNVulkan");
        pushButton_Minus_TileSize_SrmdNCNNVulkan->setMaximumSize(QSize(30, 30));
        pushButton_Minus_TileSize_SrmdNCNNVulkan->setText(QString::fromUtf8("-"));

        gridLayout_36->addWidget(pushButton_Minus_TileSize_SrmdNCNNVulkan, 0, 0, 1, 1);

        spinBox_TileSize_srmd = new QSpinBox(frame_TileSize_SrmdNcnnVulkan);
        spinBox_TileSize_srmd->setObjectName("spinBox_TileSize_srmd");
        sizePolicy3.setHeightForWidth(spinBox_TileSize_srmd->sizePolicy().hasHeightForWidth());
        spinBox_TileSize_srmd->setSizePolicy(sizePolicy3);
        spinBox_TileSize_srmd->setMinimum(32);
        spinBox_TileSize_srmd->setMaximum(999999999);
        spinBox_TileSize_srmd->setSingleStep(10);
        spinBox_TileSize_srmd->setValue(128);

        gridLayout_36->addWidget(spinBox_TileSize_srmd, 0, 1, 1, 1);


        horizontalLayout_20->addWidget(frame_TileSize_SrmdNcnnVulkan);

        checkBox_TTA_srmd = new QCheckBox(tab_SrmdNcnnVulkan);
        checkBox_TTA_srmd->setObjectName("checkBox_TTA_srmd");
        sizePolicy2.setHeightForWidth(checkBox_TTA_srmd->sizePolicy().hasHeightForWidth());
        checkBox_TTA_srmd->setSizePolicy(sizePolicy2);
        checkBox_TTA_srmd->setText(QString::fromUtf8("TTA"));

        horizontalLayout_20->addWidget(checkBox_TTA_srmd);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_33);


        gridLayout_55->addLayout(horizontalLayout_20, 0, 0, 1, 4);

        line_37 = new QFrame(tab_SrmdNcnnVulkan);
        line_37->setObjectName("line_37");
        sizePolicy6.setHeightForWidth(line_37->sizePolicy().hasHeightForWidth());
        line_37->setSizePolicy(sizePolicy6);
        line_37->setFrameShape(QFrame::Shape::HLine);
        line_37->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_55->addWidget(line_37, 1, 0, 1, 4);

        tabWidget_Engines->addTab(tab_SrmdNcnnVulkan, QString());
        tabWidget_Engines->setTabText(tabWidget_Engines->indexOf(tab_SrmdNcnnVulkan), QString::fromUtf8("SRMD-ncnn-vulkan"));
        tab_W2xCaffe = new QWidget();
        tab_W2xCaffe->setObjectName("tab_W2xCaffe");
        gridLayout_30 = new QGridLayout(tab_W2xCaffe);
        gridLayout_30->setObjectName("gridLayout_30");
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        label_56 = new QLabel(tab_W2xCaffe);
        label_56->setObjectName("label_56");
        sizePolicy3.setHeightForWidth(label_56->sizePolicy().hasHeightForWidth());
        label_56->setSizePolicy(sizePolicy3);

        horizontalLayout_29->addWidget(label_56);

        comboBox_Model_3D_Waifu2xCaffe = new QComboBox(tab_W2xCaffe);
        comboBox_Model_3D_Waifu2xCaffe->addItem(QString());
        comboBox_Model_3D_Waifu2xCaffe->addItem(QString());
        comboBox_Model_3D_Waifu2xCaffe->setObjectName("comboBox_Model_3D_Waifu2xCaffe");
        comboBox_Model_3D_Waifu2xCaffe->setMinimumSize(QSize(220, 0));
        comboBox_Model_3D_Waifu2xCaffe->setCurrentText(QString::fromUtf8("upconv_7_photo"));

        horizontalLayout_29->addWidget(comboBox_Model_3D_Waifu2xCaffe);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_38);


        gridLayout_30->addLayout(horizontalLayout_29, 4, 0, 1, 1);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        label_43 = new QLabel(tab_W2xCaffe);
        label_43->setObjectName("label_43");
        sizePolicy3.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy3);

        horizontalLayout_31->addWidget(label_43);

        spinBox_BatchSize_Waifu2xCaffe = new QSpinBox(tab_W2xCaffe);
        spinBox_BatchSize_Waifu2xCaffe->setObjectName("spinBox_BatchSize_Waifu2xCaffe");
        spinBox_BatchSize_Waifu2xCaffe->setMinimumSize(QSize(120, 0));
        spinBox_BatchSize_Waifu2xCaffe->setMinimum(1);
        spinBox_BatchSize_Waifu2xCaffe->setMaximum(999999999);

        horizontalLayout_31->addWidget(spinBox_BatchSize_Waifu2xCaffe);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_36);


        gridLayout_30->addLayout(horizontalLayout_31, 8, 0, 1, 1);

        line_41 = new QFrame(tab_W2xCaffe);
        line_41->setObjectName("line_41");
        line_41->setFrameShape(QFrame::Shape::HLine);
        line_41->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_30->addWidget(line_41, 7, 0, 1, 1);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        label_14 = new QLabel(tab_W2xCaffe);
        label_14->setObjectName("label_14");
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);

        horizontalLayout_27->addWidget(label_14);

        comboBox_ProcessMode_Waifu2xCaffe = new QComboBox(tab_W2xCaffe);
        comboBox_ProcessMode_Waifu2xCaffe->addItem(QString::fromUtf8("CPU"));
        comboBox_ProcessMode_Waifu2xCaffe->addItem(QString::fromUtf8("GPU"));
        comboBox_ProcessMode_Waifu2xCaffe->addItem(QString::fromUtf8("cuDNN"));
        comboBox_ProcessMode_Waifu2xCaffe->setObjectName("comboBox_ProcessMode_Waifu2xCaffe");
        comboBox_ProcessMode_Waifu2xCaffe->setMinimumSize(QSize(130, 0));
        comboBox_ProcessMode_Waifu2xCaffe->setCurrentText(QString::fromUtf8("CPU"));

        horizontalLayout_27->addWidget(comboBox_ProcessMode_Waifu2xCaffe);

        checkBox_TTA_Waifu2xCaffe = new QCheckBox(tab_W2xCaffe);
        checkBox_TTA_Waifu2xCaffe->setObjectName("checkBox_TTA_Waifu2xCaffe");
        checkBox_TTA_Waifu2xCaffe->setText(QString::fromUtf8("TTA"));

        horizontalLayout_27->addWidget(checkBox_TTA_Waifu2xCaffe);

        horizontalSpacer_40 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_40);


        gridLayout_30->addLayout(horizontalLayout_27, 0, 0, 1, 1);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        checkBox_EnableMultiGPU_Waifu2xCaffe = new QCheckBox(tab_W2xCaffe);
        checkBox_EnableMultiGPU_Waifu2xCaffe->setObjectName("checkBox_EnableMultiGPU_Waifu2xCaffe");
        checkBox_EnableMultiGPU_Waifu2xCaffe->setEnabled(false);
        sizePolicy3.setHeightForWidth(checkBox_EnableMultiGPU_Waifu2xCaffe->sizePolicy().hasHeightForWidth());
        checkBox_EnableMultiGPU_Waifu2xCaffe->setSizePolicy(sizePolicy3);

        horizontalLayout_33->addWidget(checkBox_EnableMultiGPU_Waifu2xCaffe);

        lineEdit_MultiGPUInfo_Waifu2xCaffe = new QLineEdit(tab_W2xCaffe);
        lineEdit_MultiGPUInfo_Waifu2xCaffe->setObjectName("lineEdit_MultiGPUInfo_Waifu2xCaffe");
        lineEdit_MultiGPUInfo_Waifu2xCaffe->setEnabled(false);
        sizePolicy2.setHeightForWidth(lineEdit_MultiGPUInfo_Waifu2xCaffe->sizePolicy().hasHeightForWidth());
        lineEdit_MultiGPUInfo_Waifu2xCaffe->setSizePolicy(sizePolicy2);
        lineEdit_MultiGPUInfo_Waifu2xCaffe->setMinimumSize(QSize(300, 0));
        lineEdit_MultiGPUInfo_Waifu2xCaffe->setText(QString::fromUtf8("0,1,128:"));
        lineEdit_MultiGPUInfo_Waifu2xCaffe->setClearButtonEnabled(true);

        horizontalLayout_33->addWidget(lineEdit_MultiGPUInfo_Waifu2xCaffe);

        pushButton_VerifyGPUsConfig_Waifu2xCaffe = new QPushButton(tab_W2xCaffe);
        pushButton_VerifyGPUsConfig_Waifu2xCaffe->setObjectName("pushButton_VerifyGPUsConfig_Waifu2xCaffe");
        pushButton_VerifyGPUsConfig_Waifu2xCaffe->setEnabled(false);
        sizePolicy3.setHeightForWidth(pushButton_VerifyGPUsConfig_Waifu2xCaffe->sizePolicy().hasHeightForWidth());
        pushButton_VerifyGPUsConfig_Waifu2xCaffe->setSizePolicy(sizePolicy3);
        pushButton_VerifyGPUsConfig_Waifu2xCaffe->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(178, 58, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(191, 62, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(154, 50, 205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_33->addWidget(pushButton_VerifyGPUsConfig_Waifu2xCaffe);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_35);


        gridLayout_30->addLayout(horizontalLayout_33, 12, 0, 1, 1);

        line_40 = new QFrame(tab_W2xCaffe);
        line_40->setObjectName("line_40");
        line_40->setFrameShape(QFrame::Shape::HLine);
        line_40->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_30->addWidget(line_40, 5, 0, 1, 1);

        line_42 = new QFrame(tab_W2xCaffe);
        line_42->setObjectName("line_42");
        line_42->setFrameShape(QFrame::Shape::HLine);
        line_42->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_30->addWidget(line_42, 9, 0, 1, 1);

        line_39 = new QFrame(tab_W2xCaffe);
        line_39->setObjectName("line_39");
        line_39->setFrameShape(QFrame::Shape::HLine);
        line_39->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_30->addWidget(line_39, 3, 0, 1, 1);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        label_25 = new QLabel(tab_W2xCaffe);
        label_25->setObjectName("label_25");
        sizePolicy3.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy3);

        horizontalLayout_28->addWidget(label_25);

        comboBox_Model_2D_Waifu2xCaffe = new QComboBox(tab_W2xCaffe);
        comboBox_Model_2D_Waifu2xCaffe->addItem(QString::fromUtf8("anime_style_art"));
        comboBox_Model_2D_Waifu2xCaffe->addItem(QString::fromUtf8("anime_style_art_rgb"));
        comboBox_Model_2D_Waifu2xCaffe->addItem(QString::fromUtf8("cunet"));
        comboBox_Model_2D_Waifu2xCaffe->addItem(QString::fromUtf8("photo"));
        comboBox_Model_2D_Waifu2xCaffe->addItem(QString::fromUtf8("upconv_7_anime_style_art_rgb"));
        comboBox_Model_2D_Waifu2xCaffe->addItem(QString::fromUtf8("upconv_7_photo"));
        comboBox_Model_2D_Waifu2xCaffe->addItem(QString::fromUtf8("upresnet10"));
        comboBox_Model_2D_Waifu2xCaffe->setObjectName("comboBox_Model_2D_Waifu2xCaffe");
        comboBox_Model_2D_Waifu2xCaffe->setCurrentText(QString::fromUtf8("anime_style_art_rgb"));

        horizontalLayout_28->addWidget(comboBox_Model_2D_Waifu2xCaffe);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_39);


        gridLayout_30->addLayout(horizontalLayout_28, 2, 0, 1, 1);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        label_38 = new QLabel(tab_W2xCaffe);
        label_38->setObjectName("label_38");
        sizePolicy3.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy3);

        horizontalLayout_30->addWidget(label_38);

        spinBox_GPUID_Waifu2xCaffe = new QSpinBox(tab_W2xCaffe);
        spinBox_GPUID_Waifu2xCaffe->setObjectName("spinBox_GPUID_Waifu2xCaffe");
        spinBox_GPUID_Waifu2xCaffe->setMinimumSize(QSize(150, 0));
        spinBox_GPUID_Waifu2xCaffe->setMaximum(999999999);
        spinBox_GPUID_Waifu2xCaffe->setSingleStep(1);

        horizontalLayout_30->addWidget(spinBox_GPUID_Waifu2xCaffe);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_37);


        gridLayout_30->addLayout(horizontalLayout_30, 6, 0, 1, 1);

        line_38 = new QFrame(tab_W2xCaffe);
        line_38->setObjectName("line_38");
        line_38->setFrameShape(QFrame::Shape::HLine);
        line_38->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_30->addWidget(line_38, 1, 0, 1, 1);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        label_52 = new QLabel(tab_W2xCaffe);
        label_52->setObjectName("label_52");
        sizePolicy3.setHeightForWidth(label_52->sizePolicy().hasHeightForWidth());
        label_52->setSizePolicy(sizePolicy3);

        horizontalLayout_32->addWidget(label_52);

        pushButton_SplitSize_Minus_Waifu2xCaffe = new QPushButton(tab_W2xCaffe);
        pushButton_SplitSize_Minus_Waifu2xCaffe->setObjectName("pushButton_SplitSize_Minus_Waifu2xCaffe");
        pushButton_SplitSize_Minus_Waifu2xCaffe->setMaximumSize(QSize(30, 16777215));
        pushButton_SplitSize_Minus_Waifu2xCaffe->setText(QString::fromUtf8("-"));

        horizontalLayout_32->addWidget(pushButton_SplitSize_Minus_Waifu2xCaffe);

        spinBox_SplitSize_Waifu2xCaffe = new QSpinBox(tab_W2xCaffe);
        spinBox_SplitSize_Waifu2xCaffe->setObjectName("spinBox_SplitSize_Waifu2xCaffe");
        sizePolicy3.setHeightForWidth(spinBox_SplitSize_Waifu2xCaffe->sizePolicy().hasHeightForWidth());
        spinBox_SplitSize_Waifu2xCaffe->setSizePolicy(sizePolicy3);
        spinBox_SplitSize_Waifu2xCaffe->setReadOnly(true);
        spinBox_SplitSize_Waifu2xCaffe->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_SplitSize_Waifu2xCaffe->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        spinBox_SplitSize_Waifu2xCaffe->setMinimum(1);
        spinBox_SplitSize_Waifu2xCaffe->setMaximum(999999999);
        spinBox_SplitSize_Waifu2xCaffe->setValue(128);

        horizontalLayout_32->addWidget(spinBox_SplitSize_Waifu2xCaffe);

        pushButton_SplitSize_Add_Waifu2xCaffe = new QPushButton(tab_W2xCaffe);
        pushButton_SplitSize_Add_Waifu2xCaffe->setObjectName("pushButton_SplitSize_Add_Waifu2xCaffe");
        pushButton_SplitSize_Add_Waifu2xCaffe->setMaximumSize(QSize(30, 16777215));
        pushButton_SplitSize_Add_Waifu2xCaffe->setText(QString::fromUtf8("+"));

        horizontalLayout_32->addWidget(pushButton_SplitSize_Add_Waifu2xCaffe);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_24);


        gridLayout_30->addLayout(horizontalLayout_32, 10, 0, 1, 1);

        line_43 = new QFrame(tab_W2xCaffe);
        line_43->setObjectName("line_43");
        line_43->setFrameShape(QFrame::Shape::HLine);
        line_43->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_30->addWidget(line_43, 11, 0, 1, 1);

        tabWidget_Engines->addTab(tab_W2xCaffe, QString());
        tabWidget_Engines->setTabText(tabWidget_Engines->indexOf(tab_W2xCaffe), QString::fromUtf8("Waifu2x-Caffe"));
        tab_RealsrNcnnVulkan = new QWidget();
        tab_RealsrNcnnVulkan->setObjectName("tab_RealsrNcnnVulkan");
        gridLayout_34 = new QGridLayout(tab_RealsrNcnnVulkan);
        gridLayout_34->setObjectName("gridLayout_34");
        gridLayout_34->setVerticalSpacing(7);
        gridLayout_34->setContentsMargins(6, 6, 6, 6);
        line_36 = new QFrame(tab_RealsrNcnnVulkan);
        line_36->setObjectName("line_36");
        line_36->setFrameShape(QFrame::Shape::HLine);
        line_36->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_34->addWidget(line_36, 4, 0, 1, 2);

        line_35 = new QFrame(tab_RealsrNcnnVulkan);
        line_35->setObjectName("line_35");
        line_35->setFrameShape(QFrame::Shape::HLine);
        line_35->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_34->addWidget(line_35, 2, 0, 1, 2);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_60 = new QLabel(tab_RealsrNcnnVulkan);
        label_60->setObjectName("label_60");
        sizePolicy3.setHeightForWidth(label_60->sizePolicy().hasHeightForWidth());
        label_60->setSizePolicy(sizePolicy3);

        horizontalLayout_23->addWidget(label_60);

        comboBox_Model_RealsrNCNNVulkan = new QComboBox(tab_RealsrNcnnVulkan);
        comboBox_Model_RealsrNCNNVulkan->addItem(QString());
        comboBox_Model_RealsrNCNNVulkan->addItem(QString());
        comboBox_Model_RealsrNCNNVulkan->setObjectName("comboBox_Model_RealsrNCNNVulkan");

        horizontalLayout_23->addWidget(comboBox_Model_RealsrNCNNVulkan);

        checkBox_TTA_RealsrNCNNVulkan = new QCheckBox(tab_RealsrNcnnVulkan);
        checkBox_TTA_RealsrNCNNVulkan->setObjectName("checkBox_TTA_RealsrNCNNVulkan");
        checkBox_TTA_RealsrNCNNVulkan->setText(QString::fromUtf8("TTA"));

        horizontalLayout_23->addWidget(checkBox_TTA_RealsrNCNNVulkan);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_41);


        gridLayout_34->addLayout(horizontalLayout_23, 1, 0, 1, 2);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_62 = new QLabel(tab_RealsrNcnnVulkan);
        label_62->setObjectName("label_62");
        sizePolicy3.setHeightForWidth(label_62->sizePolicy().hasHeightForWidth());
        label_62->setSizePolicy(sizePolicy3);

        horizontalLayout_21->addWidget(label_62);

        comboBox_GPUID_RealsrNCNNVulkan = new QComboBox(tab_RealsrNcnnVulkan);
        comboBox_GPUID_RealsrNCNNVulkan->addItem(QString::fromUtf8("auto"));
        comboBox_GPUID_RealsrNCNNVulkan->setObjectName("comboBox_GPUID_RealsrNCNNVulkan");
        comboBox_GPUID_RealsrNCNNVulkan->setEnabled(true);
        comboBox_GPUID_RealsrNCNNVulkan->setMinimumSize(QSize(180, 0));
        comboBox_GPUID_RealsrNCNNVulkan->setCurrentText(QString::fromUtf8("auto"));

        horizontalLayout_21->addWidget(comboBox_GPUID_RealsrNCNNVulkan);

        pushButton_DetectGPU_RealsrNCNNVulkan = new QPushButton(tab_RealsrNcnnVulkan);
        pushButton_DetectGPU_RealsrNCNNVulkan->setObjectName("pushButton_DetectGPU_RealsrNCNNVulkan");
        pushButton_DetectGPU_RealsrNCNNVulkan->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButton_DetectGPU_RealsrNCNNVulkan->sizePolicy().hasHeightForWidth());
        pushButton_DetectGPU_RealsrNCNNVulkan->setSizePolicy(sizePolicy3);
        pushButton_DetectGPU_RealsrNCNNVulkan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(52, 152, 219);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 177, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 134, 193);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_21->addWidget(pushButton_DetectGPU_RealsrNCNNVulkan);

        checkBox_MultiGPU_RealsrNcnnVulkan = new QCheckBox(tab_RealsrNcnnVulkan);
        checkBox_MultiGPU_RealsrNcnnVulkan->setObjectName("checkBox_MultiGPU_RealsrNcnnVulkan");
        sizePolicy2.setHeightForWidth(checkBox_MultiGPU_RealsrNcnnVulkan->sizePolicy().hasHeightForWidth());
        checkBox_MultiGPU_RealsrNcnnVulkan->setSizePolicy(sizePolicy2);

        horizontalLayout_21->addWidget(checkBox_MultiGPU_RealsrNcnnVulkan);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_42);


        gridLayout_34->addLayout(horizontalLayout_21, 5, 0, 1, 2);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_61 = new QLabel(tab_RealsrNcnnVulkan);
        label_61->setObjectName("label_61");
        sizePolicy3.setHeightForWidth(label_61->sizePolicy().hasHeightForWidth());
        label_61->setSizePolicy(sizePolicy3);

        horizontalLayout_22->addWidget(label_61);

        frame_TileSize_RealsrNcnnVulkan = new QFrame(tab_RealsrNcnnVulkan);
        frame_TileSize_RealsrNcnnVulkan->setObjectName("frame_TileSize_RealsrNcnnVulkan");
        frame_TileSize_RealsrNcnnVulkan->setEnabled(true);
        sizePolicy3.setHeightForWidth(frame_TileSize_RealsrNcnnVulkan->sizePolicy().hasHeightForWidth());
        frame_TileSize_RealsrNcnnVulkan->setSizePolicy(sizePolicy3);
        frame_TileSize_RealsrNcnnVulkan->setMinimumSize(QSize(0, 0));
        frame_TileSize_RealsrNcnnVulkan->setFrameShape(QFrame::NoFrame);
        frame_TileSize_RealsrNcnnVulkan->setFrameShadow(QFrame::Raised);
        gridLayout_56 = new QGridLayout(frame_TileSize_RealsrNcnnVulkan);
        gridLayout_56->setObjectName("gridLayout_56");
        gridLayout_56->setContentsMargins(0, 0, 0, 0);
        pushButton_Minus_TileSize_RealsrNCNNVulkan = new QPushButton(frame_TileSize_RealsrNcnnVulkan);
        pushButton_Minus_TileSize_RealsrNCNNVulkan->setObjectName("pushButton_Minus_TileSize_RealsrNCNNVulkan");
        pushButton_Minus_TileSize_RealsrNCNNVulkan->setMaximumSize(QSize(30, 30));
        pushButton_Minus_TileSize_RealsrNCNNVulkan->setText(QString::fromUtf8("-"));

        gridLayout_56->addWidget(pushButton_Minus_TileSize_RealsrNCNNVulkan, 0, 0, 1, 1);

        spinBox_TileSize_RealsrNCNNVulkan = new QSpinBox(frame_TileSize_RealsrNcnnVulkan);
        spinBox_TileSize_RealsrNCNNVulkan->setObjectName("spinBox_TileSize_RealsrNCNNVulkan");
        spinBox_TileSize_RealsrNCNNVulkan->setMinimum(32);
        spinBox_TileSize_RealsrNCNNVulkan->setMaximum(999999999);
        spinBox_TileSize_RealsrNCNNVulkan->setSingleStep(10);
        spinBox_TileSize_RealsrNCNNVulkan->setValue(128);

        gridLayout_56->addWidget(spinBox_TileSize_RealsrNCNNVulkan, 0, 1, 1, 1);

        pushButton_Add_TileSize_RealsrNCNNVulkan = new QPushButton(frame_TileSize_RealsrNcnnVulkan);
        pushButton_Add_TileSize_RealsrNCNNVulkan->setObjectName("pushButton_Add_TileSize_RealsrNCNNVulkan");
        pushButton_Add_TileSize_RealsrNCNNVulkan->setMaximumSize(QSize(30, 30));
        pushButton_Add_TileSize_RealsrNCNNVulkan->setText(QString::fromUtf8("+"));

        gridLayout_56->addWidget(pushButton_Add_TileSize_RealsrNCNNVulkan, 0, 2, 1, 1);


        horizontalLayout_22->addWidget(frame_TileSize_RealsrNcnnVulkan);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_26);


        gridLayout_34->addLayout(horizontalLayout_22, 3, 0, 1, 2);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName("horizontalLayout_34");
        groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan = new QGroupBox(tab_RealsrNcnnVulkan);
        groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan->setObjectName("groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan");
        groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan->setEnabled(false);
        sizePolicy2.setHeightForWidth(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan->sizePolicy().hasHeightForWidth());
        groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan->setSizePolicy(sizePolicy2);
        groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan->setMaximumSize(QSize(16777215, 16777215));
        groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan->setAlignment(Qt::AlignCenter);
        groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan->setFlat(true);
        gridLayout_43 = new QGridLayout(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);
        gridLayout_43->setObjectName("gridLayout_43");
        gridLayout_43->setContentsMargins(6, 6, 6, 6);
        checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan = new QCheckBox(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);
        checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setObjectName("checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan");
        sizePolicy3.setHeightForWidth(checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan->sizePolicy().hasHeightForWidth());
        checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setSizePolicy(sizePolicy3);
        checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setChecked(true);

        gridLayout_43->addWidget(checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan, 0, 2, 1, 1);

        label_73 = new QLabel(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);
        label_73->setObjectName("label_73");
        sizePolicy4.setHeightForWidth(label_73->sizePolicy().hasHeightForWidth());
        label_73->setSizePolicy(sizePolicy4);
        label_73->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_43->addWidget(label_73, 0, 0, 1, 1);

        label_72 = new QLabel(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);
        label_72->setObjectName("label_72");
        sizePolicy4.setHeightForWidth(label_72->sizePolicy().hasHeightForWidth());
        label_72->setSizePolicy(sizePolicy4);
        label_72->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_43->addWidget(label_72, 0, 4, 1, 1);

        pushButton_ShowMultiGPUSettings_RealsrNcnnVulkan = new QPushButton(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);
        pushButton_ShowMultiGPUSettings_RealsrNcnnVulkan->setObjectName("pushButton_ShowMultiGPUSettings_RealsrNcnnVulkan");
        pushButton_ShowMultiGPUSettings_RealsrNcnnVulkan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(204, 65, 53);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_43->addWidget(pushButton_ShowMultiGPUSettings_RealsrNcnnVulkan, 0, 6, 1, 1);

        comboBox_GPUIDs_MultiGPU_RealsrNcnnVulkan = new QComboBox(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);
        comboBox_GPUIDs_MultiGPU_RealsrNcnnVulkan->setObjectName("comboBox_GPUIDs_MultiGPU_RealsrNcnnVulkan");
        comboBox_GPUIDs_MultiGPU_RealsrNcnnVulkan->setCurrentText(QString::fromUtf8(""));

        gridLayout_43->addWidget(comboBox_GPUIDs_MultiGPU_RealsrNcnnVulkan, 0, 1, 1, 1);

        spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan = new QSpinBox(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);
        spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setObjectName("spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan");
        spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setMinimum(32);
        spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setMaximum(999999999);
        spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setSingleStep(10);
        spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setValue(128);

        gridLayout_43->addWidget(spinBox_TileSize_CurrentGPU_MultiGPU_RealsrNcnnVulkan, 0, 5, 1, 1);

        line_24 = new QFrame(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);
        line_24->setObjectName("line_24");
        line_24->setFrameShape(QFrame::Shape::VLine);
        line_24->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_43->addWidget(line_24, 0, 3, 1, 1);


        horizontalLayout_34->addWidget(groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_25);

        horizontalLayout_34->setStretch(0, 1);
        horizontalLayout_34->setStretch(1, 2);

        gridLayout_34->addLayout(horizontalLayout_34, 6, 0, 1, 2);

        tabWidget_Engines->addTab(tab_RealsrNcnnVulkan, QString());
        tabWidget_Engines->setTabText(tabWidget_Engines->indexOf(tab_RealsrNcnnVulkan), QString::fromUtf8("RealSR-ncnn-vulkan"));

        gridLayout_6->addWidget(tabWidget_Engines, 3, 0, 1, 4);


        gridLayout_29->addWidget(groupBox_Engine, 0, 0, 1, 1);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/icon/EngineSettings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_EngineSettings, icon7, QString());
        tab_VideoSettings = new QWidget();
        tab_VideoSettings->setObjectName("tab_VideoSettings");
        gridLayout_2 = new QGridLayout(tab_VideoSettings);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_13 = new QSpacerItem(226, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_13, 1, 3, 1, 1);

        groupBox_FrameInterpolation = new QGroupBox(tab_VideoSettings);
        groupBox_FrameInterpolation->setObjectName("groupBox_FrameInterpolation");
        sizePolicy3.setHeightForWidth(groupBox_FrameInterpolation->sizePolicy().hasHeightForWidth());
        groupBox_FrameInterpolation->setSizePolicy(sizePolicy3);
        groupBox_FrameInterpolation->setCheckable(true);
        groupBox_FrameInterpolation->setChecked(false);
        gridLayout_64 = new QGridLayout(groupBox_FrameInterpolation);
        gridLayout_64->setSpacing(0);
        gridLayout_64->setObjectName("gridLayout_64");
        gridLayout_64->setContentsMargins(6, 6, 6, 6);
        frame_FrameInterpolation = new QFrame(groupBox_FrameInterpolation);
        frame_FrameInterpolation->setObjectName("frame_FrameInterpolation");
        frame_FrameInterpolation->setEnabled(false);
        frame_FrameInterpolation->setMinimumSize(QSize(0, 0));
        frame_FrameInterpolation->setFrameShape(QFrame::NoFrame);
        frame_FrameInterpolation->setFrameShadow(QFrame::Raised);
        frame_FrameInterpolation->setLineWidth(0);
        gridLayout_68 = new QGridLayout(frame_FrameInterpolation);
        gridLayout_68->setObjectName("gridLayout_68");
        gridLayout_68->setContentsMargins(0, 0, 0, 0);
        frame_15 = new QFrame(frame_FrameInterpolation);
        frame_15->setObjectName("frame_15");
        sizePolicy2.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy2);
        frame_15->setFrameShape(QFrame::NoFrame);
        frame_15->setFrameShadow(QFrame::Raised);
        gridLayout_67 = new QGridLayout(frame_15);
        gridLayout_67->setObjectName("gridLayout_67");
        gridLayout_67->setContentsMargins(0, 0, 0, 0);
        checkBox_UHD_VFI = new QCheckBox(frame_15);
        checkBox_UHD_VFI->setObjectName("checkBox_UHD_VFI");
        sizePolicy2.setHeightForWidth(checkBox_UHD_VFI->sizePolicy().hasHeightForWidth());
        checkBox_UHD_VFI->setSizePolicy(sizePolicy2);

        gridLayout_67->addWidget(checkBox_UHD_VFI, 0, 6, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_67->addItem(horizontalSpacer_12, 0, 8, 1, 1);

        line_28 = new QFrame(frame_15);
        line_28->setObjectName("line_28");
        line_28->setFrameShape(QFrame::Shape::VLine);
        line_28->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_28, 0, 4, 1, 1);

        frame_14 = new QFrame(frame_15);
        frame_14->setObjectName("frame_14");
        sizePolicy3.setHeightForWidth(frame_14->sizePolicy().hasHeightForWidth());
        frame_14->setSizePolicy(sizePolicy3);
        frame_14->setFrameShape(QFrame::NoFrame);
        frame_14->setFrameShadow(QFrame::Raised);
        gridLayout_65 = new QGridLayout(frame_14);
        gridLayout_65->setObjectName("gridLayout_65");
        gridLayout_65->setContentsMargins(0, 0, 0, 0);
        label_37 = new QLabel(frame_14);
        label_37->setObjectName("label_37");
        sizePolicy3.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy3);

        gridLayout_65->addWidget(label_37, 0, 0, 1, 1);

        comboBox_Engine_VFI = new QComboBox(frame_14);
        comboBox_Engine_VFI->addItem(QString::fromUtf8("rife-ncnn-vulkan"));
        comboBox_Engine_VFI->addItem(QString::fromUtf8("cain-ncnn-vulkan"));
        comboBox_Engine_VFI->addItem(QString::fromUtf8("dain-ncnn-vulkan"));
        comboBox_Engine_VFI->setObjectName("comboBox_Engine_VFI");
        sizePolicy3.setHeightForWidth(comboBox_Engine_VFI->sizePolicy().hasHeightForWidth());
        comboBox_Engine_VFI->setSizePolicy(sizePolicy3);

        gridLayout_65->addWidget(comboBox_Engine_VFI, 0, 1, 1, 1);


        gridLayout_67->addWidget(frame_14, 0, 3, 1, 1);

        checkBox_TTA_VFI = new QCheckBox(frame_15);
        checkBox_TTA_VFI->setObjectName("checkBox_TTA_VFI");
        sizePolicy2.setHeightForWidth(checkBox_TTA_VFI->sizePolicy().hasHeightForWidth());
        checkBox_TTA_VFI->setSizePolicy(sizePolicy2);

        gridLayout_67->addWidget(checkBox_TTA_VFI, 0, 5, 1, 1);

        checkBox_VfiAfterScale_VFI = new QCheckBox(frame_15);
        checkBox_VfiAfterScale_VFI->setObjectName("checkBox_VfiAfterScale_VFI");

        gridLayout_67->addWidget(checkBox_VfiAfterScale_VFI, 0, 7, 1, 1);


        gridLayout_68->addWidget(frame_15, 0, 0, 1, 3);

        line_27 = new QFrame(frame_FrameInterpolation);
        line_27->setObjectName("line_27");
        line_27->setFrameShape(QFrame::Shape::HLine);
        line_27->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_68->addWidget(line_27, 1, 0, 1, 3);

        line_29 = new QFrame(frame_FrameInterpolation);
        line_29->setObjectName("line_29");
        line_29->setFrameShape(QFrame::Shape::VLine);
        line_29->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_68->addWidget(line_29, 2, 1, 3, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_30 = new QLabel(frame_FrameInterpolation);
        label_30->setObjectName("label_30");
        sizePolicy4.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(label_30);

        comboBox_GPUID_VFI = new QComboBox(frame_FrameInterpolation);
        comboBox_GPUID_VFI->addItem(QString::fromUtf8("auto"));
        comboBox_GPUID_VFI->setObjectName("comboBox_GPUID_VFI");

        horizontalLayout_4->addWidget(comboBox_GPUID_VFI);

        pushButton_DetectGPU_VFI = new QPushButton(frame_FrameInterpolation);
        pushButton_DetectGPU_VFI->setObjectName("pushButton_DetectGPU_VFI");
        sizePolicy3.setHeightForWidth(pushButton_DetectGPU_VFI->sizePolicy().hasHeightForWidth());
        pushButton_DetectGPU_VFI->setSizePolicy(sizePolicy3);
        pushButton_DetectGPU_VFI->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(52, 152, 219);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 177, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 134, 193);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_DetectGPU_VFI);


        gridLayout_68->addLayout(horizontalLayout_4, 2, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        checkBox_MultiGPU_VFI = new QCheckBox(frame_FrameInterpolation);
        checkBox_MultiGPU_VFI->setObjectName("checkBox_MultiGPU_VFI");
        sizePolicy4.setHeightForWidth(checkBox_MultiGPU_VFI->sizePolicy().hasHeightForWidth());
        checkBox_MultiGPU_VFI->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(checkBox_MultiGPU_VFI);

        lineEdit_MultiGPU_IDs_VFI = new QLineEdit(frame_FrameInterpolation);
        lineEdit_MultiGPU_IDs_VFI->setObjectName("lineEdit_MultiGPU_IDs_VFI");
        sizePolicy2.setHeightForWidth(lineEdit_MultiGPU_IDs_VFI->sizePolicy().hasHeightForWidth());
        lineEdit_MultiGPU_IDs_VFI->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(lineEdit_MultiGPU_IDs_VFI);

        pushButton_Verify_MultiGPU_VFI = new QPushButton(frame_FrameInterpolation);
        pushButton_Verify_MultiGPU_VFI->setObjectName("pushButton_Verify_MultiGPU_VFI");
        sizePolicy3.setHeightForWidth(pushButton_Verify_MultiGPU_VFI->sizePolicy().hasHeightForWidth());
        pushButton_Verify_MultiGPU_VFI->setSizePolicy(sizePolicy3);
        pushButton_Verify_MultiGPU_VFI->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(178, 58, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(191, 62, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(154, 50, 205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_Verify_MultiGPU_VFI);


        gridLayout_68->addLayout(horizontalLayout_6, 3, 2, 1, 1);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName("horizontalLayout_49");
        label_19 = new QLabel(frame_FrameInterpolation);
        label_19->setObjectName("label_19");
        sizePolicy4.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy4);

        horizontalLayout_49->addWidget(label_19);

        spinBox_TileSize_VFI = new QSpinBox(frame_FrameInterpolation);
        spinBox_TileSize_VFI->setObjectName("spinBox_TileSize_VFI");
        spinBox_TileSize_VFI->setFocusPolicy(Qt::NoFocus);
        spinBox_TileSize_VFI->setMinimum(128);
        spinBox_TileSize_VFI->setMaximum(999999999);
        spinBox_TileSize_VFI->setSingleStep(32);

        horizontalLayout_49->addWidget(spinBox_TileSize_VFI);

        horizontalSpacer_48 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_48);


        gridLayout_68->addLayout(horizontalLayout_49, 4, 2, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_3 = new QLabel(frame_FrameInterpolation);
        label_3->setObjectName("label_3");
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);

        horizontalLayout_11->addWidget(label_3);

        comboBox_Model_VFI = new QComboBox(frame_FrameInterpolation);
        comboBox_Model_VFI->addItem(QString::fromUtf8("rife"));
        comboBox_Model_VFI->addItem(QString::fromUtf8("rife-anime"));
        comboBox_Model_VFI->addItem(QString::fromUtf8("rife-HD"));
        comboBox_Model_VFI->addItem(QString::fromUtf8("rife-UHD"));
        comboBox_Model_VFI->addItem(QString::fromUtf8("rife-v2"));
        comboBox_Model_VFI->addItem(QString::fromUtf8("rife-v2.4"));
        comboBox_Model_VFI->setObjectName("comboBox_Model_VFI");

        horizontalLayout_11->addWidget(comboBox_Model_VFI);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        checkBox_MultiThread_VFI = new QCheckBox(frame_FrameInterpolation);
        checkBox_MultiThread_VFI->setObjectName("checkBox_MultiThread_VFI");
        sizePolicy3.setHeightForWidth(checkBox_MultiThread_VFI->sizePolicy().hasHeightForWidth());
        checkBox_MultiThread_VFI->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(checkBox_MultiThread_VFI);

        spinBox_NumOfThreads_VFI = new QSpinBox(frame_FrameInterpolation);
        spinBox_NumOfThreads_VFI->setObjectName("spinBox_NumOfThreads_VFI");
        sizePolicy2.setHeightForWidth(spinBox_NumOfThreads_VFI->sizePolicy().hasHeightForWidth());
        spinBox_NumOfThreads_VFI->setSizePolicy(sizePolicy2);
        spinBox_NumOfThreads_VFI->setMinimum(1);
        spinBox_NumOfThreads_VFI->setMaximum(999999999);

        horizontalLayout_9->addWidget(spinBox_NumOfThreads_VFI);

        checkBox_AutoAdjustNumOfThreads_VFI = new QCheckBox(frame_FrameInterpolation);
        checkBox_AutoAdjustNumOfThreads_VFI->setObjectName("checkBox_AutoAdjustNumOfThreads_VFI");
        sizePolicy3.setHeightForWidth(checkBox_AutoAdjustNumOfThreads_VFI->sizePolicy().hasHeightForWidth());
        checkBox_AutoAdjustNumOfThreads_VFI->setSizePolicy(sizePolicy3);
        checkBox_AutoAdjustNumOfThreads_VFI->setChecked(false);

        horizontalLayout_9->addWidget(checkBox_AutoAdjustNumOfThreads_VFI);


        verticalLayout_7->addLayout(horizontalLayout_9);


        gridLayout_68->addLayout(verticalLayout_7, 2, 0, 3, 1);


        gridLayout_64->addWidget(frame_FrameInterpolation, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_FrameInterpolation, 1, 0, 1, 3);

        groupBox_AudioDenoise = new QGroupBox(tab_VideoSettings);
        groupBox_AudioDenoise->setObjectName("groupBox_AudioDenoise");
        sizePolicy3.setHeightForWidth(groupBox_AudioDenoise->sizePolicy().hasHeightForWidth());
        groupBox_AudioDenoise->setSizePolicy(sizePolicy3);
        groupBox_AudioDenoise->setMaximumSize(QSize(16777215, 55));
        gridLayout_16 = new QGridLayout(groupBox_AudioDenoise);
        gridLayout_16->setObjectName("gridLayout_16");
        gridLayout_16->setContentsMargins(6, 6, 6, 6);
        doubleSpinBox_AudioDenoiseLevel = new QDoubleSpinBox(groupBox_AudioDenoise);
        doubleSpinBox_AudioDenoiseLevel->setObjectName("doubleSpinBox_AudioDenoiseLevel");
        doubleSpinBox_AudioDenoiseLevel->setEnabled(false);
        sizePolicy2.setHeightForWidth(doubleSpinBox_AudioDenoiseLevel->sizePolicy().hasHeightForWidth());
        doubleSpinBox_AudioDenoiseLevel->setSizePolicy(sizePolicy2);
        doubleSpinBox_AudioDenoiseLevel->setMinimumSize(QSize(80, 0));
        doubleSpinBox_AudioDenoiseLevel->setDecimals(2);
        doubleSpinBox_AudioDenoiseLevel->setMinimum(0.010000000000000);
        doubleSpinBox_AudioDenoiseLevel->setMaximum(1.000000000000000);
        doubleSpinBox_AudioDenoiseLevel->setSingleStep(0.010000000000000);
        doubleSpinBox_AudioDenoiseLevel->setValue(0.200000000000000);

        gridLayout_16->addWidget(doubleSpinBox_AudioDenoiseLevel, 0, 1, 1, 1);

        label_46 = new QLabel(groupBox_AudioDenoise);
        label_46->setObjectName("label_46");
        sizePolicy4.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy4);
        label_46->setMinimumSize(QSize(0, 0));

        gridLayout_16->addWidget(label_46, 0, 0, 1, 1);

        checkBox_AudioDenoise = new QCheckBox(groupBox_AudioDenoise);
        checkBox_AudioDenoise->setObjectName("checkBox_AudioDenoise");
        sizePolicy3.setHeightForWidth(checkBox_AudioDenoise->sizePolicy().hasHeightForWidth());
        checkBox_AudioDenoise->setSizePolicy(sizePolicy3);

        gridLayout_16->addWidget(checkBox_AudioDenoise, 0, 3, 1, 1);

        line_7 = new QFrame(groupBox_AudioDenoise);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_16->addWidget(line_7, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_AudioDenoise, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(673, 45, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_11, 0, 2, 1, 2);

        groupBox_video_settings = new QGroupBox(tab_VideoSettings);
        groupBox_video_settings->setObjectName("groupBox_video_settings");
        sizePolicy.setHeightForWidth(groupBox_video_settings->sizePolicy().hasHeightForWidth());
        groupBox_video_settings->setSizePolicy(sizePolicy);
        groupBox_video_settings->setMaximumSize(QSize(16777215, 16777215));
        groupBox_video_settings->setCheckable(true);
        groupBox_video_settings->setChecked(false);
        gridLayout_18 = new QGridLayout(groupBox_video_settings);
        gridLayout_18->setObjectName("gridLayout_18");
        gridLayout_18->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox_OutputVideoSettings = new QGroupBox(groupBox_video_settings);
        groupBox_OutputVideoSettings->setObjectName("groupBox_OutputVideoSettings");
        groupBox_OutputVideoSettings->setEnabled(false);
        gridLayout_51 = new QGridLayout(groupBox_OutputVideoSettings);
        gridLayout_51->setSpacing(5);
        gridLayout_51->setObjectName("gridLayout_51");
        gridLayout_51->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName("horizontalLayout_42");
        label_31 = new QLabel(groupBox_OutputVideoSettings);
        label_31->setObjectName("label_31");
        sizePolicy3.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy3);

        horizontalLayout_42->addWidget(label_31);

        lineEdit_encoder_vid = new QLineEdit(groupBox_OutputVideoSettings);
        lineEdit_encoder_vid->setObjectName("lineEdit_encoder_vid");
        lineEdit_encoder_vid->setText(QString::fromUtf8("libx264"));

        horizontalLayout_42->addWidget(lineEdit_encoder_vid);


        gridLayout_51->addLayout(horizontalLayout_42, 0, 0, 1, 1);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName("horizontalLayout_43");
        label_27 = new QLabel(groupBox_OutputVideoSettings);
        label_27->setObjectName("label_27");
        sizePolicy3.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy3);

        horizontalLayout_43->addWidget(label_27);

        spinBox_bitrate_vid = new QSpinBox(groupBox_OutputVideoSettings);
        spinBox_bitrate_vid->setObjectName("spinBox_bitrate_vid");
        spinBox_bitrate_vid->setSuffix(QString::fromUtf8(" K"));
        spinBox_bitrate_vid->setMinimum(0);
        spinBox_bitrate_vid->setMaximum(999999999);
        spinBox_bitrate_vid->setSingleStep(100);
        spinBox_bitrate_vid->setValue(6000);

        horizontalLayout_43->addWidget(spinBox_bitrate_vid);


        gridLayout_51->addLayout(horizontalLayout_43, 1, 0, 1, 1);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setObjectName("horizontalLayout_44");
        label_32 = new QLabel(groupBox_OutputVideoSettings);
        label_32->setObjectName("label_32");
        sizePolicy3.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy3);

        horizontalLayout_44->addWidget(label_32);

        lineEdit_encoder_audio = new QLineEdit(groupBox_OutputVideoSettings);
        lineEdit_encoder_audio->setObjectName("lineEdit_encoder_audio");
        lineEdit_encoder_audio->setText(QString::fromUtf8("aac"));

        horizontalLayout_44->addWidget(lineEdit_encoder_audio);


        gridLayout_51->addLayout(horizontalLayout_44, 2, 0, 1, 1);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setObjectName("horizontalLayout_45");
        label_29 = new QLabel(groupBox_OutputVideoSettings);
        label_29->setObjectName("label_29");
        sizePolicy3.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy3);

        horizontalLayout_45->addWidget(label_29);

        spinBox_bitrate_audio = new QSpinBox(groupBox_OutputVideoSettings);
        spinBox_bitrate_audio->setObjectName("spinBox_bitrate_audio");
        spinBox_bitrate_audio->setSuffix(QString::fromUtf8(" K"));
        spinBox_bitrate_audio->setMinimum(0);
        spinBox_bitrate_audio->setMaximum(999999999);
        spinBox_bitrate_audio->setSingleStep(10);
        spinBox_bitrate_audio->setValue(320);

        horizontalLayout_45->addWidget(spinBox_bitrate_audio);


        gridLayout_51->addLayout(horizontalLayout_45, 3, 0, 1, 1);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setObjectName("horizontalLayout_46");
        label_33 = new QLabel(groupBox_OutputVideoSettings);
        label_33->setObjectName("label_33");
        sizePolicy3.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy3);

        horizontalLayout_46->addWidget(label_33);

        lineEdit_pixformat = new QLineEdit(groupBox_OutputVideoSettings);
        lineEdit_pixformat->setObjectName("lineEdit_pixformat");
        lineEdit_pixformat->setText(QString::fromUtf8("yuv420p"));

        horizontalLayout_46->addWidget(lineEdit_pixformat);


        gridLayout_51->addLayout(horizontalLayout_46, 4, 0, 1, 1);

        line_17 = new QFrame(groupBox_OutputVideoSettings);
        line_17->setObjectName("line_17");
        line_17->setFrameShape(QFrame::Shape::HLine);
        line_17->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_51->addWidget(line_17, 5, 0, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_51->addItem(horizontalSpacer_10, 0, 1, 5, 1);

        frame_9 = new QFrame(groupBox_OutputVideoSettings);
        frame_9->setObjectName("frame_9");
        sizePolicy2.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy2);
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_9);
        gridLayout_12->setSpacing(5);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(frame_9);
        label_42->setObjectName("label_42");
        sizePolicy3.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy3);

        gridLayout_12->addWidget(label_42, 0, 0, 1, 1);

        lineEdit_ExCommand_output = new QLineEdit(frame_9);
        lineEdit_ExCommand_output->setObjectName("lineEdit_ExCommand_output");
        lineEdit_ExCommand_output->setText(QString::fromUtf8(""));
        lineEdit_ExCommand_output->setClearButtonEnabled(true);

        gridLayout_12->addWidget(lineEdit_ExCommand_output, 0, 1, 1, 1);


        gridLayout_51->addWidget(frame_9, 6, 0, 1, 2);


        horizontalLayout_3->addWidget(groupBox_OutputVideoSettings);

        groupBox_ToMp4VideoSettings = new QGroupBox(groupBox_video_settings);
        groupBox_ToMp4VideoSettings->setObjectName("groupBox_ToMp4VideoSettings");
        groupBox_ToMp4VideoSettings->setEnabled(false);
        gridLayout_33 = new QGridLayout(groupBox_ToMp4VideoSettings);
        gridLayout_33->setSpacing(5);
        gridLayout_33->setObjectName("gridLayout_33");
        gridLayout_33->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_27 = new QSpacerItem(130, 208, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_33->addItem(horizontalSpacer_27, 0, 1, 3, 1);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName("horizontalLayout_41");
        label_35 = new QLabel(groupBox_ToMp4VideoSettings);
        label_35->setObjectName("label_35");
        sizePolicy3.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy3);

        horizontalLayout_41->addWidget(label_35);

        spinBox_bitrate_audio_2mp4 = new QSpinBox(groupBox_ToMp4VideoSettings);
        spinBox_bitrate_audio_2mp4->setObjectName("spinBox_bitrate_audio_2mp4");
        spinBox_bitrate_audio_2mp4->setSuffix(QString::fromUtf8(" K"));
        spinBox_bitrate_audio_2mp4->setMinimum(0);
        spinBox_bitrate_audio_2mp4->setMaximum(999999999);
        spinBox_bitrate_audio_2mp4->setSingleStep(10);
        spinBox_bitrate_audio_2mp4->setValue(320);

        horizontalLayout_41->addWidget(spinBox_bitrate_audio_2mp4);


        gridLayout_33->addLayout(horizontalLayout_41, 1, 0, 1, 1);

        line_18 = new QFrame(groupBox_ToMp4VideoSettings);
        line_18->setObjectName("line_18");
        line_18->setFrameShape(QFrame::Shape::HLine);
        line_18->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_33->addWidget(line_18, 4, 0, 1, 2);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName("horizontalLayout_39");
        checkBox_acodec_copy_2mp4 = new QCheckBox(groupBox_ToMp4VideoSettings);
        checkBox_acodec_copy_2mp4->setObjectName("checkBox_acodec_copy_2mp4");
        sizePolicy3.setHeightForWidth(checkBox_acodec_copy_2mp4->sizePolicy().hasHeightForWidth());
        checkBox_acodec_copy_2mp4->setSizePolicy(sizePolicy3);

        horizontalLayout_39->addWidget(checkBox_acodec_copy_2mp4);

        checkBox_vcodec_copy_2mp4 = new QCheckBox(groupBox_ToMp4VideoSettings);
        checkBox_vcodec_copy_2mp4->setObjectName("checkBox_vcodec_copy_2mp4");
        sizePolicy3.setHeightForWidth(checkBox_vcodec_copy_2mp4->sizePolicy().hasHeightForWidth());
        checkBox_vcodec_copy_2mp4->setSizePolicy(sizePolicy3);

        horizontalLayout_39->addWidget(checkBox_vcodec_copy_2mp4);

        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_43);


        gridLayout_33->addLayout(horizontalLayout_39, 2, 0, 1, 1);

        frame_10 = new QFrame(groupBox_ToMp4VideoSettings);
        frame_10->setObjectName("frame_10");
        sizePolicy2.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy2);
        frame_10->setFrameShape(QFrame::NoFrame);
        frame_10->setFrameShadow(QFrame::Raised);
        gridLayout_52 = new QGridLayout(frame_10);
        gridLayout_52->setSpacing(5);
        gridLayout_52->setObjectName("gridLayout_52");
        gridLayout_52->setContentsMargins(0, 0, 0, 0);
        label_45 = new QLabel(frame_10);
        label_45->setObjectName("label_45");
        sizePolicy3.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy3);

        gridLayout_52->addWidget(label_45, 0, 0, 1, 1);

        lineEdit_ExCommand_2mp4 = new QLineEdit(frame_10);
        lineEdit_ExCommand_2mp4->setObjectName("lineEdit_ExCommand_2mp4");
        lineEdit_ExCommand_2mp4->setText(QString::fromUtf8(""));
        lineEdit_ExCommand_2mp4->setClearButtonEnabled(true);

        gridLayout_52->addWidget(lineEdit_ExCommand_2mp4, 0, 1, 1, 1);


        gridLayout_33->addWidget(frame_10, 5, 0, 1, 2);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName("horizontalLayout_40");
        label_34 = new QLabel(groupBox_ToMp4VideoSettings);
        label_34->setObjectName("label_34");
        sizePolicy3.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy3);

        horizontalLayout_40->addWidget(label_34);

        spinBox_bitrate_vid_2mp4 = new QSpinBox(groupBox_ToMp4VideoSettings);
        spinBox_bitrate_vid_2mp4->setObjectName("spinBox_bitrate_vid_2mp4");
        spinBox_bitrate_vid_2mp4->setSuffix(QString::fromUtf8(" K"));
        spinBox_bitrate_vid_2mp4->setMinimum(0);
        spinBox_bitrate_vid_2mp4->setMaximum(999999999);
        spinBox_bitrate_vid_2mp4->setSingleStep(100);
        spinBox_bitrate_vid_2mp4->setValue(2500);

        horizontalLayout_40->addWidget(spinBox_bitrate_vid_2mp4);


        gridLayout_33->addLayout(horizontalLayout_40, 0, 0, 1, 1);

        checkBox_IgnoreFrameRateMode = new QCheckBox(groupBox_ToMp4VideoSettings);
        checkBox_IgnoreFrameRateMode->setObjectName("checkBox_IgnoreFrameRateMode");

        gridLayout_33->addWidget(checkBox_IgnoreFrameRateMode, 3, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_ToMp4VideoSettings);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        gridLayout_18->addLayout(horizontalLayout_3, 0, 0, 1, 3);

        frame_19 = new QFrame(groupBox_video_settings);
        frame_19->setObjectName("frame_19");
        sizePolicy2.setHeightForWidth(frame_19->sizePolicy().hasHeightForWidth());
        frame_19->setSizePolicy(sizePolicy2);
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        gridLayout_60 = new QGridLayout(frame_19);
        gridLayout_60->setObjectName("gridLayout_60");
        gridLayout_60->setContentsMargins(0, 0, 0, 0);
        pushButton_ResetVideoSettings = new QPushButton(frame_19);
        pushButton_ResetVideoSettings->setObjectName("pushButton_ResetVideoSettings");
        sizePolicy2.setHeightForWidth(pushButton_ResetVideoSettings->sizePolicy().hasHeightForWidth());
        pushButton_ResetVideoSettings->setSizePolicy(sizePolicy2);
        pushButton_ResetVideoSettings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(204, 65, 53);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_60->addWidget(pushButton_ResetVideoSettings, 0, 0, 1, 1);

        pushButton_encodersList = new QPushButton(frame_19);
        pushButton_encodersList->setObjectName("pushButton_encodersList");
        sizePolicy2.setHeightForWidth(pushButton_encodersList->sizePolicy().hasHeightForWidth());
        pushButton_encodersList->setSizePolicy(sizePolicy2);
        pushButton_encodersList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(52, 152, 219);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 177, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 134, 193);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_60->addWidget(pushButton_encodersList, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(549, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_60->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        gridLayout_60->setColumnStretch(0, 2);
        gridLayout_60->setColumnStretch(1, 2);
        gridLayout_60->setColumnStretch(2, 5);

        gridLayout_18->addWidget(frame_19, 1, 0, 1, 3);


        gridLayout_2->addWidget(groupBox_video_settings, 2, 0, 1, 4);

        groupBox_ProcessVideoBySegment = new QGroupBox(tab_VideoSettings);
        groupBox_ProcessVideoBySegment->setObjectName("groupBox_ProcessVideoBySegment");
        gridLayout_69 = new QGridLayout(groupBox_ProcessVideoBySegment);
        gridLayout_69->setObjectName("gridLayout_69");
        label_SegmentDuration = new QLabel(groupBox_ProcessVideoBySegment);
        label_SegmentDuration->setObjectName("label_SegmentDuration");
        sizePolicy3.setHeightForWidth(label_SegmentDuration->sizePolicy().hasHeightForWidth());
        label_SegmentDuration->setSizePolicy(sizePolicy3);

        gridLayout_69->addWidget(label_SegmentDuration, 0, 0, 1, 1);

        spinBox_SegmentDuration = new QSpinBox(groupBox_ProcessVideoBySegment);
        spinBox_SegmentDuration->setObjectName("spinBox_SegmentDuration");
        sizePolicy2.setHeightForWidth(spinBox_SegmentDuration->sizePolicy().hasHeightForWidth());
        spinBox_SegmentDuration->setSizePolicy(sizePolicy2);
        spinBox_SegmentDuration->setMinimum(1);
        spinBox_SegmentDuration->setMaximum(999999999);
        spinBox_SegmentDuration->setValue(30);

        gridLayout_69->addWidget(spinBox_SegmentDuration, 0, 1, 1, 1);

        checkBox_ProcessVideoBySegment = new QCheckBox(groupBox_ProcessVideoBySegment);
        checkBox_ProcessVideoBySegment->setObjectName("checkBox_ProcessVideoBySegment");
        checkBox_ProcessVideoBySegment->setChecked(true);

        gridLayout_69->addWidget(checkBox_ProcessVideoBySegment, 0, 3, 1, 1);

        line_46 = new QFrame(groupBox_ProcessVideoBySegment);
        line_46->setObjectName("line_46");
        line_46->setFrameShape(QFrame::Shape::VLine);
        line_46->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_69->addWidget(line_46, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_ProcessVideoBySegment, 0, 1, 1, 1);

        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/icon/VideoSettings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_VideoSettings, icon8, QString());
        tab_AdditionalSettings = new QWidget();
        tab_AdditionalSettings->setObjectName("tab_AdditionalSettings");
        gridLayout_19 = new QGridLayout(tab_AdditionalSettings);
        gridLayout_19->setSpacing(5);
        gridLayout_19->setObjectName("gridLayout_19");
        gridLayout_19->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox_InputExt = new QGroupBox(tab_AdditionalSettings);
        groupBox_InputExt->setObjectName("groupBox_InputExt");
        groupBox_InputExt->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_10 = new QGridLayout(groupBox_InputExt);
        gridLayout_10->setObjectName("gridLayout_10");
        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setObjectName("horizontalLayout_47");
        label_4 = new QLabel(groupBox_InputExt);
        label_4->setObjectName("label_4");
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_47->addWidget(label_4);

        Ext_image = new QLineEdit(groupBox_InputExt);
        Ext_image->setObjectName("Ext_image");
        Ext_image->setMinimumSize(QSize(300, 0));
        Ext_image->setAcceptDrops(false);
        Ext_image->setText(QString::fromUtf8("png:jpg:jpeg:tif:tiff:bmp"));

        horizontalLayout_47->addWidget(Ext_image);


        gridLayout_10->addLayout(horizontalLayout_47, 0, 0, 1, 1);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName("horizontalLayout_48");
        label_5 = new QLabel(groupBox_InputExt);
        label_5->setObjectName("label_5");
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_48->addWidget(label_5);

        Ext_video = new QLineEdit(groupBox_InputExt);
        Ext_video->setObjectName("Ext_video");
        Ext_video->setMinimumSize(QSize(300, 0));
        Ext_video->setAcceptDrops(false);
        Ext_video->setText(QString::fromUtf8("mp4:3gp:avi:flv:mkv:mov:mpg:ogg:vob:webm:wmv"));

        horizontalLayout_48->addWidget(Ext_video);


        gridLayout_10->addLayout(horizontalLayout_48, 1, 0, 1, 1);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName("horizontalLayout_35");
        checkBox_PreProcessImage = new QCheckBox(groupBox_InputExt);
        checkBox_PreProcessImage->setObjectName("checkBox_PreProcessImage");

        horizontalLayout_35->addWidget(checkBox_PreProcessImage);

        checkBox_AutoDetectAlphaChannel = new QCheckBox(groupBox_InputExt);
        checkBox_AutoDetectAlphaChannel->setObjectName("checkBox_AutoDetectAlphaChannel");
        checkBox_AutoDetectAlphaChannel->setEnabled(true);
        checkBox_AutoDetectAlphaChannel->setChecked(true);

        horizontalLayout_35->addWidget(checkBox_AutoDetectAlphaChannel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_3);


        gridLayout_10->addLayout(horizontalLayout_35, 2, 0, 1, 1);

        checkBox_AlwaysPreProcessAlphaPNG = new QCheckBox(groupBox_InputExt);
        checkBox_AlwaysPreProcessAlphaPNG->setObjectName("checkBox_AlwaysPreProcessAlphaPNG");
        sizePolicy2.setHeightForWidth(checkBox_AlwaysPreProcessAlphaPNG->sizePolicy().hasHeightForWidth());
        checkBox_AlwaysPreProcessAlphaPNG->setSizePolicy(sizePolicy2);
        checkBox_AlwaysPreProcessAlphaPNG->setChecked(false);

        gridLayout_10->addWidget(checkBox_AlwaysPreProcessAlphaPNG, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox_InputExt);

        groupBox_3 = new QGroupBox(tab_AdditionalSettings);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_17 = new QGridLayout(groupBox_3);
        gridLayout_17->setObjectName("gridLayout_17");
        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName("horizontalLayout_37");
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName("label_24");
        sizePolicy3.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy3);
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_37->addWidget(label_24);

        fontComboBox_CustFont = new QFontComboBox(groupBox_3);
        fontComboBox_CustFont->setObjectName("fontComboBox_CustFont");
        fontComboBox_CustFont->setEnabled(false);
        fontComboBox_CustFont->setCurrentText(QString::fromUtf8("\345\256\213\344\275\223"));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        fontComboBox_CustFont->setCurrentFont(font7);

        horizontalLayout_37->addWidget(fontComboBox_CustFont);


        gridLayout_17->addLayout(horizontalLayout_37, 1, 0, 1, 1);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName("horizontalLayout_38");
        pushButton_Save_GlobalFontSize = new QPushButton(groupBox_3);
        pushButton_Save_GlobalFontSize->setObjectName("pushButton_Save_GlobalFontSize");
        pushButton_Save_GlobalFontSize->setEnabled(false);
        sizePolicy2.setHeightForWidth(pushButton_Save_GlobalFontSize->sizePolicy().hasHeightForWidth());
        pushButton_Save_GlobalFontSize->setSizePolicy(sizePolicy2);
        pushButton_Save_GlobalFontSize->setMaximumSize(QSize(16777215, 16777215));
        pushButton_Save_GlobalFontSize->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(26, 188, 156);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(29, 214, 177);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(23, 173, 143);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_38->addWidget(pushButton_Save_GlobalFontSize);

        checkBox_isCustFontEnable = new QCheckBox(groupBox_3);
        checkBox_isCustFontEnable->setObjectName("checkBox_isCustFontEnable");
        sizePolicy3.setHeightForWidth(checkBox_isCustFontEnable->sizePolicy().hasHeightForWidth());
        checkBox_isCustFontEnable->setSizePolicy(sizePolicy3);

        horizontalLayout_38->addWidget(checkBox_isCustFontEnable);


        gridLayout_17->addLayout(horizontalLayout_38, 2, 0, 1, 1);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName("horizontalLayout_36");
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName("label_22");
        sizePolicy3.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy3);
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_36->addWidget(label_22);

        spinBox_GlobalFontSize = new QSpinBox(groupBox_3);
        spinBox_GlobalFontSize->setObjectName("spinBox_GlobalFontSize");
        spinBox_GlobalFontSize->setEnabled(false);
        sizePolicy2.setHeightForWidth(spinBox_GlobalFontSize->sizePolicy().hasHeightForWidth());
        spinBox_GlobalFontSize->setSizePolicy(sizePolicy2);
        spinBox_GlobalFontSize->setMinimumSize(QSize(80, 0));
        spinBox_GlobalFontSize->setMaximumSize(QSize(16777215, 16777215));
        spinBox_GlobalFontSize->setMinimum(1);
        spinBox_GlobalFontSize->setMaximum(999);
        spinBox_GlobalFontSize->setValue(15);

        horizontalLayout_36->addWidget(spinBox_GlobalFontSize);


        gridLayout_17->addLayout(horizontalLayout_36, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_2, 0, 1, 3, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_other_1 = new QGroupBox(tab_AdditionalSettings);
        groupBox_other_1->setObjectName("groupBox_other_1");
        sizePolicy.setHeightForWidth(groupBox_other_1->sizePolicy().hasHeightForWidth());
        groupBox_other_1->setSizePolicy(sizePolicy);
        groupBox_other_1->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_7 = new QGridLayout(groupBox_other_1);
        gridLayout_7->setObjectName("gridLayout_7");
        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName("horizontalLayout_57");
        pushButton_SaveSettings = new QPushButton(groupBox_other_1);
        pushButton_SaveSettings->setObjectName("pushButton_SaveSettings");
        pushButton_SaveSettings->setEnabled(true);
        pushButton_SaveSettings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(178, 58, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(191, 62, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(154, 50, 205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_57->addWidget(pushButton_SaveSettings);

        pushButton_ResetSettings = new QPushButton(groupBox_other_1);
        pushButton_ResetSettings->setObjectName("pushButton_ResetSettings");
        pushButton_ResetSettings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(238, 99, 99);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 106, 106);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(205, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_57->addWidget(pushButton_ResetSettings);

        pushButton_CheckUpdate = new QPushButton(groupBox_other_1);
        pushButton_CheckUpdate->setObjectName("pushButton_CheckUpdate");
        QFont font8;
        font8.setPointSize(9);
        font8.setUnderline(false);
        pushButton_CheckUpdate->setFont(font8);
        pushButton_CheckUpdate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(26, 188, 156);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(29, 214, 177);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(23, 173, 143);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_57->addWidget(pushButton_CheckUpdate);


        gridLayout_7->addLayout(horizontalLayout_57, 0, 0, 1, 1);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setObjectName("horizontalLayout_58");
        pushButton_Report = new QPushButton(groupBox_other_1);
        pushButton_Report->setObjectName("pushButton_Report");
        QFont font9;
        font9.setUnderline(false);
        pushButton_Report->setFont(font9);
        pushButton_Report->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(231, 76, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 102, 64);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(204, 65, 53);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_58->addWidget(pushButton_Report);

        pushButton_ReadMe = new QPushButton(groupBox_other_1);
        pushButton_ReadMe->setObjectName("pushButton_ReadMe");
        pushButton_ReadMe->setFont(font9);
        pushButton_ReadMe->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 181, 6);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 200, 50);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 170, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_58->addWidget(pushButton_ReadMe);

        pushButton_wiki = new QPushButton(groupBox_other_1);
        pushButton_wiki->setObjectName("pushButton_wiki");
        pushButton_wiki->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(178, 58, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(191, 62, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(154, 50, 205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_58->addWidget(pushButton_wiki);


        gridLayout_7->addLayout(horizontalLayout_58, 1, 0, 1, 1);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName("horizontalLayout_59");
        pushButton_about = new QPushButton(groupBox_other_1);
        pushButton_about->setObjectName("pushButton_about");
        pushButton_about->setMaximumSize(QSize(16777215, 16777215));
        pushButton_about->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(52, 152, 219);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(60, 177, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(45, 134, 193);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_59->addWidget(pushButton_about);

        pushButton_SupportersList = new QPushButton(groupBox_other_1);
        pushButton_SupportersList->setObjectName("pushButton_SupportersList");
        pushButton_SupportersList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 66, 77);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 105, 112);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(223, 50, 61);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        horizontalLayout_59->addWidget(pushButton_SupportersList);

        horizontalLayout_59->setStretch(0, 1);
        horizontalLayout_59->setStretch(1, 2);

        gridLayout_7->addLayout(horizontalLayout_59, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_other_1);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        horizontalLayout_10->addLayout(verticalLayout);

        groupBox_8 = new QGroupBox(tab_AdditionalSettings);
        groupBox_8->setObjectName("groupBox_8");
        gridLayout_14 = new QGridLayout(groupBox_8);
        gridLayout_14->setSpacing(7);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_14->setContentsMargins(6, 6, 6, 6);
        frame_7 = new QFrame(groupBox_8);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_50 = new QGridLayout(frame_7);
        gridLayout_50->setSpacing(5);
        gridLayout_50->setObjectName("gridLayout_50");
        gridLayout_50->setContentsMargins(0, 0, 0, 0);
        checkBox_UpdatePopup = new QCheckBox(frame_7);
        checkBox_UpdatePopup->setObjectName("checkBox_UpdatePopup");
        sizePolicy6.setHeightForWidth(checkBox_UpdatePopup->sizePolicy().hasHeightForWidth());
        checkBox_UpdatePopup->setSizePolicy(sizePolicy6);
        checkBox_UpdatePopup->setChecked(true);

        gridLayout_50->addWidget(checkBox_UpdatePopup, 0, 0, 1, 1);

        checkBox_AutoSaveSettings = new QCheckBox(frame_7);
        checkBox_AutoSaveSettings->setObjectName("checkBox_AutoSaveSettings");
        checkBox_AutoSaveSettings->setChecked(true);

        gridLayout_50->addWidget(checkBox_AutoSaveSettings, 2, 0, 1, 1);

        checkBox_DisableResize_gif = new QCheckBox(frame_7);
        checkBox_DisableResize_gif->setObjectName("checkBox_DisableResize_gif");

        gridLayout_50->addWidget(checkBox_DisableResize_gif, 9, 0, 1, 1);

        checkBox_PromptWhenExit = new QCheckBox(frame_7);
        checkBox_PromptWhenExit->setObjectName("checkBox_PromptWhenExit");
        checkBox_PromptWhenExit->setChecked(true);

        gridLayout_50->addWidget(checkBox_PromptWhenExit, 5, 0, 1, 1);

        checkBox_MinimizeToTaskbar = new QCheckBox(frame_7);
        checkBox_MinimizeToTaskbar->setObjectName("checkBox_MinimizeToTaskbar");

        gridLayout_50->addWidget(checkBox_MinimizeToTaskbar, 1, 0, 1, 1);

        checkBox_AlwaysHideTextBrowser = new QCheckBox(frame_7);
        checkBox_AlwaysHideTextBrowser->setObjectName("checkBox_AlwaysHideTextBrowser");

        gridLayout_50->addWidget(checkBox_AlwaysHideTextBrowser, 3, 0, 1, 1);

        checkBox_ScanSubFolders = new QCheckBox(frame_7);
        checkBox_ScanSubFolders->setObjectName("checkBox_ScanSubFolders");
        checkBox_ScanSubFolders->setChecked(true);

        gridLayout_50->addWidget(checkBox_ScanSubFolders, 4, 0, 1, 1);

        frame_4 = new QFrame(frame_7);
        frame_4->setObjectName("frame_4");
        sizePolicy2.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy2);
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_4->setLineWidth(0);
        gridLayout_46 = new QGridLayout(frame_4);
        gridLayout_46->setSpacing(2);
        gridLayout_46->setObjectName("gridLayout_46");
        gridLayout_46->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(frame_4);
        label_39->setObjectName("label_39");
        sizePolicy3.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy3);

        gridLayout_46->addWidget(label_39, 0, 0, 1, 1);

        spinBox_retry = new QSpinBox(frame_4);
        spinBox_retry->setObjectName("spinBox_retry");
        sizePolicy2.setHeightForWidth(spinBox_retry->sizePolicy().hasHeightForWidth());
        spinBox_retry->setSizePolicy(sizePolicy2);
        spinBox_retry->setMinimum(1);
        spinBox_retry->setMaximum(999999999);
        spinBox_retry->setValue(6);

        gridLayout_46->addWidget(spinBox_retry, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_46->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout_50->addWidget(frame_4, 6, 0, 1, 1);

        checkBox_BanGitee = new QCheckBox(frame_7);
        checkBox_BanGitee->setObjectName("checkBox_BanGitee");

        gridLayout_50->addWidget(checkBox_BanGitee, 10, 0, 1, 1);


        gridLayout_14->addWidget(frame_7, 0, 0, 1, 1);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_44, 0, 4, 1, 1);

        line_44 = new QFrame(groupBox_8);
        line_44->setObjectName("line_44");
        line_44->setFrameShadow(QFrame::Raised);
        line_44->setFrameShape(QFrame::Shape::VLine);

        gridLayout_14->addWidget(line_44, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        frame_8 = new QFrame(groupBox_8);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_49 = new QGridLayout(frame_8);
        gridLayout_49->setSpacing(5);
        gridLayout_49->setObjectName("gridLayout_49");
        gridLayout_49->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame_8);
        frame_3->setObjectName("frame_3");
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(0);
        gridLayout_27 = new QGridLayout(frame_3);
        gridLayout_27->setSpacing(2);
        gridLayout_27->setObjectName("gridLayout_27");
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        comboBox_language = new QComboBox(frame_3);
        comboBox_language->addItem(QString::fromUtf8("English"));
        comboBox_language->addItem(QString::fromUtf8("\347\256\200\344\275\223\344\270\255\346\226\207"));
        comboBox_language->addItem(QString::fromUtf8("\347\271\201\351\253\224\344\270\255\346\226\207(\347\224\261uimee\347\277\273\350\255\257)"));
        comboBox_language->setObjectName("comboBox_language");
        comboBox_language->setMinimumSize(QSize(150, 0));
        comboBox_language->setCurrentText(QString::fromUtf8("English"));

        gridLayout_27->addWidget(comboBox_language, 0, 1, 1, 1);

        label_21 = new QLabel(frame_3);
        label_21->setObjectName("label_21");
        sizePolicy3.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy3);
        label_21->setMaximumSize(QSize(16777215, 16777215));
        label_21->setText(QString::fromUtf8("Language:"));
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_27->addWidget(label_21, 0, 0, 1, 1);


        gridLayout_49->addWidget(frame_3, 8, 0, 1, 1);

        checkBox_NfSound = new QCheckBox(frame_8);
        checkBox_NfSound->setObjectName("checkBox_NfSound");
        checkBox_NfSound->setChecked(true);

        gridLayout_49->addWidget(checkBox_NfSound, 7, 0, 1, 1);

        checkBox_FileListAutoSlide = new QCheckBox(frame_8);
        checkBox_FileListAutoSlide->setObjectName("checkBox_FileListAutoSlide");
        checkBox_FileListAutoSlide->setChecked(true);

        gridLayout_49->addWidget(checkBox_FileListAutoSlide, 1, 0, 1, 1);

        frame_6 = new QFrame(frame_8);
        frame_6->setObjectName("frame_6");
        sizePolicy2.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy2);
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_6->setLineWidth(0);
        gridLayout_48 = new QGridLayout(frame_6);
        gridLayout_48->setSpacing(2);
        gridLayout_48->setObjectName("gridLayout_48");
        gridLayout_48->setContentsMargins(0, 0, 0, 0);
        label_55 = new QLabel(frame_6);
        label_55->setObjectName("label_55");
        sizePolicy3.setHeightForWidth(label_55->sizePolicy().hasHeightForWidth());
        label_55->setSizePolicy(sizePolicy3);

        gridLayout_48->addWidget(label_55, 0, 0, 1, 1);

        comboBox_UpdateChannel = new QComboBox(frame_6);
        comboBox_UpdateChannel->addItem(QString());
        comboBox_UpdateChannel->addItem(QString());
        comboBox_UpdateChannel->setObjectName("comboBox_UpdateChannel");
        sizePolicy2.setHeightForWidth(comboBox_UpdateChannel->sizePolicy().hasHeightForWidth());
        comboBox_UpdateChannel->setSizePolicy(sizePolicy2);

        gridLayout_48->addWidget(comboBox_UpdateChannel, 0, 1, 1, 1);


        gridLayout_49->addWidget(frame_6, 0, 0, 1, 1);

        checkBox_KeepVideoCache = new QCheckBox(frame_8);
        checkBox_KeepVideoCache->setObjectName("checkBox_KeepVideoCache");
        checkBox_KeepVideoCache->setChecked(false);

        gridLayout_49->addWidget(checkBox_KeepVideoCache, 5, 0, 1, 1);

        checkBox_FileList_Interactive = new QCheckBox(frame_8);
        checkBox_FileList_Interactive->setObjectName("checkBox_FileList_Interactive");
        checkBox_FileList_Interactive->setChecked(false);

        gridLayout_49->addWidget(checkBox_FileList_Interactive, 4, 0, 1, 1);

        checkBox_AlwaysHideSettings = new QCheckBox(frame_8);
        checkBox_AlwaysHideSettings->setObjectName("checkBox_AlwaysHideSettings");

        gridLayout_49->addWidget(checkBox_AlwaysHideSettings, 3, 0, 1, 1);

        checkBox_ShowInterPro = new QCheckBox(frame_8);
        checkBox_ShowInterPro->setObjectName("checkBox_ShowInterPro");
        checkBox_ShowInterPro->setChecked(true);

        gridLayout_49->addWidget(checkBox_ShowInterPro, 2, 0, 1, 1);

        checkBox_SummaryPopup = new QCheckBox(frame_8);
        checkBox_SummaryPopup->setObjectName("checkBox_SummaryPopup");
        checkBox_SummaryPopup->setChecked(true);

        gridLayout_49->addWidget(checkBox_SummaryPopup, 6, 0, 1, 1);


        gridLayout_14->addWidget(frame_8, 0, 3, 1, 1);


        horizontalLayout_10->addWidget(groupBox_8);

        horizontalLayout_10->setStretch(0, 2);
        horizontalLayout_10->setStretch(1, 3);

        gridLayout_19->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        gridLayout_19->setColumnStretch(0, 3);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/icon/AddSetting.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_AdditionalSettings, icon9, QString());
        tab_CompatibilityTest = new QWidget();
        tab_CompatibilityTest->setObjectName("tab_CompatibilityTest");
        gridLayout_32 = new QGridLayout(tab_CompatibilityTest);
        gridLayout_32->setObjectName("gridLayout_32");
        gridLayout_32->setHorizontalSpacing(0);
        gridLayout_32->setContentsMargins(6, 6, 6, 6);
        pushButton_compatibilityTest = new QPushButton(tab_CompatibilityTest);
        pushButton_compatibilityTest->setObjectName("pushButton_compatibilityTest");
        sizePolicy2.setHeightForWidth(pushButton_compatibilityTest->sizePolicy().hasHeightForWidth());
        pushButton_compatibilityTest->setSizePolicy(sizePolicy2);
        pushButton_compatibilityTest->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(92, 172, 238);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(99, 184, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(79, 148,205);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));

        gridLayout_32->addWidget(pushButton_compatibilityTest, 2, 0, 1, 1);

        progressBar_CompatibilityTest = new QProgressBar(tab_CompatibilityTest);
        progressBar_CompatibilityTest->setObjectName("progressBar_CompatibilityTest");
        sizePolicy2.setHeightForWidth(progressBar_CompatibilityTest->sizePolicy().hasHeightForWidth());
        progressBar_CompatibilityTest->setSizePolicy(sizePolicy2);
        progressBar_CompatibilityTest->setMaximum(19);
        progressBar_CompatibilityTest->setValue(0);
        progressBar_CompatibilityTest->setInvertedAppearance(false);
        progressBar_CompatibilityTest->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_32->addWidget(progressBar_CompatibilityTest, 1, 0, 1, 1);

        groupBox_CompatibilityTestRes = new QGroupBox(tab_CompatibilityTest);
        groupBox_CompatibilityTestRes->setObjectName("groupBox_CompatibilityTestRes");
        groupBox_CompatibilityTestRes->setEnabled(true);
        gridLayout_20 = new QGridLayout(groupBox_CompatibilityTestRes);
        gridLayout_20->setObjectName("gridLayout_20");
        gridLayout_20->setContentsMargins(6, 6, 6, 6);
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD->setObjectName("checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD");
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD->setEnabled(true);
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD->setToolTip(QString::fromUtf8("By @nihui(https://github.com/nihui)\n"
"\n"
"https://github.com/nihui/waifu2x-ncnn-vulkan"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD->setStyleSheet(QString::fromUtf8("QCheckBox:disabled{\n"
"	color: rgb(0, 0, 0);\n"
"}"));

        gridLayout_20->addWidget(checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD, 1, 2, 1, 1);

        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setObjectName("checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW");
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setEnabled(true);
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setToolTip(QString::fromUtf8("By @nihui(https://github.com/nihui)\n"
"\n"
"https://github.com/nihui/waifu2x-ncnn-vulkan"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setStyleSheet(QString::fromUtf8("QCheckBox:disabled{\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setCheckable(true);
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setChecked(false);

        gridLayout_20->addWidget(checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW, 1, 0, 1, 1);

        checkBox_isCompatible_Realsr_NCNN_Vulkan = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Realsr_NCNN_Vulkan->setObjectName("checkBox_isCompatible_Realsr_NCNN_Vulkan");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Realsr_NCNN_Vulkan->setToolTip(QString::fromUtf8("By @nihui(https://github.com/nihui)\n"
"\n"
"https://github.com/nihui/realsr-ncnn-vulkan"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Realsr_NCNN_Vulkan->setText(QString::fromUtf8("Realsr-ncnn-vulkan"));

        gridLayout_20->addWidget(checkBox_isCompatible_Realsr_NCNN_Vulkan, 4, 1, 1, 1);

        checkBox_isCompatible_FFprobe = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_FFprobe->setObjectName("checkBox_isCompatible_FFprobe");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_FFprobe->setToolTip(QString::fromUtf8("https://www.ffmpeg.org/"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_FFprobe->setText(QString::fromUtf8("FFprobe"));

        gridLayout_20->addWidget(checkBox_isCompatible_FFprobe, 8, 0, 1, 1);

        checkBox_isCompatible_Waifu2x_Converter = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Waifu2x_Converter->setObjectName("checkBox_isCompatible_Waifu2x_Converter");
        checkBox_isCompatible_Waifu2x_Converter->setEnabled(true);
        checkBox_isCompatible_Waifu2x_Converter->setMouseTracking(false);
        checkBox_isCompatible_Waifu2x_Converter->setFocusPolicy(Qt::NoFocus);
        checkBox_isCompatible_Waifu2x_Converter->setContextMenuPolicy(Qt::NoContextMenu);
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_Converter->setToolTip(QString::fromUtf8("By @DeadSix27(https://github.com/DeadSix27)\n"
"\n"
"https://github.com/DeadSix27/waifu2x-converter-cpp"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_Converter->setStyleSheet(QString::fromUtf8("QCheckBox:disabled{\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        checkBox_isCompatible_Waifu2x_Converter->setText(QString::fromUtf8("Waifu2x-converter"));
        checkBox_isCompatible_Waifu2x_Converter->setCheckable(true);

        gridLayout_20->addWidget(checkBox_isCompatible_Waifu2x_Converter, 2, 1, 1, 1);

        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P->setObjectName("checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P");
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P->setEnabled(true);
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P->setToolTip(QString::fromUtf8("By @nihui(https://github.com/nihui)\n"
"\n"
"https://github.com/nihui/waifu2x-ncnn-vulkan"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P->setStyleSheet(QString::fromUtf8("QCheckBox:disabled{\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P->setText(QString::fromUtf8("Waifu2x-ncnn-vulkan(20200414(fp16p))"));

        gridLayout_20->addWidget(checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW_FP16P, 1, 1, 1, 1);

        checkBox_isCompatible_Gifsicle = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Gifsicle->setObjectName("checkBox_isCompatible_Gifsicle");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Gifsicle->setToolTip(QString::fromUtf8("https://www.lcdf.org/gifsicle/"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Gifsicle->setText(QString::fromUtf8("Gifsicle"));

        gridLayout_20->addWidget(checkBox_isCompatible_Gifsicle, 7, 2, 1, 1);

        checkBox_isCompatible_SRMD_NCNN_Vulkan = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_SRMD_NCNN_Vulkan->setObjectName("checkBox_isCompatible_SRMD_NCNN_Vulkan");
        checkBox_isCompatible_SRMD_NCNN_Vulkan->setEnabled(true);
        checkBox_isCompatible_SRMD_NCNN_Vulkan->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_SRMD_NCNN_Vulkan->setToolTip(QString::fromUtf8("By @nihui(https://github.com/nihui)\n"
"\n"
"https://github.com/nihui/srmd-ncnn-vulkan"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_SRMD_NCNN_Vulkan->setStyleSheet(QString::fromUtf8("QCheckBox:disabled{\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        checkBox_isCompatible_SRMD_NCNN_Vulkan->setText(QString::fromUtf8("SRMD-ncnn-vulkan"));

        gridLayout_20->addWidget(checkBox_isCompatible_SRMD_NCNN_Vulkan, 2, 0, 1, 1);

        line_16 = new QFrame(groupBox_CompatibilityTestRes);
        line_16->setObjectName("line_16");
        line_16->setFrameShape(QFrame::Shape::HLine);
        line_16->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_20->addWidget(line_16, 5, 0, 1, 4);

        checkBox_isCompatible_ImageMagick = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_ImageMagick->setObjectName("checkBox_isCompatible_ImageMagick");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_ImageMagick->setToolTip(QString::fromUtf8("https://imagemagick.org/"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_ImageMagick->setText(QString::fromUtf8("ImageMagick"));

        gridLayout_20->addWidget(checkBox_isCompatible_ImageMagick, 7, 1, 1, 1);

        checkBox_isCompatible_SoX = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_SoX->setObjectName("checkBox_isCompatible_SoX");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_SoX->setToolTip(QString::fromUtf8("http://sox.sourceforge.net/"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_SoX->setText(QString::fromUtf8("SoX"));

        gridLayout_20->addWidget(checkBox_isCompatible_SoX, 7, 0, 1, 1);

        checkBox_isCompatible_Anime4k_GPU = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Anime4k_GPU->setObjectName("checkBox_isCompatible_Anime4k_GPU");
        checkBox_isCompatible_Anime4k_GPU->setEnabled(true);
        checkBox_isCompatible_Anime4k_GPU->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Anime4k_GPU->setToolTip(QString::fromUtf8("By @TianZerL(https://github.com/TianZerL)\n"
"\n"
"https://github.com/TianZerL/Anime4KCPP"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Anime4k_GPU->setStyleSheet(QString::fromUtf8("QCheckBox:disabled{\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        checkBox_isCompatible_Anime4k_GPU->setText(QString::fromUtf8("Anime4K(GPU)"));

        gridLayout_20->addWidget(checkBox_isCompatible_Anime4k_GPU, 3, 0, 1, 1);

        checkBox_isCompatible_Waifu2x_Caffe_CPU = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Waifu2x_Caffe_CPU->setObjectName("checkBox_isCompatible_Waifu2x_Caffe_CPU");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_Caffe_CPU->setToolTip(QString::fromUtf8("By @lltcggie(https://github.com/lltcggie)\n"
"\n"
"https://github.com/lltcggie/waifu2x-caffe"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_Caffe_CPU->setText(QString::fromUtf8("Waifu2x-caffe(CPU)"));

        gridLayout_20->addWidget(checkBox_isCompatible_Waifu2x_Caffe_CPU, 3, 1, 1, 1);

        label_59 = new QLabel(groupBox_CompatibilityTestRes);
        label_59->setObjectName("label_59");
        sizePolicy2.setHeightForWidth(label_59->sizePolicy().hasHeightForWidth());
        label_59->setSizePolicy(sizePolicy2);
        label_59->setMaximumSize(QSize(16777215, 30));

        gridLayout_20->addWidget(label_59, 6, 0, 1, 1);

        checkBox_isCompatible_Waifu2x_Caffe_GPU = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Waifu2x_Caffe_GPU->setObjectName("checkBox_isCompatible_Waifu2x_Caffe_GPU");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_Caffe_GPU->setToolTip(QString::fromUtf8("By @lltcggie(https://github.com/lltcggie)\n"
"\n"
"https://github.com/lltcggie/waifu2x-caffe"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_Caffe_GPU->setText(QString::fromUtf8("Waifu2x-caffe(GPU)"));

        gridLayout_20->addWidget(checkBox_isCompatible_Waifu2x_Caffe_GPU, 3, 2, 1, 1);

        label_58 = new QLabel(groupBox_CompatibilityTestRes);
        label_58->setObjectName("label_58");
        sizePolicy2.setHeightForWidth(label_58->sizePolicy().hasHeightForWidth());
        label_58->setSizePolicy(sizePolicy2);
        label_58->setMaximumSize(QSize(16777215, 30));

        gridLayout_20->addWidget(label_58, 0, 0, 1, 1);

        checkBox_isCompatible_FFmpeg = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_FFmpeg->setObjectName("checkBox_isCompatible_FFmpeg");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_FFmpeg->setToolTip(QString::fromUtf8("https://www.ffmpeg.org/"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_FFmpeg->setText(QString::fromUtf8("FFmpeg"));

        gridLayout_20->addWidget(checkBox_isCompatible_FFmpeg, 8, 1, 1, 1);

        checkBox_isCompatible_Anime4k_CPU = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Anime4k_CPU->setObjectName("checkBox_isCompatible_Anime4k_CPU");
        checkBox_isCompatible_Anime4k_CPU->setEnabled(true);
        checkBox_isCompatible_Anime4k_CPU->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Anime4k_CPU->setToolTip(QString::fromUtf8("By @TianZerL(https://github.com/TianZerL)\n"
"\n"
"https://github.com/TianZerL/Anime4KCPP"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Anime4k_CPU->setStyleSheet(QString::fromUtf8("QCheckBox:disabled{\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        checkBox_isCompatible_Anime4k_CPU->setText(QString::fromUtf8("Anime4K(CPU)"));

        gridLayout_20->addWidget(checkBox_isCompatible_Anime4k_CPU, 2, 2, 1, 1);

        checkBox_isCompatible_Waifu2x_Caffe_cuDNN = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_Waifu2x_Caffe_cuDNN->setObjectName("checkBox_isCompatible_Waifu2x_Caffe_cuDNN");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_Caffe_cuDNN->setToolTip(QString::fromUtf8("By @lltcggie(https://github.com/lltcggie)\n"
"\n"
"https://github.com/lltcggie/waifu2x-caffe"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_Waifu2x_Caffe_cuDNN->setText(QString::fromUtf8("Waifu2x-caffe(cuDNN)"));

        gridLayout_20->addWidget(checkBox_isCompatible_Waifu2x_Caffe_cuDNN, 4, 0, 1, 1);

        line_19 = new QFrame(groupBox_CompatibilityTestRes);
        line_19->setObjectName("line_19");
        line_19->setFrameShape(QFrame::Shape::HLine);
        line_19->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_20->addWidget(line_19, 9, 0, 1, 4);

        label_36 = new QLabel(groupBox_CompatibilityTestRes);
        label_36->setObjectName("label_36");
        sizePolicy2.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy2);

        gridLayout_20->addWidget(label_36, 10, 0, 1, 1);

        checkBox_isCompatible_RifeNcnnVulkan = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_RifeNcnnVulkan->setObjectName("checkBox_isCompatible_RifeNcnnVulkan");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_RifeNcnnVulkan->setToolTip(QString::fromUtf8("By @nihui(https://github.com/nihui)\n"
"\n"
"https://github.com/nihui/rife-ncnn-vulkan"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_RifeNcnnVulkan->setText(QString::fromUtf8("RIFE-NCNN-Vulkan"));

        gridLayout_20->addWidget(checkBox_isCompatible_RifeNcnnVulkan, 11, 0, 1, 1);

        checkBox_isCompatible_CainNcnnVulkan = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_CainNcnnVulkan->setObjectName("checkBox_isCompatible_CainNcnnVulkan");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_CainNcnnVulkan->setToolTip(QString::fromUtf8("By @nihui(https://github.com/nihui)\n"
"\n"
"https://github.com/nihui/cain-ncnn-vulkan"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_CainNcnnVulkan->setText(QString::fromUtf8("CAIN-NCNN-Vulkan"));

        gridLayout_20->addWidget(checkBox_isCompatible_CainNcnnVulkan, 11, 1, 1, 1);

        checkBox_isCompatible_DainNcnnVulkan = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_DainNcnnVulkan->setObjectName("checkBox_isCompatible_DainNcnnVulkan");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_DainNcnnVulkan->setToolTip(QString::fromUtf8("By @nihui(https://github.com/nihui)\n"
"\n"
"https://github.com/nihui/dain-ncnn-vulkan"));
#endif // QT_CONFIG(tooltip)
        checkBox_isCompatible_DainNcnnVulkan->setText(QString::fromUtf8("DAIN-NCNN-Vulkan"));

        gridLayout_20->addWidget(checkBox_isCompatible_DainNcnnVulkan, 11, 2, 1, 1);

        label_2 = new QLabel(groupBox_CompatibilityTestRes);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(660, 260));
        label_2->setMaximumSize(QSize(16777215, 260));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setWordWrap(true);

        gridLayout_20->addWidget(label_2, 12, 0, 1, 4);

        checkBox_isCompatible_SRMD_CUDA = new QCheckBox(groupBox_CompatibilityTestRes);
        checkBox_isCompatible_SRMD_CUDA->setObjectName("checkBox_isCompatible_SRMD_CUDA");
#if QT_CONFIG(tooltip)
        checkBox_isCompatible_SRMD_CUDA->setToolTip(QString::fromUtf8("By @MrZihan(https://github.com/MrZihan)\n"
"\n"
"https://github.com/MrZihan/Super-resolution-SR-CUDA"));
#endif // QT_CONFIG(tooltip)

        gridLayout_20->addWidget(checkBox_isCompatible_SRMD_CUDA, 4, 2, 1, 1);


        gridLayout_32->addWidget(groupBox_CompatibilityTestRes, 0, 0, 1, 1);

        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/icon/CompatibilityTest.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_CompatibilityTest, icon10, QString());
        splitter_4->addWidget(tabWidget);
        splitter_TextBrowser = new QSplitter(splitter_4);
        splitter_TextBrowser->setObjectName("splitter_TextBrowser");
        sizePolicy1.setHeightForWidth(splitter_TextBrowser->sizePolicy().hasHeightForWidth());
        splitter_TextBrowser->setSizePolicy(sizePolicy1);
        splitter_TextBrowser->setMinimumSize(QSize(0, 95));
        splitter_TextBrowser->setMaximumSize(QSize(16777215, 16777215));
        splitter_TextBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        splitter_TextBrowser->setLineWidth(0);
        splitter_TextBrowser->setOrientation(Qt::Horizontal);
        splitter_TextBrowser->setHandleWidth(5);
        textBrowser = new QTextBrowser(splitter_TextBrowser);
        textBrowser->setObjectName("textBrowser");
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(0, 0));
        textBrowser->setMaximumSize(QSize(16777215, 16777215));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Arial")});
        textBrowser->setFont(font10);
        textBrowser->setAcceptDrops(false);
        splitter_TextBrowser->addWidget(textBrowser);
        groupBox_textBrowserSettings = new QGroupBox(splitter_TextBrowser);
        groupBox_textBrowserSettings->setObjectName("groupBox_textBrowserSettings");
        sizePolicy4.setHeightForWidth(groupBox_textBrowserSettings->sizePolicy().hasHeightForWidth());
        groupBox_textBrowserSettings->setSizePolicy(sizePolicy4);
        groupBox_textBrowserSettings->setMinimumSize(QSize(0, 0));
        groupBox_textBrowserSettings->setMaximumSize(QSize(16777215, 16777215));
        groupBox_textBrowserSettings->setStyleSheet(QString::fromUtf8(""));
        groupBox_textBrowserSettings->setTitle(QString::fromUtf8(""));
        groupBox_textBrowserSettings->setFlat(false);
        gridLayout_9 = new QGridLayout(groupBox_textBrowserSettings);
        gridLayout_9->setSpacing(5);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_9->setContentsMargins(6, 6, 6, 6);
        pushButton_clear_textbrowser = new QPushButton(groupBox_textBrowserSettings);
        pushButton_clear_textbrowser->setObjectName("pushButton_clear_textbrowser");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButton_clear_textbrowser->sizePolicy().hasHeightForWidth());
        pushButton_clear_textbrowser->setSizePolicy(sizePolicy7);
        pushButton_clear_textbrowser->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 140, 158);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(0, 190, 211);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 108, 120);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: rgb(166, 166, 166);\n"
"color: rgb(255, 255, 255);\n"
"border-style:outset;\n"
"border-radius:8px;\n"
"padding:10px;\n"
"}"));
        pushButton_clear_textbrowser->setIconSize(QSize(25, 25));

        gridLayout_9->addWidget(pushButton_clear_textbrowser, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setSizeConstraint(QLayout::SetFixedSize);
        label_TextBroFontSize = new QLabel(groupBox_textBrowserSettings);
        label_TextBroFontSize->setObjectName("label_TextBroFontSize");
        sizePolicy3.setHeightForWidth(label_TextBroFontSize->sizePolicy().hasHeightForWidth());
        label_TextBroFontSize->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(label_TextBroFontSize);

        spinBox_textbrowser_fontsize = new QSpinBox(groupBox_textBrowserSettings);
        spinBox_textbrowser_fontsize->setObjectName("spinBox_textbrowser_fontsize");
        sizePolicy2.setHeightForWidth(spinBox_textbrowser_fontsize->sizePolicy().hasHeightForWidth());
        spinBox_textbrowser_fontsize->setSizePolicy(sizePolicy2);
        spinBox_textbrowser_fontsize->setMinimum(1);
        spinBox_textbrowser_fontsize->setValue(9);

        horizontalLayout_7->addWidget(spinBox_textbrowser_fontsize);


        gridLayout_9->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        splitter_TextBrowser->addWidget(groupBox_textBrowserSettings);
        splitter_4->addWidget(splitter_TextBrowser);

        gridLayout_40->addWidget(splitter_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        comboBox_AspectRatio_custRes->setCurrentIndex(1);
        comboBox_ImageSaveFormat->setCurrentIndex(0);
        tabWidget_Engines->setCurrentIndex(0);
        comboBox_version_Waifu2xNCNNVulkan->setCurrentIndex(0);
        comboBox_ProcessMode_Waifu2xCaffe->setCurrentIndex(0);
        comboBox_Model_2D_Waifu2xCaffe->setCurrentIndex(1);
        comboBox_Model_VFI->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        label_DonateText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Please donate to support the developers, so we can bring further updates for this software, thank you! (\357\275\241\357\275\245\342\210\200\357\275\245)\357\276\211\357\276\236 </p><p align=\"center\">If you don't wanna see the Donate page anymore, you can <span style=\" color:#ff0004;\">get the </span><span style=\" font-weight:600; color:#ff0004;\">Premium</span><span style=\" color:#ff0004;\"> version by support me on Patreon.</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_PayPal->setToolTip(QCoreApplication::translate("MainWindow", "Donate to the developer through PayPal.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton_Patreon->setToolTip(QCoreApplication::translate("MainWindow", "Support this project on Patreon and get Premium version.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Patreon->setText(QCoreApplication::translate("MainWindow", " Get Premium version on Patreon", nullptr));
        label_DonateQRCode->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Donate), QCoreApplication::translate("MainWindow", "Donate", nullptr));
        groupBox_Progress->setTitle(QString());
#if QT_CONFIG(tooltip)
        pushButton_Start->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_ETA->setText(QCoreApplication::translate("MainWindow", "ETA:NULL", nullptr));
#if QT_CONFIG(tooltip)
        label_progressBar_filenum->setToolTip(QCoreApplication::translate("MainWindow", "Finished/Total", nullptr));
#endif // QT_CONFIG(tooltip)
        label_TimeCost->setText(QCoreApplication::translate("MainWindow", "Time taken:NULL", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ForceRetry->setToolTip(QCoreApplication::translate("MainWindow", "In some cases, the Engine process can get stuck.\n"
"\n"
"When you find that the [Scale and denoise] progress has \n"
"not changed for a long time, it is recommended that you \n"
"perform a forced retry to remove the stuck.\n"
"\n"
"You can try using [Force Retry] to end the Engine process \n"
"and restart it, and the entire [Scale and denoise] process \n"
"will not be interrupted and will continue.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ForceRetry->setText(QCoreApplication::translate("MainWindow", "Force retry", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        label_TimeRemain->setText(QCoreApplication::translate("MainWindow", "Time remaining:NULL", nullptr));
        groupBox_CurrentFile->setTitle(QCoreApplication::translate("MainWindow", "Current File:", nullptr));
#if QT_CONFIG(tooltip)
        label_FrameProgress_CurrentFile->setToolTip(QCoreApplication::translate("MainWindow", "Finished/Total", nullptr));
#endif // QT_CONFIG(tooltip)
        label_ETA_CurrentFile->setText(QCoreApplication::translate("MainWindow", "ETA:NULL", nullptr));
        label_TimeRemain_CurrentFile->setText(QCoreApplication::translate("MainWindow", "Time remaining:NULL", nullptr));
        label_TimeCost_CurrentFile->setText(QCoreApplication::translate("MainWindow", "Time taken:NULL", nullptr));
        groupBox_FileList->setTitle(QCoreApplication::translate("MainWindow", "Files List", nullptr));
#if QT_CONFIG(tooltip)
        tableView_image->setToolTip(QCoreApplication::translate("MainWindow", "Press [Delete] key to remove file from the list.\n"
"Press [Ctrl + A] key to apply custom resolution.\n"
"Press [Ctrl + C] key to cancel custom resolution.\n"
"\n"
"Right click to show more options.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tableView_gif->setToolTip(QCoreApplication::translate("MainWindow", "Press [Delete] key to remove file from the list.\n"
"Press [Ctrl + A] key to apply custom resolution.\n"
"Press [Ctrl + C] key to cancel custom resolution.\n"
"\n"
"Right click to show more options.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tableView_video->setToolTip(QCoreApplication::translate("MainWindow", "Press [Delete] key to remove file from the list.\n"
"Press [Ctrl + A] key to apply custom resolution.\n"
"Press [Ctrl + C] key to cancel custom resolution.\n"
"\n"
"Right click to show more options.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_DropFile->setToolTip(QCoreApplication::translate("MainWindow", "When the software is running with administrator rights, \n"
"you will not be able to drag and drop files into the window.\n"
"\n"
"If this happens, please unauthorize the software or reinstall the\n"
"software into a directory that can run normally without administrator rights.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_DropFile->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Drag and drop files or folders here</p><p>(Image, Animated Image<span style=\" vertical-align:super;\">GIF, APNG</span> and Video)</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        label_FileCount->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton_ReadFileList->setToolTip(QCoreApplication::translate("MainWindow", "Read Files List", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ReadFileList->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_ResizeFilesListSplitter->setToolTip(QCoreApplication::translate("MainWindow", "Reset Files List scale.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ResizeFilesListSplitter->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_RemoveItem->setToolTip(QCoreApplication::translate("MainWindow", "Remove the selected file from File List.\n"
"\n"
"[Right click here to show more options]", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_RemoveItem->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_BrowserFile->setToolTip(QCoreApplication::translate("MainWindow", "Browse and add files.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_BrowserFile->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_ClearList->setToolTip(QCoreApplication::translate("MainWindow", "Remove all the files in the File list.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ClearList->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_SaveFileList->setToolTip(QCoreApplication::translate("MainWindow", "Save Files List", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_SaveFileList->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_TurnOffScreen->setToolTip(QCoreApplication::translate("MainWindow", "Turn off screen.\n"
"\n"
"We recommand you to use this button to turn off screen\n"
"while program is running. Using other methods to turn off\n"
"the screen may cause the software to freeze during the screen\n"
"shutdown. And we recommend that you turn off the automatic\n"
"shutdown screen and automatic sleep of the Windows system while\n"
"the software is running.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton_HideSettings->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_HideSettings->setText(QCoreApplication::translate("MainWindow", "Hide settings", nullptr));
        pushButton_HideTextBro->setText(QCoreApplication::translate("MainWindow", "Hide Text Browser", nullptr));
        groupBox_Setting->setTitle(QString());
#if QT_CONFIG(tooltip)
        groupBox_CustRes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_CustRes->setTitle(QCoreApplication::translate("MainWindow", "Custom resolution", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "Aspect Ratio:", nullptr));
        comboBox_AspectRatio_custRes->setItemText(0, QCoreApplication::translate("MainWindow", "Ignore Aspect Ratio", nullptr));
        comboBox_AspectRatio_custRes->setItemText(1, QCoreApplication::translate("MainWindow", "Keep Aspect Ratio", nullptr));
        comboBox_AspectRatio_custRes->setItemText(2, QCoreApplication::translate("MainWindow", "Keep Aspect Ratio By Expanding", nullptr));

        label_15->setText(QCoreApplication::translate("MainWindow", "Height:", nullptr));
        spinBox_CustRes_height->setSuffix(QCoreApplication::translate("MainWindow", " pixels", nullptr));
        spinBox_CustRes_width->setSuffix(QCoreApplication::translate("MainWindow", " pixels", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_CustRes_apply->setToolTip(QCoreApplication::translate("MainWindow", "1.Set the height and width of the resolution.\n"
"2.Select a file in the file list.\n"
"3.Click the Apply button to set the resolution.\n"
"\n"
"\342\230\205Scale ratio will not be applied to files which\n"
"already have custom resolution applied.\342\230\205", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_CustRes_apply->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_CustRes_cancel->setToolTip(QCoreApplication::translate("MainWindow", "1.Select a file in the file list.\n"
"2.Click the Cancel button to cancel the custom resolution.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_CustRes_cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_AutoSkip_CustomRes->setToolTip(QCoreApplication::translate("MainWindow", "Automatically skip file when its resolution\n"
"is larger than the specified resolution.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AutoSkip_CustomRes->setText(QCoreApplication::translate("MainWindow", "Auto Skip", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_custres_isAll->setToolTip(QCoreApplication::translate("MainWindow", "Valid for all files.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_custres_isAll->setText(QCoreApplication::translate("MainWindow", "Apply to all", nullptr));
        groupBox_2->setTitle(QString());
        label_63->setText(QCoreApplication::translate("MainWindow", "Image quality:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_ImageQualityLevel->setToolTip(QCoreApplication::translate("MainWindow", "Only takes effect when processing Static Image.\n"
"\n"
"Will NOT take effect when processing Video and GIF.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_ImageStyle_W2xNCNNVulkan->setToolTip(QCoreApplication::translate("MainWindow", "Select the image style of the source files.\n"
"So the engine can load the correct model when processing files.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_ImageStyle_W2xNCNNVulkan->setText(QCoreApplication::translate("MainWindow", "Image Style(waifu2x-ncnn-vulkan):", nullptr));
#if QT_CONFIG(tooltip)
        label_ImageStyle_W2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Select the image style of the source files.\n"
"So the engine can load the correct model when processing files.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_ImageStyle_W2xCaffe->setText(QCoreApplication::translate("MainWindow", "Image Style(waifu2x-caffe):", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_ImageSaveFormat->setToolTip(QCoreApplication::translate("MainWindow", "Only takes effect when processing Static Image.\n"
"\n"
"Will NOT take effect when processing Video and GIF.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("MainWindow", "Save image as:", nullptr));
        comboBox_ImageStyle->setItemText(0, QCoreApplication::translate("MainWindow", "2D Anime", nullptr));
        comboBox_ImageStyle->setItemText(1, QCoreApplication::translate("MainWindow", "3D Real-life", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_ImageStyle->setToolTip(QCoreApplication::translate("MainWindow", "Select the image style of the source files.\n"
"So the engine can load the correct model when processing files.", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBox_ImageStyle_Waifu2xCaffe->setItemText(0, QCoreApplication::translate("MainWindow", "2D Anime", nullptr));
        comboBox_ImageStyle_Waifu2xCaffe->setItemText(1, QCoreApplication::translate("MainWindow", "3D Real-life", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_ImageStyle_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Select the image style of the source files.\n"
"So the engine can load the correct model when processing files.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_DelOriginal->setToolTip(QCoreApplication::translate("MainWindow", "Delete the original file after processing is complete.\n"
"\n"
"*This option will be deactivated when [Replace original\n"
"file] is enabled*\n"
"\n"
"[Right click here to show more options]", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_DelOriginal->setText(QCoreApplication::translate("MainWindow", "Delete original files", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_ReplaceOriginalFile->setToolTip(QCoreApplication::translate("MainWindow", "After processing the file, directly replace\n"
"the original file with the result file.\n"
"(And keep the original file name.)\n"
"\n"
"WARNING: The original file will be DELETED.\n"
"\n"
"*This option will be deactivated when [Output\n"
"path] or [Delete original files] is enabled*\n"
"\n"
"[Right click here to show more options]", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_ReplaceOriginalFile->setText(QCoreApplication::translate("MainWindow", "Replace original file", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_OptGIF->setToolTip(QCoreApplication::translate("MainWindow", "Optimizing the scaled gif will slightly reduce the\n"
"image quality, but it can reduce the GIF file size.\n"
"\n"
"It is recommended to enable this option.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_OptGIF->setText(QCoreApplication::translate("MainWindow", "Optimize GIF", nullptr));
        comboBox_FinishAction->setItemText(0, QCoreApplication::translate("MainWindow", "Do nothing(when finished)", nullptr));
        comboBox_FinishAction->setItemText(1, QCoreApplication::translate("MainWindow", "Shut down", nullptr));
        comboBox_FinishAction->setItemText(2, QCoreApplication::translate("MainWindow", "Sleep", nullptr));
        comboBox_FinishAction->setItemText(3, QCoreApplication::translate("MainWindow", "Hibernate", nullptr));
        comboBox_FinishAction->setItemText(4, QCoreApplication::translate("MainWindow", "Restart", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_FinishAction->setToolTip(QCoreApplication::translate("MainWindow", "Select the action to be executed automatically\n"
"after processing all files in the file list.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_ReProcFinFiles->setToolTip(QCoreApplication::translate("MainWindow", "When there are finished files in the list, the finished files will\n"
"be processed again when the processing process is started again.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_ReProcFinFiles->setText(QCoreApplication::translate("MainWindow", "Re-process finished files", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_FrameInterpolationOnly_Video->setToolTip(QCoreApplication::translate("MainWindow", "Skip the super-resolution, only interpolate video frames.\n"
"\n"
"You can modify the settings of Frame Interpolation in the\n"
"[Video settings] tab.\n"
"\n"
"*Only taken effect when processing video*", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_FrameInterpolationOnly_Video->setText(QCoreApplication::translate("MainWindow", "Frame Interpolation only(Video)", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_EnableVFI_Home->setToolTip(QCoreApplication::translate("MainWindow", "Interpolate frames after super-resolution of the video.\n"
"(Increase the frame rate to the result video.)\n"
"\n"
"You can modify the settings of Frame Interpolation\n"
"in the [Video settings] tab.\n"
"\n"
"You can enable [Frame Interpolation only(Video)] to skip\n"
"the super-resolution, only interpolate video frames.\n"
"\n"
"*Only taken effect when processing video*", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_EnableVFI_Home->setText(QCoreApplication::translate("MainWindow", "Video Frame Interpolation", nullptr));
        groupBox_OutPut->setTitle(QCoreApplication::translate("MainWindow", "Output path(Folder):", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_outputPath->setToolTip(QCoreApplication::translate("MainWindow", "Output path must be a Folder.\n"
"\n"
"[Right click here to show more options]", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_OutPath_KeepOriginalFileName->setText(QCoreApplication::translate("MainWindow", "Keep original file name", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_OutPath_isEnabled->setToolTip(QCoreApplication::translate("MainWindow", "When this option is enabled, the output file \n"
"will be moved to the path you specified. \n"
"Otherwise, it will be saved in the same \n"
"folder as the source file.\n"
"\n"
"*This option will be deactivated when [Replace\n"
"original file] is enabled*", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_OutPath_isEnabled->setText(QCoreApplication::translate("MainWindow", "Enabled", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_OutPath_Overwrite->setToolTip(QCoreApplication::translate("MainWindow", "When this option is enabled, the output file will\n"
"replace the file with the same name as the output\n"
"file that exists in the output path.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_OutPath_Overwrite->setText(QCoreApplication::translate("MainWindow", "Overwrite", nullptr));
        checkBox_KeepParentFolder->setText(QCoreApplication::translate("MainWindow", "Keep parent folder", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_AutoOpenOutputPath->setToolTip(QCoreApplication::translate("MainWindow", "Automatically open the output folder\n"
"after processing all files.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AutoOpenOutputPath->setText(QCoreApplication::translate("MainWindow", "Auto-open after finished", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "Scale ratio:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("MainWindow", "Range: 1 ~ 999999999", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Image", nullptr));
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QCoreApplication::translate("MainWindow", "Range: 1 ~ 999999999", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QCoreApplication::translate("MainWindow", "Animated Image", nullptr));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("MainWindow", "Range: 1 ~ 999999999", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("MainWindow", "Video", nullptr));
        label_66->setText(QCoreApplication::translate("MainWindow", "Deoise level:", nullptr));
        label_ImageDenoiseLevel->setText(QCoreApplication::translate("MainWindow", "Image", nullptr));
        label_GIFDenoiseLevel->setText(QCoreApplication::translate("MainWindow", "Animated Image", nullptr));
        label_VideoDenoiseLevel->setText(QCoreApplication::translate("MainWindow", "Video", nullptr));
#if QT_CONFIG(tooltip)
        label_28->setToolTip(QCoreApplication::translate("MainWindow", "You need to enable [Video Frame Interpolation] to use this option.\n"
"\n"
"If the fps of orignal video is 30 fps, multiple of fps is \"4\",\n"
"then the result video will be 120 fps.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_28->setText(QCoreApplication::translate("MainWindow", "Multiple of FPS:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_MultipleOfFPS_VFI->setToolTip(QCoreApplication::translate("MainWindow", "You need to enable [Video Frame Interpolation] to use this option.\n"
"\n"
"If the fps of orignal video is 30 fps, multiple of fps is \"4\",\n"
"then the result video will be 120 fps.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab_Home), QCoreApplication::translate("MainWindow", "Home", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_NumOfThreads->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_NumOfThreads->setTitle(QCoreApplication::translate("MainWindow", "Number of threads", nullptr));
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_11->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_11->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("MainWindow", "Image:", nullptr));
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("MainWindow", "Video:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_ThreadNum_gif_internal->setToolTip(QCoreApplication::translate("MainWindow", "The number of threads that the software processes GIF,\n"
"which will determine how many frames the software will\n"
"process at the same time.\n"
"\n"
"The actual maximum number of threads is limited by the \n"
"number of enabled GPUs when using Anime4k, Waifu2x-Caffe\n"
"and Waifu2x-converter.(Only when processing GIF and Video)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spinBox_ThreadNum_video_internal->setToolTip(QCoreApplication::translate("MainWindow", "The number of threads that the software processes Video,\n"
"which will determine how many frames the software will\n"
"process at the same time.\n"
"\n"
"The actual maximum number of threads is limited by the \n"
"number of enabled GPUs when using Anime4k, Waifu2x-Caffe\n"
"and Waifu2x-converter.(Only when processing GIF and Video)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("MainWindow", "Animated Image:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_ThreadNum_image->setToolTip(QCoreApplication::translate("MainWindow", "The number of threads that the software processes Image,\n"
"which will determine how many images the software will\n"
"process at the same time.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_Engine->setTitle(QCoreApplication::translate("MainWindow", "Engine", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Animated Image:", nullptr));
        comboBox_Engine_GIF->setItemText(6, QCoreApplication::translate("MainWindow", "[BETA] srmd-cuda", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_Engine_GIF->setToolTip(QCoreApplication::translate("MainWindow", "Waifu2x-NCNN-Vulkan [Speed:\342\230\205\342\230\205   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"Waifu2x-Converter   [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\206] [2D Anime]\n"
"Anime4K             [Speed:\342\230\205\342\230\205\342\230\205 Image quality:\342\230\205\342\230\206  ] [2D Anime]\n"
"SRMD-NCNN-Vulkan    [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"Waifu2x-Caffe       [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"RealSR-NCNN-Vulkan  [Speed:\342\230\206     Image quality:\342\230\205\342\230\205\342\230\205] [3D Real-life]\n"
"SRMD-CUDA           [Speed:\342\230\205\342\230\205\342\230\206 Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("MainWindow", "Image:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Video:", nullptr));
        comboBox_Engine_Video->setItemText(6, QCoreApplication::translate("MainWindow", "[BETA] srmd-cuda", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_Engine_Video->setToolTip(QCoreApplication::translate("MainWindow", "Waifu2x-NCNN-Vulkan [Speed:\342\230\205\342\230\205   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"Waifu2x-Converter   [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\206] [2D Anime]\n"
"Anime4K             [Speed:\342\230\205\342\230\205\342\230\205 Image quality:\342\230\205\342\230\206  ] [2D Anime]\n"
"SRMD-NCNN-Vulkan    [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"Waifu2x-Caffe       [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"RealSR-NCNN-Vulkan  [Speed:\342\230\206     Image quality:\342\230\205\342\230\205\342\230\205] [3D Real-life]\n"
"SRMD-CUDA           [Speed:\342\230\205\342\230\205\342\230\206 Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBox_Engine_Image->setItemText(6, QCoreApplication::translate("MainWindow", "[BETA] srmd-cuda", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_Engine_Image->setToolTip(QCoreApplication::translate("MainWindow", "Waifu2x-NCNN-Vulkan [Speed:\342\230\205\342\230\205   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"Waifu2x-Converter   [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\206] [2D Anime]\n"
"Anime4K             [Speed:\342\230\205\342\230\205\342\230\205 Image quality:\342\230\205\342\230\206  ] [2D Anime]\n"
"SRMD-NCNN-Vulkan    [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"Waifu2x-Caffe       [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"RealSR-NCNN-Vulkan  [Speed:\342\230\206     Image quality:\342\230\205\342\230\205\342\230\205] [3D Real-life]\n"
"SRMD-CUDA           [Speed:\342\230\205\342\230\205\342\230\206 Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tabWidget_Engines->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("MainWindow", "Select the GPU to use when enabling the \"waifu2x-ncnn-vulkan\" engine.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("MainWindow", "GPU ID:", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_GPUID->setToolTip(QCoreApplication::translate("MainWindow", "Select the GPU to use when enabling the \"waifu2x-ncnn-vulkan\" engine.\n"
"\342\230\205 \"-1\" is CPU,others are GPUs \342\230\205", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_DetectGPU->setText(QCoreApplication::translate("MainWindow", "Detect available GPU ID", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_MultiGPU_Waifu2xNCNNVulkan->setToolTip(QCoreApplication::translate("MainWindow", "1.You need at least 2 available GPUs.\n"
"\n"
"2.If you wanna get all GPUs running together,\n"
"the number of threads must >= the number of GPUs.\n"
"\n"
"3.You need to [Detect available GPU ID] first.\n"
"\n"
"*Only latest version fully supports Multi-GPU*", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_MultiGPU_Waifu2xNCNNVulkan->setText(QCoreApplication::translate("MainWindow", "Enable Multi-GPU", nullptr));
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("MainWindow", "Tile size: This value will affects GPU memory usage.\n"
"Larger tile size means waifu2x will use more GPU memory and run faster.\n"
"Smaller tile size means waifu2x will use less GPU memory and run slower.\n"
"(Only works when using \"waifu2x-ncnn-vulkan\" engine.)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("MainWindow", "Tile size:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_TileSize->setToolTip(QCoreApplication::translate("MainWindow", "Tile size: This value will affects GPU memory usage.\n"
"Larger Tile size means waifu2x will use more GPU memory and run faster.\n"
"Smaller Tile size means waifu2x will use less GPU memory and run slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_GPUSettings_MultiGPU_Waifu2xNCNNVulkan->setTitle(QCoreApplication::translate("MainWindow", "GPU Settings(Multi-GPU)", nullptr));
        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xNCNNVulkan->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ShowMultiGPUSettings_Waifu2xNCNNVulkan->setToolTip(QCoreApplication::translate("MainWindow", "Show current Multi-GPU settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ShowMultiGPUSettings_Waifu2xNCNNVulkan->setText(QCoreApplication::translate("MainWindow", "Show GPUs Settings", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "Tile size:", nullptr));
        label_65->setText(QCoreApplication::translate("MainWindow", "GPU ID:", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "Version:", nullptr));
        comboBox_version_Waifu2xNCNNVulkan->setItemText(0, QCoreApplication::translate("MainWindow", "Latest(Alpha channel,TTA,Multi-GPU)", nullptr));
        comboBox_version_Waifu2xNCNNVulkan->setItemText(1, QCoreApplication::translate("MainWindow", "20200414-fp16p(TTA,Multi-GPU(Image only))", nullptr));
        comboBox_version_Waifu2xNCNNVulkan->setItemText(2, QCoreApplication::translate("MainWindow", "Old(Multi-GPU(Image only))", nullptr));

        label_26->setText(QCoreApplication::translate("MainWindow", "Model:", nullptr));
        comboBox_model_vulkan->setItemText(1, QCoreApplication::translate("MainWindow", "cunet(Only support 2D Anime)", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_model_vulkan->setToolTip(QCoreApplication::translate("MainWindow", "We recommend you use the default \"upconv_7\" model.\n"
"Only \"upconv_7\" model supports image style switching.\n"
"\"cunet\" model only supports 2D anime image style, \n"
"and it's much more slower than \"upconv_7\" model.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_TTA_vulkan->setToolTip(QCoreApplication::translate("MainWindow", "TTA(Test-Time Augmentation):\n"
"The processing time is eight times longer than when unchecked, \n"
"and the peak signal-to-noise ratio (PSNR) is increased by 0.15, \n"
"but the effect may not be obvious. It is not recommended to enable it.\n"
"[TTA] is not available for [OLD Version] of waifu2x-ncnn-vulkan.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tabWidget_Engines->setTabToolTip(tabWidget_Engines->indexOf(tab_W2xNcnnVulkan), QCoreApplication::translate("MainWindow", "Waifu2x-NCNN-Vulkan:\n"
"\n"
"- Supports [2D Anime] and [3D Real-life] image style. But not at the\n"
"same time, you need to change [Image style] settings at [Home] tab.\n"
"\n"
"- More suitable for processing [2D Anime] image.\n"
"\n"
"- [ Speed:\342\230\205\342\230\205  Image Quality:\342\230\205\342\230\205\342\230\205 ]", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_ForceOpenCL_converter->setToolTip(QCoreApplication::translate("MainWindow", "Force to use OpenCL on Intel Platform.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_ForceOpenCL_converter->setText(QCoreApplication::translate("MainWindow", "Force OpenCL", nullptr));
        checkBox_DisableGPU_converter->setText(QCoreApplication::translate("MainWindow", "Disable GPU", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_TTA_converter->setToolTip(QCoreApplication::translate("MainWindow", "TTA(Test-Time Augmentation):\n"
"The processing time is eight times longer than when unchecked, \n"
"and the peak signal-to-noise ratio (PSNR) is increased by 0.15, \n"
"but the effect may not be obvious. It is not recommended to enable it.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_53->setText(QCoreApplication::translate("MainWindow", "Target processor:", nullptr));

        pushButton_DumpProcessorList_converter->setText(QCoreApplication::translate("MainWindow", "Dump processor list", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_MultiGPU_Waifu2xConverter->setToolTip(QCoreApplication::translate("MainWindow", "1.You need at least 2 available processors.\n"
"\n"
"2.If you wanna get all processors running together,\n"
"the number of threads must >= the number of processors.\n"
"\n"
"3.You need to [Dump processor list] first.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_MultiGPU_Waifu2xConverter->setText(QCoreApplication::translate("MainWindow", "Enable Multi-Processor", nullptr));
#if QT_CONFIG(tooltip)
        label_54->setToolTip(QCoreApplication::translate("MainWindow", "Block size: This value will affects GPU memory usage.\n"
"Larger Block size means waifu2x will use more GPU memory and run faster.\n"
"Smaller Block size means waifu2x will use less GPU memory and run slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_54->setText(QCoreApplication::translate("MainWindow", "Block size:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_BlockSize_converter->setToolTip(QCoreApplication::translate("MainWindow", "Block size: This value will affects GPU memory usage.\n"
"Larger Block size means waifu2x will use more GPU memory and run faster.\n"
"Smaller Block size means waifu2x will use less GPU memory and run slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_GPUSettings_MultiGPU_Waifu2xConverter->setTitle(QCoreApplication::translate("MainWindow", "Processor Settings(Multi-Processor)", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ShowMultiGPUSettings_Waifu2xConverter->setToolTip(QCoreApplication::translate("MainWindow", "Show current Multi-Processor settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ShowMultiGPUSettings_Waifu2xConverter->setText(QCoreApplication::translate("MainWindow", "Show Processor Settings", nullptr));
        label_75->setText(QCoreApplication::translate("MainWindow", "Processor ID:", nullptr));
        label_74->setText(QCoreApplication::translate("MainWindow", "Block size:", nullptr));
        checkBox_isEnable_CurrentGPU_MultiGPU_Waifu2xConverter->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget_Engines->setTabToolTip(tabWidget_Engines->indexOf(tab_W2xConverter), QCoreApplication::translate("MainWindow", "Waifu2x-Converter:\n"
"\n"
"- Only supports [2D Anime] image style.\n"
"\n"
"- [ Speed:\342\230\205\342\230\206  Image Quality:\342\230\205\342\230\205\342\230\206 ]", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_OpenCLParallelIO_A4k->setToolTip(QCoreApplication::translate("MainWindow", "OpenCL parallel IO command queue\n"
"*Enable this might cause compatibility problem*", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_OpenCLParallelIO_A4k->setText(QCoreApplication::translate("MainWindow", "OpenCL parallel IO", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_ACNet_Anime4K->setToolTip(QCoreApplication::translate("MainWindow", "Enable ACNet.\n"
"Will improve image quality.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_HDNMode_Anime4k->setToolTip(QCoreApplication::translate("MainWindow", "Enable HDN mode for ACNet.\n"
"Will improve image quality.\n"
"\n"
"*This option will be deactivated\n"
"when [ACNet] is disabled*", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_HDNMode_Anime4k->setText(QCoreApplication::translate("MainWindow", "HDN mode", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_FastMode_Anime4K->setToolTip(QCoreApplication::translate("MainWindow", "Faster but maybe low quality.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_FastMode_Anime4K->setText(QCoreApplication::translate("MainWindow", "Fast mode", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "OpenCL command queues:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_OpenCLCommandQueues_A4k->setToolTip(QCoreApplication::translate("MainWindow", "Number of OpenCL command queues", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_GPUs_Anime4k->setToolTip(QCoreApplication::translate("MainWindow", "Format: Platform ID,Device ID:\n"
"\n"
"Example: 0,0:0,1:1,0:\n"
"\n"
"You must follow the format,otherwise the software may crash.\n"
"\n"
"If you wanna get all GPUs running together,\n"
"the number of threads must >= the number of GPUs.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ListGPUs_Anime4k->setText(QCoreApplication::translate("MainWindow", "List GPUs", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_GPGPUModel_A4k->setToolTip(QCoreApplication::translate("MainWindow", "GPGPU model.\n"
"\n"
"Only NVIDIA products support CUDA.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_GPUMode_Anime4K->setToolTip(QCoreApplication::translate("MainWindow", "Enable GPU acceleration.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_GPUMode_Anime4K->setText(QCoreApplication::translate("MainWindow", "GPU Mode", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_VerifyGPUsConfig_Anime4k->setToolTip(QCoreApplication::translate("MainWindow", "Verify your GPUs configuration.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VerifyGPUsConfig_Anime4k->setText(QCoreApplication::translate("MainWindow", "Verify", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_SpecifyGPU_Anime4k->setToolTip(QCoreApplication::translate("MainWindow", "You can specify multiple GPUs to fully \n"
"utilize the capabilities of your PC.\n"
"(If there are multiple GPUs available.)", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_SpecifyGPU_Anime4k->setText(QCoreApplication::translate("MainWindow", "Specify GPUs:", nullptr));
#if QT_CONFIG(tooltip)
        label_50->setToolTip(QCoreApplication::translate("MainWindow", "Strength for pushing color,range 0 to 1,higher for thinner.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_50->setText(QCoreApplication::translate("MainWindow", "Push color strength:", nullptr));
#if QT_CONFIG(tooltip)
        label_48->setToolTip(QCoreApplication::translate("MainWindow", "Passes for processing.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_48->setText(QCoreApplication::translate("MainWindow", "Passes:", nullptr));
#if QT_CONFIG(tooltip)
        label_51->setToolTip(QCoreApplication::translate("MainWindow", "Strength for pushing gradient,range 0 to 1,higher for sharper.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_51->setText(QCoreApplication::translate("MainWindow", "Push gradient strength:", nullptr));
#if QT_CONFIG(tooltip)
        label_49->setToolTip(QCoreApplication::translate("MainWindow", "Limit the number of color pushes.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_49->setText(QCoreApplication::translate("MainWindow", "Push color count:", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_PreProcessing_Anime4k->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_PreProcessing_Anime4k->setTitle(QCoreApplication::translate("MainWindow", "Pre-processing", nullptr));
        checkBox_MeanBlur_Pre_Anime4k->setText(QCoreApplication::translate("MainWindow", "Mean blur", nullptr));
        checkBox_MedianBlur_Pre_Anime4k->setText(QCoreApplication::translate("MainWindow", "Median blur", nullptr));
        checkBox_GaussianBlurWeak_Pre_Anime4k->setText(QCoreApplication::translate("MainWindow", "Gaussian blur weak", nullptr));
        checkBox_CASSharping_Pre_Anime4k->setText(QCoreApplication::translate("MainWindow", "CAS Sharpening", nullptr));
        checkBox_GaussianBlur_Pre_Anime4k->setText(QCoreApplication::translate("MainWindow", "Gaussian blur", nullptr));
        checkBox_BilateralFilter_Pre_Anime4k->setText(QCoreApplication::translate("MainWindow", "Bilateral filter", nullptr));
        checkBox_BilateralFilterFaster_Pre_Anime4k->setText(QCoreApplication::translate("MainWindow", "Bilateral filter faster", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_EnablePreProcessing_Anime4k->setToolTip(QCoreApplication::translate("MainWindow", "Apply filters to image before process it.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_EnablePreProcessing_Anime4k->setText(QCoreApplication::translate("MainWindow", "Enable Pre-processing", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_PostProcessing_Anime4k->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_PostProcessing_Anime4k->setTitle(QCoreApplication::translate("MainWindow", "Post-processing", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_EnablePostProcessing_Anime4k->setToolTip(QCoreApplication::translate("MainWindow", "Add filters to the image after processing it.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_EnablePostProcessing_Anime4k->setText(QCoreApplication::translate("MainWindow", "Enable Post-processing", nullptr));
        checkBox_MedianBlur_Post_Anime4k->setText(QCoreApplication::translate("MainWindow", "Median blur", nullptr));
        checkBox_MeanBlur_Post_Anime4k->setText(QCoreApplication::translate("MainWindow", "Mean blur", nullptr));
        checkBox_CASSharping_Post_Anime4k->setText(QCoreApplication::translate("MainWindow", "CAS Sharpening", nullptr));
        checkBox_GaussianBlur_Post_Anime4k->setText(QCoreApplication::translate("MainWindow", "Gaussian blur", nullptr));
        checkBox_BilateralFilter_Post_Anime4k->setText(QCoreApplication::translate("MainWindow", "Bilateral filter", nullptr));
        checkBox_GaussianBlurWeak_Post_Anime4k->setText(QCoreApplication::translate("MainWindow", "Gaussian blur weak", nullptr));
        checkBox_BilateralFilterFaster_Post_Anime4k->setText(QCoreApplication::translate("MainWindow", "Bilateral filter faster", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget_Engines->setTabToolTip(tabWidget_Engines->indexOf(tab_A4k), QCoreApplication::translate("MainWindow", "Anime4K:\n"
"\n"
"- Only supports [2D Anime] image style.\n"
"\n"
"- More suitable for image with not too bad quality.\n"
"\n"
"- You can enable [ACNet] algorithm to improve image quality.\n"
"\n"
"- Although [GPU Mode] is not enabled by default, in most cases,\n"
"enabling [GPU Mode] can greatly increase the processing speed. \n"
"(Please make sure your PC is compatible with [GPU Mode] first)\n"
"\n"
"- [ Speed:\342\230\205\342\230\205\342\230\205  Image Quality:\342\230\205 ]", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_GPUSettings_MultiGPU_SrmdNCNNVulkan->setTitle(QCoreApplication::translate("MainWindow", "GPU Settings(Multi-GPU)", nullptr));
        checkBox_isEnable_CurrentGPU_MultiGPU_SrmdNCNNVulkan->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        label_68->setText(QCoreApplication::translate("MainWindow", "Tile size:", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ShowMultiGPUSettings_SrmdNCNNVulkan->setToolTip(QCoreApplication::translate("MainWindow", "Show current Multi-GPU settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ShowMultiGPUSettings_SrmdNCNNVulkan->setText(QCoreApplication::translate("MainWindow", "Show GPUs Settings", nullptr));
        label_69->setText(QCoreApplication::translate("MainWindow", "GPU ID:", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "GPU ID:", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_GPUID_srmd->setToolTip(QCoreApplication::translate("MainWindow", "Select the GPU to use when enabling the \"srmd-ncnn-vulkan\" engine.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_DetectGPUID_srmd->setText(QCoreApplication::translate("MainWindow", "Detect available GPU ID", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_MultiGPU_SrmdNCNNVulkan->setToolTip(QCoreApplication::translate("MainWindow", "1.You need at least 2 available GPUs.\n"
"\n"
"2.If you wanna get all GPUs running together,\n"
"the number of threads must >= the number of GPUs.\n"
"\n"
"3.You need to [Detect available GPU ID] first.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_MultiGPU_SrmdNCNNVulkan->setText(QCoreApplication::translate("MainWindow", "Enable Multi-GPU", nullptr));
#if QT_CONFIG(tooltip)
        label_40->setToolTip(QCoreApplication::translate("MainWindow", "Tile size: This value will affects GPU memory usage.\n"
"Larger tile size means SRMD will use more GPU memory and run faster.\n"
"Smaller tile size means SRMD will use less GPU memory and run slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_40->setText(QCoreApplication::translate("MainWindow", "Tile size:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_TileSize_srmd->setToolTip(QCoreApplication::translate("MainWindow", "Tile size: This value will affects GPU memory usage.\n"
"Larger tile size means SRMD will use more GPU memory and run faster.\n"
"Smaller tile size means SRMD will use less GPU memory and run slower.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_TTA_srmd->setToolTip(QCoreApplication::translate("MainWindow", "TTA(Test-Time Augmentation):\n"
"The processing time is eight times longer than when unchecked, \n"
"and the peak signal-to-noise ratio (PSNR) is increased by 0.15, \n"
"but the effect may not be obvious. It is not recommended to enable it.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tabWidget_Engines->setTabToolTip(tabWidget_Engines->indexOf(tab_SrmdNcnnVulkan), QCoreApplication::translate("MainWindow", "SRMD-NCNN-Vulkan:\n"
"\n"
"- Supports [2D Anime] and [3D Real-life] image style at the same time.\n"
"\n"
"- More suitable for processing [3D Real-life] images.\n"
"\n"
"- [ Speed:\342\230\205\342\230\206  Image Quality:\342\230\205\342\230\205\342\230\205 ]", nullptr));
#endif // QT_CONFIG(tooltip)
        label_56->setText(QCoreApplication::translate("MainWindow", "3D Real-life Model:", nullptr));
        comboBox_Model_3D_Waifu2xCaffe->setItemText(0, QCoreApplication::translate("MainWindow", "upconv_7_photo", nullptr));
        comboBox_Model_3D_Waifu2xCaffe->setItemText(1, QCoreApplication::translate("MainWindow", "photo", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_Model_3D_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Model for processing 3D Real-life style image.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_43->setToolTip(QCoreApplication::translate("MainWindow", "The batch size defines the number of samples that \n"
"will be propagated through the network.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_43->setText(QCoreApplication::translate("MainWindow", "Batch size:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_BatchSize_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "The batch size defines the number of samples that \n"
"will be propagated through the network.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("MainWindow", "Process mode:", nullptr));

#if QT_CONFIG(tooltip)
        checkBox_TTA_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "TTA(Test-Time Augmentation):\n"
"The processing time is eight times longer than when unchecked, \n"
"and the peak signal-to-noise ratio (PSNR) is increased by 0.15, \n"
"but the effect may not be obvious. It is not recommended to enable it.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_EnableMultiGPU_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "You need to switch [Process mode] to\n"
"[GPU] or [cuDNN] to enable Multi-GPU.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_EnableMultiGPU_Waifu2xCaffe->setText(QCoreApplication::translate("MainWindow", "Multi-GPU:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_MultiGPUInfo_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Format: GPU ID,Batch size,Split size:\n"
"\n"
"Example: 0,1,128:1,2,64:2,1,128:\n"
"\n"
"You must follow the format,otherwise the software may crash.\n"
"\n"
"If you wanna get all GPUs running together,\n"
"the number of threads must >= the number of GPUs.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton_VerifyGPUsConfig_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Verify your GPUs configuration.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VerifyGPUsConfig_Waifu2xCaffe->setText(QCoreApplication::translate("MainWindow", "Verify", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "2D Anime Model:", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_Model_2D_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Model for processing 2D Anime style image.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_38->setText(QCoreApplication::translate("MainWindow", "GPU ID:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_GPUID_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Select the GPU to use when enabling the \"waifu2x-caffe\" engine.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_52->setToolTip(QCoreApplication::translate("MainWindow", "Split size: This value will affects GPU memory usage.\n"
"Larger Split size means waifu2x will use more GPU memory and run faster.\n"
"Smaller Split size means waifu2x will use less GPU memory and run slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_52->setText(QCoreApplication::translate("MainWindow", "Split size:", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_SplitSize_Minus_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Decrease split size.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spinBox_SplitSize_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Split size: This value will affects GPU memory usage.\n"
"Larger Split size means waifu2x will use more GPU memory and run faster.\n"
"Smaller Split size means waifu2x will use less GPU memory and run slower.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton_SplitSize_Add_Waifu2xCaffe->setToolTip(QCoreApplication::translate("MainWindow", "Increase split size.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tabWidget_Engines->setTabToolTip(tabWidget_Engines->indexOf(tab_W2xCaffe), QCoreApplication::translate("MainWindow", "Waifu2x-Caffe:\n"
"\n"
"- Supports [2D Anime] and [3D Real-life] image style. But not at the\n"
"same time, you need to change [Image style] settings at [Home] tab.\n"
"\n"
"- More suitable for processing [2D Anime] images.\n"
"\n"
"- When using [CPU Process mode], it's very slow, so only using this\n"
"engine when your PC is compatible with [GPU(or cuDNN) Process mode]\n"
"is recommended.\n"
"\n"
"- [ Speed:\342\230\205\342\230\206  Image Quality:\342\230\205\342\230\205\342\230\205 ]", nullptr));
#endif // QT_CONFIG(tooltip)
        label_60->setText(QCoreApplication::translate("MainWindow", "Model:", nullptr));
        comboBox_Model_RealsrNCNNVulkan->setItemText(0, QCoreApplication::translate("MainWindow", "models-DF2K_JPEG(Supports denoise)", nullptr));
        comboBox_Model_RealsrNCNNVulkan->setItemText(1, QCoreApplication::translate("MainWindow", "models-DF2K(Does NOT supports denoise)", nullptr));

#if QT_CONFIG(tooltip)
        checkBox_TTA_RealsrNCNNVulkan->setToolTip(QCoreApplication::translate("MainWindow", "TTA(Test-Time Augmentation):\n"
"The processing time is eight times longer than when unchecked, \n"
"and the peak signal-to-noise ratio (PSNR) is increased by 0.15, \n"
"but the effect may not be obvious. It is not recommended to enable it.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_62->setText(QCoreApplication::translate("MainWindow", "GPU ID:", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_GPUID_RealsrNCNNVulkan->setToolTip(QCoreApplication::translate("MainWindow", "Select the GPU to use when enabling the \"Realsr-ncnn-vulkan\" engine.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_DetectGPU_RealsrNCNNVulkan->setText(QCoreApplication::translate("MainWindow", "Detect available GPU ID", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_MultiGPU_RealsrNcnnVulkan->setToolTip(QCoreApplication::translate("MainWindow", "1.You need at least 2 available GPUs.\n"
"\n"
"2.If you wanna get all GPUs running together,\n"
"the number of threads must >= the number of GPUs.\n"
"\n"
"3.You need to [Detect available GPU ID] first.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_MultiGPU_RealsrNcnnVulkan->setText(QCoreApplication::translate("MainWindow", "Enable Multi-GPU", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "Tile size:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_TileSize_RealsrNCNNVulkan->setToolTip(QCoreApplication::translate("MainWindow", "Tile size: This value will affects GPU memory usage.\n"
"Larger tile size means Realsr will use more GPU memory and run faster.\n"
"Smaller tile size means Realsr will use less GPU memory and run slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_GPUSettings_MultiGPU_RealsrNcnnVulkan->setTitle(QCoreApplication::translate("MainWindow", "GPU Settings(Multi-GPU)", nullptr));
        checkBox_isEnable_CurrentGPU_MultiGPU_RealsrNcnnVulkan->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        label_73->setText(QCoreApplication::translate("MainWindow", "GPU ID:", nullptr));
        label_72->setText(QCoreApplication::translate("MainWindow", "Tile size:", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ShowMultiGPUSettings_RealsrNcnnVulkan->setToolTip(QCoreApplication::translate("MainWindow", "Show current Multi-GPU settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ShowMultiGPUSettings_RealsrNcnnVulkan->setText(QCoreApplication::translate("MainWindow", "Show GPUs Settings", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget_Engines->setTabToolTip(tabWidget_Engines->indexOf(tab_RealsrNcnnVulkan), QCoreApplication::translate("MainWindow", "RealSR-NCNN-Vulkan:\n"
"\n"
"- Only support [3D Real-life] image style.\n"
"\n"
"- Best engine for processing [3D Real-life] images.\n"
"\n"
"- Much more slower than other engines.\n"
"\n"
"- [ Speed:\342\230\206  Image Quality:\342\230\205\342\230\205\342\230\205 ]", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab_EngineSettings), QCoreApplication::translate("MainWindow", "Engine settings", nullptr));
        groupBox_FrameInterpolation->setTitle(QCoreApplication::translate("MainWindow", "Frame Interpolation", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_UHD_VFI->setToolTip(QCoreApplication::translate("MainWindow", "You should enable this option when processing Ultra High Definition videos.\n"
"\n"
"The software will automatically enable UHD Mode when it detects input with\n"
"resolution higher than 3840\303\2272160.\n"
"\n"
"Only works when using [rife-ncnn-vulkan] engine.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_UHD_VFI->setText(QCoreApplication::translate("MainWindow", "UHD Mode", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Frame Interpolation Engine:", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_Engine_VFI->setToolTip(QCoreApplication::translate("MainWindow", "RIFE-NCNN-Vulkan [Speed:\342\230\205\342\230\205\342\230\205 Image quality:\342\230\205\342\230\205\342\230\206] [2D Anime]&[3D Real-life]\n"
"CAIN-NCNN-Vulkan [Speed:\342\230\205\342\230\205\342\230\205 Image quality:\342\230\205\342\230\205\342\230\206] [2D Anime]&[3D Real-life]\n"
"DAIN-NCNN-Vulkan [Speed:\342\230\206     Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_TTA_VFI->setToolTip(QCoreApplication::translate("MainWindow", "TTA(Test-Time Augmentation):\n"
"The processing time is eight times longer than when unchecked, \n"
"and the peak signal-to-noise ratio (PSNR) is increased by 0.15, \n"
"but the effect may not be obvious. It is not recommended to enable it.\n"
"\n"
"Only works when using [rife-ncnn-vulkan] engine.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_TTA_VFI->setText(QCoreApplication::translate("MainWindow", "TTA Mode", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_VfiAfterScale_VFI->setToolTip(QCoreApplication::translate("MainWindow", "Interpolate frames after upscaled.\n"
"\n"
"By default the frames will be interpolated before upscaled,\n"
"because PC with low vram will encounter difficulties when\n"
"interpolate high res frames.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_VfiAfterScale_VFI->setText(QCoreApplication::translate("MainWindow", "After Upscale", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "GPU ID:", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_GPUID_VFI->setToolTip(QCoreApplication::translate("MainWindow", "\"-1\" is CPU, others are GPUs", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_DetectGPU_VFI->setText(QCoreApplication::translate("MainWindow", "Detect available GPU ID", nullptr));
        checkBox_MultiGPU_VFI->setText(QCoreApplication::translate("MainWindow", "Multi GPU", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_MultiGPU_IDs_VFI->setToolTip(QCoreApplication::translate("MainWindow", "Format: GPU ID,GPU ID\n"
"\n"
"Example: 0,1\n"
"\n"
"You must follow the format,otherwise the software may crash.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton_Verify_MultiGPU_VFI->setToolTip(QCoreApplication::translate("MainWindow", "Verify your Multi GPU configuration.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Verify_MultiGPU_VFI->setText(QCoreApplication::translate("MainWindow", "Verify", nullptr));
#if QT_CONFIG(tooltip)
        label_19->setToolTip(QCoreApplication::translate("MainWindow", "This value will affects GPU memory usage.\n"
"Only works when using [dain-ncnn-vulkan] engine.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_19->setText(QCoreApplication::translate("MainWindow", "Tile size:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_TileSize_VFI->setToolTip(QCoreApplication::translate("MainWindow", "This value will affects GPU memory usage.\n"
"Only works when using [dain-ncnn-vulkan] engine.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("MainWindow", "Model:", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_Model_VFI->setToolTip(QCoreApplication::translate("MainWindow", "Choose the model for rife-ncnn-vulkan engine.\n"
"\n"
"We recommend you to use the default model \"rife-v2.4\".\n"
"\n"
"Only works when using [rife-ncnn-vulkan] engine.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_MultiThread_VFI->setToolTip(QCoreApplication::translate("MainWindow", "The multi-threading of the frame interpolation engines is NOT\n"
"very stable, we don't recommend you to enable this option.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_MultiThread_VFI->setText(QCoreApplication::translate("MainWindow", "Multithreading:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_NumOfThreads_VFI->setToolTip(QCoreApplication::translate("MainWindow", "Number of threads.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_AutoAdjustNumOfThreads_VFI->setToolTip(QCoreApplication::translate("MainWindow", "When successive failures are detected, the number\n"
"of threads will be adjusted automatically.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AutoAdjustNumOfThreads_VFI->setText(QCoreApplication::translate("MainWindow", "Auto adjust", nullptr));
        groupBox_AudioDenoise->setTitle(QCoreApplication::translate("MainWindow", "Audio denoise(for video)", nullptr));
#if QT_CONFIG(tooltip)
        doubleSpinBox_AudioDenoiseLevel->setToolTip(QCoreApplication::translate("MainWindow", "How much noise should be removed is specified by amount-a \n"
"number between 0.01 and 1 with a default of 0.20. Higher \n"
"numbers will remove more noise but present a greater \n"
"likelihood of removing wanted components of the audio signal.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_46->setText(QCoreApplication::translate("MainWindow", "Denoise level:", nullptr));
        checkBox_AudioDenoise->setText(QCoreApplication::translate("MainWindow", "Enabled", nullptr));
        groupBox_video_settings->setTitle(QCoreApplication::translate("MainWindow", "Custom video settings", nullptr));
        groupBox_OutputVideoSettings->setTitle(QCoreApplication::translate("MainWindow", "When output the result video", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Encoder(video):", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_encoder_vid->setToolTip(QCoreApplication::translate("MainWindow", "If you leave it empty, software will use auto settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_27->setText(QCoreApplication::translate("MainWindow", "Bitrate(video):", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_bitrate_vid->setToolTip(QCoreApplication::translate("MainWindow", "If you set it to 0, software will use auto settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_32->setText(QCoreApplication::translate("MainWindow", "Encoder(audio):", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_encoder_audio->setToolTip(QCoreApplication::translate("MainWindow", "If you leave it empty, software will use auto settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_29->setText(QCoreApplication::translate("MainWindow", "Bitrate(audio):", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_bitrate_audio->setToolTip(QCoreApplication::translate("MainWindow", "If you set it to 0, software will use auto settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_33->setText(QCoreApplication::translate("MainWindow", "Pixel format:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_pixformat->setToolTip(QCoreApplication::translate("MainWindow", "If you leave it empty, software will use auto settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_42->setText(QCoreApplication::translate("MainWindow", "Extra command:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_ExCommand_output->setToolTip(QCoreApplication::translate("MainWindow", "You can enter ffmpeg instructions here.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_ToMp4VideoSettings->setTitle(QCoreApplication::translate("MainWindow", "When convert source video to CFR mp4", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Bitrate(audio):", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_bitrate_audio_2mp4->setToolTip(QCoreApplication::translate("MainWindow", "If you set it to 0, software will use auto settings.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_acodec_copy_2mp4->setToolTip(QCoreApplication::translate("MainWindow", "When this is enabled, ffmpeg will copy the audio part of\n"
"the original video directly to the mp4, may cause error.\n"
"\n"
"Command: -acodec copy\n"
"\n"
"This option will not take effect when source video's frame\n"
"rate mode is variable.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_acodec_copy_2mp4->setText(QCoreApplication::translate("MainWindow", "Copy audio stream", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_vcodec_copy_2mp4->setToolTip(QCoreApplication::translate("MainWindow", "When this is enabled, ffmpeg will copy the video part of\n"
"the original video directly to the mp4, may cause error.\n"
"\n"
"Command: -vcodec copy\n"
"\n"
"This option will not take effect when source video's frame\n"
"rate mode is variable.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_vcodec_copy_2mp4->setText(QCoreApplication::translate("MainWindow", "Copy video stream", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Extra command:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_ExCommand_2mp4->setToolTip(QCoreApplication::translate("MainWindow", "You can enter ffmpeg instructions here.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_34->setText(QCoreApplication::translate("MainWindow", "Bitrate(video):", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_bitrate_vid_2mp4->setToolTip(QCoreApplication::translate("MainWindow", "If you set it to 0, software will use auto settings.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_IgnoreFrameRateMode->setToolTip(QCoreApplication::translate("MainWindow", "Ignore the frame rate mode of the source video.\n"
"Might cause ERROR.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_IgnoreFrameRateMode->setText(QCoreApplication::translate("MainWindow", "Ignore frame rate mode", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ResetVideoSettings->setToolTip(QCoreApplication::translate("MainWindow", "Reset video settings", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ResetVideoSettings->setText(QCoreApplication::translate("MainWindow", "Reset video settings", nullptr));
        pushButton_encodersList->setText(QCoreApplication::translate("MainWindow", "List Available Encoders", nullptr));
        groupBox_ProcessVideoBySegment->setTitle(QCoreApplication::translate("MainWindow", "Process video by segment", nullptr));
#if QT_CONFIG(tooltip)
        label_SegmentDuration->setToolTip(QCoreApplication::translate("MainWindow", "When processing video in segments, the length of each video clip.\n"
"This will determine how much hard disk space the program will occupy \n"
"when processing video in segments.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_SegmentDuration->setText(QCoreApplication::translate("MainWindow", "Segment duration:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_SegmentDuration->setToolTip(QCoreApplication::translate("MainWindow", "When processing video in segments, the length of each video clip.\n"
"This will determine how much hard disk space the program will occupy \n"
"when processing video in segments.", nullptr));
#endif // QT_CONFIG(tooltip)
        spinBox_SegmentDuration->setSuffix(QCoreApplication::translate("MainWindow", " secs", nullptr));
        spinBox_SegmentDuration->setPrefix(QString());
#if QT_CONFIG(tooltip)
        checkBox_ProcessVideoBySegment->setToolTip(QCoreApplication::translate("MainWindow", "Processing video in segments can greatly reduce the \n"
"hard disk space occupied by processing video. But it \n"
"will increase the time required to process video.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_ProcessVideoBySegment->setText(QCoreApplication::translate("MainWindow", "Enabled", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_VideoSettings), QCoreApplication::translate("MainWindow", "Video settings", nullptr));
        groupBox_InputExt->setTitle(QCoreApplication::translate("MainWindow", "Input file extensions", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("MainWindow", "When you find that the file format you want to process cannot \n"
"be added to the file list, you can add the file extension yourself \n"
"in the additional settings.\n"
"\n"
"Each extension needs to be separated by \":\"\n"
"\n"
"(There is no guarantee that the file format you add will \n"
"be processed successfully)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("MainWindow", "Image:", nullptr));
#if QT_CONFIG(tooltip)
        Ext_image->setToolTip(QCoreApplication::translate("MainWindow", "When you find that the file format you want to process cannot \n"
"be added to the file list, you can add the file extension yourself \n"
"in the additional settings.\n"
"\n"
"Each extension needs to be separated by \":\"\n"
"\n"
"(There is no guarantee that the file format you add will \n"
"be processed successfully)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("MainWindow", "When you find that the file format you want to process cannot \n"
"be added to the file list, you can add the file extension yourself \n"
"in the additional settings.\n"
"\n"
"Each extension needs to be separated by \":\"\n"
"\n"
"(There is no guarantee that the file format you add will \n"
"be processed successfully)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("MainWindow", "Video:", nullptr));
#if QT_CONFIG(tooltip)
        Ext_video->setToolTip(QCoreApplication::translate("MainWindow", "When you find that the file format you want to process cannot \n"
"be added to the file list, you can add the file extension yourself \n"
"in the additional settings.\n"
"\n"
"Each extension needs to be separated by \":\"\n"
"\n"
"(There is no guarantee that the file format you add will \n"
"be processed successfully)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_PreProcessImage->setToolTip(QCoreApplication::translate("MainWindow", "Convert every image to PNG before processing it.\n"
"Enabling this option will improve compatibility. However, it will\n"
"increase the time and storage space required to process image.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_PreProcessImage->setText(QCoreApplication::translate("MainWindow", "Pre-process all images", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_AutoDetectAlphaChannel->setToolTip(QCoreApplication::translate("MainWindow", "When the alpha channel is detected in the picture, software will\n"
"automatically force the picture to be saved as PNG.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AutoDetectAlphaChannel->setText(QCoreApplication::translate("MainWindow", "Auto detect Alpha channel", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_AlwaysPreProcessAlphaPNG->setToolTip(QCoreApplication::translate("MainWindow", "This software already can intelligently detect whether the Alpha channel is lost,\n"
"and automatically reprocess the picture. And image will be pre-processed during the \n"
"reporcess so the alpha channel won't lost again.\n"
"\n"
"However, this will cause additional time consumption. If re-processing\n"
"frequently occurs when processing images, you can enable this option to save time.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AlwaysPreProcessAlphaPNG->setText(QCoreApplication::translate("MainWindow", "Always pre-process images with Alpha Channel", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Custom Font Settings (Restart the software to take effect)", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Custom font:", nullptr));
        pushButton_Save_GlobalFontSize->setText(QCoreApplication::translate("MainWindow", "Save Custom Font Settings", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_isCustFontEnable->setToolTip(QCoreApplication::translate("MainWindow", "Enable Custom Font Settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_isCustFontEnable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Custom font size:", nullptr));
        groupBox_other_1->setTitle(QString());
        pushButton_SaveSettings->setText(QCoreApplication::translate("MainWindow", "Save settings", nullptr));
        pushButton_ResetSettings->setText(QCoreApplication::translate("MainWindow", "Reset settings", nullptr));
        pushButton_CheckUpdate->setText(QCoreApplication::translate("MainWindow", "Check update", nullptr));
        pushButton_Report->setText(QCoreApplication::translate("MainWindow", "Report issue", nullptr));
        pushButton_ReadMe->setText(QCoreApplication::translate("MainWindow", "Official website", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_wiki->setToolTip(QCoreApplication::translate("MainWindow", "Open Waifu2x-Extension-GUI online wiki.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_wiki->setText(QCoreApplication::translate("MainWindow", "Wiki", nullptr));
        pushButton_about->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        pushButton_SupportersList->setText(QCoreApplication::translate("MainWindow", "Top Supporters", nullptr));
        groupBox_8->setTitle(QString());
#if QT_CONFIG(tooltip)
        checkBox_UpdatePopup->setToolTip(QCoreApplication::translate("MainWindow", "A pop-up window will prompts when an update is detected.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_UpdatePopup->setText(QCoreApplication::translate("MainWindow", "Update popup", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_AutoSaveSettings->setToolTip(QCoreApplication::translate("MainWindow", "Settings will be saved automatically when you close the software.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AutoSaveSettings->setText(QCoreApplication::translate("MainWindow", "Auto save settings", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_DisableResize_gif->setToolTip(QCoreApplication::translate("MainWindow", "This option will be automatically enabled to improve\n"
"performance and fix issues when the software detects\n"
"that your PC has compatibility issues with ImageMagick.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_DisableResize_gif->setText(QCoreApplication::translate("MainWindow", "Disable \"-resize\"", nullptr));
        checkBox_PromptWhenExit->setText(QCoreApplication::translate("MainWindow", "Prompt when exit", nullptr));
        checkBox_MinimizeToTaskbar->setText(QCoreApplication::translate("MainWindow", "Minimize to taskbar", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_AlwaysHideTextBrowser->setToolTip(QCoreApplication::translate("MainWindow", "[Text browser] will be automatically hidden when the software starts.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AlwaysHideTextBrowser->setText(QCoreApplication::translate("MainWindow", "Always hide Text Browser", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_ScanSubFolders->setToolTip(QCoreApplication::translate("MainWindow", "When adding a folder to the file list, scan the files in\n"
"the subfolder and add them to the file list.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_ScanSubFolders->setText(QCoreApplication::translate("MainWindow", "Scan sub-folders", nullptr));
#if QT_CONFIG(tooltip)
        label_39->setToolTip(QCoreApplication::translate("MainWindow", "The number of retries when an image (or frame) processing fails.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_39->setText(QCoreApplication::translate("MainWindow", "Retry:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_retry->setToolTip(QCoreApplication::translate("MainWindow", "The number of retries when an image (or frame) processing fails.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_BanGitee->setToolTip(QCoreApplication::translate("MainWindow", "Stop downloading any data from Gitee.\n"
"\n"
"When you cannot access github, enabling \n"
"this option will affect the automatic\n"
"detection of new updates.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_BanGitee->setText(QCoreApplication::translate("MainWindow", "Ban Gitee", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_language->setToolTip(QCoreApplication::translate("MainWindow", "We recommend that you restart the software after changing \n"
"the language for the language settings to fully take effect.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_21->setToolTip(QCoreApplication::translate("MainWindow", "We recommend that you restart the software after changing \n"
"the language for the language settings to fully take effect.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_NfSound->setToolTip(QCoreApplication::translate("MainWindow", "Play Notification sound.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_NfSound->setText(QCoreApplication::translate("MainWindow", "Notification sound", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_FileListAutoSlide->setToolTip(QCoreApplication::translate("MainWindow", "When the file processing status changes, the file list scrolls automatically.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_FileListAutoSlide->setText(QCoreApplication::translate("MainWindow", "Automatic file list scrolling", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "Update channel:", nullptr));
        comboBox_UpdateChannel->setItemText(0, QCoreApplication::translate("MainWindow", "Stable", nullptr));
        comboBox_UpdateChannel->setItemText(1, QCoreApplication::translate("MainWindow", "Beta", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_UpdateChannel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_KeepVideoCache->setToolTip(QCoreApplication::translate("MainWindow", "Keep video cache after processing the video.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_KeepVideoCache->setText(QCoreApplication::translate("MainWindow", "Keep video cache", nullptr));
        checkBox_FileList_Interactive->setText(QCoreApplication::translate("MainWindow", "Interactive file list", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_AlwaysHideSettings->setToolTip(QCoreApplication::translate("MainWindow", "[Settings] will be automatically hidden when the software starts.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AlwaysHideSettings->setText(QCoreApplication::translate("MainWindow", "Always hide Settings", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_ShowInterPro->setToolTip(QCoreApplication::translate("MainWindow", "Output internal Scale and Denoise progress of GIF and video process inside textbrowser.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_ShowInterPro->setText(QCoreApplication::translate("MainWindow", "Show internal progress", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_SummaryPopup->setToolTip(QCoreApplication::translate("MainWindow", "Show the summary pop-up window after processing all files.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_SummaryPopup->setText(QCoreApplication::translate("MainWindow", "Summary popup", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_AdditionalSettings), QCoreApplication::translate("MainWindow", "Additional settings", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_compatibilityTest->setToolTip(QCoreApplication::translate("MainWindow", "Run a compatibility test to see which engines your computer is compatible with.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_compatibilityTest->setText(QCoreApplication::translate("MainWindow", "Start compatibility test", nullptr));
        groupBox_CompatibilityTestRes->setTitle(QCoreApplication::translate("MainWindow", "Compatibility test results", nullptr));
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_OLD->setText(QCoreApplication::translate("MainWindow", "Waifu2x-ncnn-vulkan(OLD)", nullptr));
        checkBox_isCompatible_Waifu2x_NCNN_Vulkan_NEW->setText(QCoreApplication::translate("MainWindow", "Waifu2x-ncnn-vulkan(Latest)", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "Plugins:", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "Super-Resolution Engines:", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Frame Interpolation Engines:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "[FFmpeg, FFprobe, ImageMagick, Gifsicle, SoX], one of the Super-Resolution engines and one of the Frame Interpolation engines must be compatible with your computer, to make sure you can use all functions in this software.\n"
"\n"
"Waifu2x-NCNN-Vulkan [Speed:\342\230\205\342\230\205   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"Waifu2x-Converter   [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\206] [2D Anime]\n"
"Anime4K             [Speed:\342\230\205\342\230\205\342\230\205 Image quality:\342\230\205\342\230\206  ] [2D Anime]\n"
"SRMD-NCNN-Vulkan    [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"Waifu2x-Caffe       [Speed:\342\230\205\342\230\206   Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"RealSR-NCNN-Vulkan  [Speed:\342\230\206     Image quality:\342\230\205\342\230\205\342\230\205] [3D Real-life]\n"
"SRMD-CUDA           [Speed:\342"
                        "\230\205\342\230\205\342\230\206 Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]\n"
"\n"
"RIFE-NCNN-Vulkan [Speed:\342\230\205\342\230\205\342\230\205 Image quality:\342\230\205\342\230\205\342\230\206] [2D Anime]&[3D Real-life]\n"
"CAIN-NCNN-Vulkan [Speed:\342\230\205\342\230\205\342\230\205 Image quality:\342\230\205\342\230\205\342\230\206] [2D Anime]&[3D Real-life]\n"
"DAIN-NCNN-Vulkan [Speed:\342\230\206     Image quality:\342\230\205\342\230\205\342\230\205] [2D Anime]&[3D Real-life]", nullptr));
        checkBox_isCompatible_SRMD_CUDA->setText(QCoreApplication::translate("MainWindow", "SRMD-CUDA [BETA]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_CompatibilityTest), QCoreApplication::translate("MainWindow", "Compatibility test", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_clear_textbrowser->setToolTip(QCoreApplication::translate("MainWindow", "Clear text browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_clear_textbrowser->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        label_TextBroFontSize->setToolTip(QCoreApplication::translate("MainWindow", "Change the font size of the text browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_TextBroFontSize->setText(QCoreApplication::translate("MainWindow", "Font size:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_textbrowser_fontsize->setToolTip(QCoreApplication::translate("MainWindow", "Change the font size of the text browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
