project(smarthome)
cmake_minimum_required(VERSION 3.5)

find_package(OpenSSL REQUIRED)
find_package(Boost REQUIRED system)
find_package(spdlog CONFIG REQUIRED)    

add_executable(smarthome main.cpp)
target_link_libraries(smarthome PRIVATE OpenSSL::SSL OpenSSL::Crypto ${Boost_LIBRARIES} spdlog::spdlog pthread)
target_include_directories(smarthome PRIVATE ${Boost_INCLUDE_DIRS})
