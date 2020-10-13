
$cmakeInstallPrefix = "out/install"

foreach ($cmakeBuildType in @("Debug")) {
    Write-Host "Build $cmakeBuildType ..."
    $cmakeBuildDir = "out/build/$cmakeBuildType"

    cmake `
    "-DCMAKE_BUILD_TYPE=$cmakeBuildType" `
    -DCMAKE_INSTALL_PREFIX="$cmakeInstallPrefix/$cmakeBuildType" `
    "-S." `
    "-B$cmakeBuildDir"

    cmake --build $cmakeBuildDir

    cmake --install $cmakeBuildDir
}