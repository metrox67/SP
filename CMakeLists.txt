cmake_minimum_required(VERSION 3.10)
project(SP CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# =========================================================
# 1. ДОДАВАЊЕ НА ПОСЕБЕН ФАЈЛ ОД КОРЕНОТ (Ако ви треба)
# =========================================================
# Ако имате фајл надвор од Labs/ и Aud/, откоментирајте и користете
# add_executable(MyTestApp test_project.cpp)
# set_target_properties(MyTestApp PROPERTIES FOLDER "Посебни апликации")

# =========================================================
# 2. АВТОМАТСКО ДОДАВАЊЕ НА СИТЕ LABS ВЕЖБИ
#    - Таргети: L1_1, L2_1a, L3_2
# =========================================================

set(LABS_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Labs)

# Наоѓање на Labs 1, Labs 2, ...
file(GLOB LAB_DIRS RELATIVE ${LABS_ROOT_DIR} "${LABS_ROOT_DIR}/Labs *")

foreach(LAB_DIR ${LAB_DIRS})

    string(REGEX MATCH "[0-9]+" LAB_NUMBER ${LAB_DIR})
    set(CURRENT_LAB_PATH ${LABS_ROOT_DIR}/${LAB_DIR})
    file(GLOB SOURCE_FILES "${CURRENT_LAB_PATH}/*.cpp")

    foreach(SOURCE_FILE ${SOURCE_FILES})
        get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
        set(TARGET_NAME "L${LAB_NUMBER}_${FILE_NAME}")

        add_executable(${TARGET_NAME} ${SOURCE_FILE})

        set_target_properties(${TARGET_NAME} PROPERTIES
                FOLDER "Лабораториски вежби/${LAB_DIR}"
                RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )
    endforeach()
endforeach()

# =========================================================
# 3. АВТОМАТСКО ДОДАВАЊЕ НА СИТЕ AUD ВЕЖБИ (НОВО)
#    - Таргети: A1_1, A2_10, A3_2
# =========================================================

set(AUD_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Aud)

# Наоѓање на Aud 1, Aud 2, ...
file(GLOB AUD_DIRS RELATIVE ${AUD_ROOT_DIR} "${AUD_ROOT_DIR}/Aud *")

foreach(AUD_DIR ${AUD_DIRS})

    string(REGEX MATCH "[0-9]+" AUD_NUMBER ${AUD_DIR})
    set(CURRENT_AUD_PATH ${AUD_ROOT_DIR}/${AUD_DIR})
    file(GLOB SOURCE_FILES "${CURRENT_AUD_PATH}/*.cpp")

    foreach(SOURCE_FILE ${SOURCE_FILES})
        get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
        set(TARGET_NAME "A${AUD_NUMBER}_${FILE_NAME}")

        add_executable(${TARGET_NAME} ${SOURCE_FILE})

        set_target_properties(${TARGET_NAME} PROPERTIES
                FOLDER "Аудиториски вежби/${AUD_DIR}"
                RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )
    endforeach()
endforeach()