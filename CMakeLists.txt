cmake_minimum_required(VERSION 3.25)
project(untitled C)

set(CMAKE_C_STANDARD 11)

# Création de l'exécutable pour les tests
add_executable(main_executable main.c src/Pile/pile.c src/Hashmap/Map.h src/Hashmap/Map.h)
add_executable(untitled src/test_file.c src/Pile/pile.c src/Array/array.c src/Array/array.h src/Hashmap/Map.h src/Hashmap/Map.c)