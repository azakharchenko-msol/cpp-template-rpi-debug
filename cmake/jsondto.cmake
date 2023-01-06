include(FetchContent)
FetchContent_Declare(
    jsondto
    GIT_REPOSITORY https://github.com/Stiffstream/json_dto.git
    GIT_TAG v.0.3.1
    SOURCE_SUBDIR dev
    -DJSON_DTO_SAMPLE=OFF
    -DJSON_DTO_TEST=OFF
   
)

FetchContent_GetProperties(jsondto)

FetchContent_MakeAvailable(jsondto)
FetchContent_Declare(
    rapidjson
    GIT_REPOSITORY https://github.com/Tencent/rapidjson.git
    GIT_TAG master
    
)
FetchContent_GetProperties(rapidjson)

if(NOT rapidjson_POPULATED)
    FetchContent_Populate(rapidjson)
endif()

INCLUDE_DIRECTORIES(

    ${rapidjson_SOURCE_DIR}/include
    ${jsondto_SOURCE_DIR}/dev
)