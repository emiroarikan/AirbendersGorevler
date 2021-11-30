#include <iostream>
#include <vector>
#include <cmath>

double mean(std::vector<double> data){
    double sum = 0;
    for(int i = 0; i < data.size(); i++){
        sum += data[i];
    }
    return sum/data.size();
}

double stddev(std::vector<double> data){
    double meanof = mean(data);
    double sum = 0;
    for(int i = 0; i < data.size(); i++){
        sum += pow(data[i] - meanof, 2);
    }
    return sqrt(sum/data.size());
}

int main(){
    std::vector<double> vec;
    vec = {6, 5, 12};
    std::cout << "mean of vec: " << mean(vec) << std::endl << "standart deviation of vec: " << stddev(vec);
}