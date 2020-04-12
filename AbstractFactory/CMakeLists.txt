cmake_minimum_required(VERSION 3.5)

project(AbstractFactory LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AbstractFactory main.cxx
    product.h
    concrete_product.h
    factory.h
    factory.cpp
    concrete_factory.h)
