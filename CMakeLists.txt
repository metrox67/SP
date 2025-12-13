cmake_minimum_required(VERSION 3.10)
project(SP CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(OUTPUT_BIN_DIR "${CMAKE_BINARY_DIR}/bin") # За да не се повторува патеката

# =========================================================
# 1. АВТОМАТСКО ДОДАВАЊЕ НА СИТЕ LABS ВЕЖБИ
# =========================================================

set(LABS_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Labs)

# Наоѓање на сите поддиректориуми што почнуваат со "Labs "
# Користењето на целосни наводници е критично за имиња со празно место.
file(GLOB LAB_SUBDIRS RELATIVE ${LABS_ROOT_DIR} "${LABS_ROOT_DIR}/Labs *")

foreach(LAB_DIR ${LAB_SUBDIRS})

    # Извлекување на бројот (на пр. "1" од "Labs 1")
    string(REGEX MATCH "[0-9]+" LAB_NUMBER ${LAB_DIR})

    set(CURRENT_LAB_PATH "${LABS_ROOT_DIR}/${LAB_DIR}")

    # Наоѓање на сите .cpp датотеки во овој директориум
    file(GLOB SOURCE_FILES "${CURRENT_LAB_PATH}/*.cpp")

    foreach(SOURCE_FILE ${SOURCE_FILES})
        get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
        set(TARGET_NAME "L${LAB_NUMBER}_${FILE_NAME}")

        add_executable(${TARGET_NAME} ${SOURCE_FILE})

        set_target_properties(${TARGET_NAME} PROPERTIES
                FOLDER "Лабораториски вежби/${LAB_DIR}"
                RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_BIN_DIR}
        )
    endforeach()
endforeach()

# =========================================================
# 2. АВТОМАТСКО ДОДАВАЊЕ НА СИТЕ AUD ВЕЖБИ
# =========================================================

set(AUD_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Aud)

# Наоѓање на сите поддиректориуми што почнуваат со "Aud "
file(GLOB AUD_SUBDIRS RELATIVE ${AUD_ROOT_DIR} "${AUD_ROOT_DIR}/Aud *")

foreach(AUD_DIR ${AUD_SUBDIRS})

    # Извлекување на бројот (на пр. "1" од "Aud 1")
    string(REGEX MATCH "[0-9]+" AUD_NUMBER ${AUD_DIR})

    set(CURRENT_AUD_PATH "${AUD_ROOT_DIR}/${AUD_DIR}")

    file(GLOB SOURCE_FILES "${CURRENT_AUD_PATH}/*.cpp")

    foreach(SOURCE_FILE ${SOURCE_FILES})
        get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
        set(TARGET_NAME "A${AUD_NUMBER}_${FILE_NAME}")

        add_executable(${TARGET_NAME} ${SOURCE_FILE})

        set_target_properties(${TARGET_NAME} PROPERTIES
                FOLDER "Аудиториски вежби/${AUD_DIR}"
                RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_BIN_DIR}
        )
    endforeach()
endforeach()