//
// Created by Baron Baruwani on 3/11/21.
//
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
 Employee::Employee(string first, int id, string user, string last){
     this->first = first;
     this->id = id;
     this->user = user;
     this->last = last;
 }
void Employee::setPrefix(string prefix){
     this->prefix = prefix;
 }
void Employee::setMi(string mi){
     this->mi = mi;
 }
void Employee::setGender(string gender){
     this->gender = gender;
 }
void Employee::setEmail(string email){
     this->email = email;
 }
void Employee::setDob(string dob){
     this->dob = dob;
 }
void Employee::setPhone(string phone){
     this->phone = phone;
 }
void Employee::setCounty(string county){
     this->county = county;
 }
void Employee::setCity(string city){
     this->city = city;
 }
void Employee::setState(string state){
     this->state = state;
 }
void Employee::setRegion(string region){
     this->region = region;
 }
void Employee::setPlaceName(string placename){
     this->placeName= placename;
 }
void Employee::setFatherName(string fathername){
     this->fatherName = fathername;
 }
void Employee::setMotherName(string mothername){
     this-> motherName = mothername;
 }
void Employee::setDateofJoin(string dateofjoin){
     this->dateofJoin = dateofjoin;
 }
void Employee::setSSN(string SSn){
     this->SSn = SSn;
 }
void Employee::setMothermaidename(string motherMaidenName){
     this->motherMaidenName = motherMaidenName;
 }
void Employee::setLast_hike(string last_hike) {
     this->last_hike= last_hike;
 }
int Employee::setZip(int zip){
     return zip;
 }
int Employee::setSalary(int salary) {
     return salary;
 }
float Employee::setAge(float age) {
     return age;
 }
int Employee::setWeight(int weight) {
     return weight;
 }

