//
// Created by shaul on 20/03/2022.
//
#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include "Direction.hpp"
#include <unordered_map>

using namespace std;

namespace ariel {
    class Notebook {

    public:
        unordered_map<string , array<char,100>> notebook;


    void write(int page_num, int row, int column, Direction d, string to_write);

    string read(int page_num, int row, int column, ariel::Direction d, int length);

    void erase(int page_num, int row, int column, ariel::Direction d, int length);

    void show(int page_num);

    };
}

