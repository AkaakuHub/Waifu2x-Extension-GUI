#!/bin/bash

# Quick conda/miniconda installer for Linux environments without sudo

set -e

echo "Installing Miniconda for user-space package management..."

# Download Miniconda installer
cd /tmp
if [ ! -f Miniconda3-latest-Linux-x86_64.sh ]; then
    echo "Downloading Miniconda installer..."
    wget -q https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh
fi

# Install Miniconda
echo "Installing Miniconda to ~/miniconda3..."
bash Miniconda3-latest-Linux-x86_64.sh -b -p "$HOME/miniconda3"

# Initialize conda
echo "Initializing conda..."
"$HOME/miniconda3/bin/conda" init bash

echo "Conda installation completed!"
echo "Please run: source ~/.bashrc"
echo "Then you can use ./install.sh which will automatically use conda for dependencies."