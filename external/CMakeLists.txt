cmake_minimum_required(VERSION 3.14.0)

if(SMTG_VST3_LOCATION_DIR)
    add_subdirectory(${SMTG_VST3_LOCATION_DIR} ${PROJECT_BINARY_DIR}/vst3sdk_build)
else()
    add_subdirectory(vst3sdk)
endif()
