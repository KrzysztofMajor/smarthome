project(smarthome)
cmake_minimum_required(VERSION 3.5)

find_package(OpenSSL REQUIRED)
target_link_libraries(main PRIVATE OpenSSL::SSL OpenSSL::Crypto)