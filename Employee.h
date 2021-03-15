// Created by Baron Baruwani on 3/10/21.
//
#ifndef Employee_H
#define Employee_H

#include <string>
using namespace std;
class Employee{
    public:
        Employee();
        Employee(string first, int id, string user, string last);
        Employee(string fileName);
        void setPrefix(string prefix);
        void setMi(string mi);
        void setGender(string gender);
        void setEmail(string email);
        void setDob(string dob);
        void setPhone(string phone);
        void setCounty(string county);
        void setCity(string city);
        void setState(string state);
        void setRegion(string region);
        void setPlaceName(string placename);
        void setFatherName(string fathername);
        void setMotherName(string mothername);
        void setDateofJoin(string dateofjoin);
        void setSSN(string SSn);
        void setMothermaidename(string motherMaidenName);
        void setLast_hike(string last_hike);
        int setZip(int zip);
        int setSalary(int salary);
        float setAge(float age);
        int setWeight(int weight);

    private:
        string prefix, first, mi, last,  gender, email, dob, phone,  county, city,  state, region, user, placeName, last_hike, fatherName, motherName, dateofJoin, SSn, motherMaidenName;
        int id;
        int zip;
        int salary;
        float age;
        int weight;

};
#endif
