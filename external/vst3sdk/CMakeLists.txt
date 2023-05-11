cmake_minimum_required(VERSION 3.14.0)
include(FetchContent)

option(SMTG_ENABLE_VST3_PLUGIN_EXAMPLES "Enable VST 3 Plug-in Examples" OFF)
option(SMTG_ENABLE_VST3_HOSTING_EXAMPLES "Enable VST 3 Hosting Examples" OFF)

if(SMTG_VST3_LOCATION_DIR)
    add_subdirectory(${SMTG_VST3_LOCATION_DIR} ${PROJECT_BINARY_DIR}/vst3sdk_build)
else()
    FetchContent_Declare(
        vst3sdk
        GIT_REPOSITORY https://github.com/steinbergmedia/vst3sdk.git
        GIT_TAG v3.7.7_build_19
    )
    FetchContent_MakeAvailable(vst3sdk)
endif()
