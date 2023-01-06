include(FetchContent)
FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG v1.x
)

FetchContent_GetProperties(spdlog)

FetchContent_MakeAvailable(spdlog)
