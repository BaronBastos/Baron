//
// Created by Baron Baruwani on 3/14/21.
//

#ifndef DATABASE_H
#define DATABASE_H
#include"Employee.h"
#include<vector>
#include<iostream>
#include<string>
class Database {
    public:
        Database();
        Database(string filename);
    private:
        vector<Employee> employeeList;
};


#endif
