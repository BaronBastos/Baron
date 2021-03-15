//
// Created by Baron Baruwani on 3/14/21.
//
#include "Employee.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include "Database.h"
#include<string>
#include <list>
using namespace std;

int ReadCSV(string filename, string &header, vector<string>& records) {
    ifstream inFS;       // input file stream
    string record;       // one complete input line (row)
    int rows=0;
    // row count does not include the header row

    // Open file
    inFS.open(filename);
    cout << "Reading: " << filename << endl;
    if (!inFS.is_open()) { // check for successful open
        cout << "Could not open file."<< endl;
        return -1;   // return error
    }

    getline(inFS, header); // read the header
    while (!inFS.eof()) {         // read all the rows
        inFS >> record;
        if (!inFS.fail()) {
            records.push_back(record); // store the input (complete line)
            rows++;                    // count the number of rows
        }
    }

    // close file when done reading
    inFS.close();

    return rows;  // return the number of rows read
}


void collectdata() {
    string header;
    vector<string> lines;
    int rows;
    std::stringstream          lineStream(header); // used to read the field (column/cell) data from the data line (row) string
    string col01, col02,  col03, col04, col05, col06,  col07, col08, col09, col10,  col11, col12, col13, col14, col15,  col16, col17, col18, col19, col20, col21, col22, col23, col24, col25;
    string id,    prefix, first, mi,    last,  gender, email, dob,   county, salary, phone, city,  state, zip,   region, user, last_hike;
    // WARNING: This might not be the exactly match the field names and sequence of the data in your file.
    rows = ReadCSV("../data_v1.csv", header, lines);  // put the file data.csv in the same directory as main.cpp
    cout << rows << " data rows found." << endl << endl;

    cout << header << endl;  // print the header
    // NOTE: The header does not line up with the rest of the columns. You should fix that.
    for (auto l : lines) {   // process the table data that was read (all the rows)
        stringstream lineStream(l) ; // prepare to parse a line (row) of data using stringStream
        noskipws(lineStream);     // this is supposed to cause getline to ignore whitespace, but...
        // it's not working, so all spaces have been converted to underscores in the data
        /** Old approach, may not be in the correct order
        getline(lineStream, id, ',');
        getline(lineStream, prefix, ',');
        getline(lineStream, first, ',');
        getline(lineStream, mi, ',');
        getline(lineStream, last, ',');
        getline(lineStream, gender, ',');
        getline(lineStream, email, ',');
        getline(lineStream, dob, ',');
        getline(lineStream, join, ',');
        getline(lineStream, salary, ',');
        getline(lineStream, phone, ',');
        getline(lineStream, city, ',');
        getline(lineStream, state, ',');
        getline(lineStream, zip, ',');
        getline(lineStream, region, ',');
        getline(lineStream, user, ',');
        **/
        // parse each column of data (up to the next comma)
        getline(lineStream, col01, ',');
        getline(lineStream, col02, ',');
        getline(lineStream, col03, ',');
        getline(lineStream, col04, ',');
        getline(lineStream, col05, ',');
        getline(lineStream, col06, ',');
        getline(lineStream, col07, ',');
        getline(lineStream, col08, ',');
        getline(lineStream, col09, ',');
        getline(lineStream, col10, ',');
        getline(lineStream, col11, ',');
        getline(lineStream, col12, ',');
        getline(lineStream, col13, ',');
        getline(lineStream, col14, ',');
        getline(lineStream, col15, ',');
        getline(lineStream, col16, ',');
        getline(lineStream, col17, ',');
        getline(lineStream, col18, ',');
        getline(lineStream, col19, ',');
        getline(lineStream, col20, ',');
        getline(lineStream, col21, ',');
        getline(lineStream, col22, ',');
        getline(lineStream, col23, ',');
        getline(lineStream, col24, ',');
        getline(lineStream, col25, ',');


        Employee employe(col03, stoi(col01), col05, col25);
        employe.setCity(col21);
        employe.setDateofJoin(col14);
        employe.setDob(col11);
        employe.setEmail(col07);
        employe.setGender(col06);
        employe.setCounty(col20);
        employe.setMi(col04);
        employe.setMotherName(col09);
        employe.setMothermaidename(col10);
        employe.setPhone(col18);
        employe.setSSN(col17);
        employe.setState(col22);
        employe.setRegion(col24);
        employe.setPlaceName(col19);
        employe.setPrefix(col02);
        employe.setZip(stoi(col23));
        employe.setAge(stof(col12));
        employe.setSalary(stoi(col15));
        employe.setLast_hike(col16);
        employe.setFatherName(col08);
        employe.setWeight(stoi(col13));


    }
}
Database:: Database(string filename) {
    collectdata();
}
