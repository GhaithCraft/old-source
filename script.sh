#!/bin/bash
#Cleanup before build

echo "Compile wtih GCC 6 Toolchain"
export CROSS_COMPILE=/home/ghaith/android/Toolchains/aarch64-cortex_a53-linux-gnueabi-gcc-6/bin/aarch64-cortex_a53-linux-gnueabi-
ARCH=arm64

echo "CleanUp"
make clean && make mrproper

echo "Stock DEFCON"
make Alphabet_Kernel_a7y17lte_defconfig
#make Alphabet_Kernel_a5y17lte_defconfig
make -j3