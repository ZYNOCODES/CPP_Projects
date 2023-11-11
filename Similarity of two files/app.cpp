#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <vector>
#include <string>

double cosineSimilarity(std::vector<std::string> V1,std::vector<std::string> V2);

int main() {

    std::ifstream file1("file1.txt");
    std::ifstream file2("file5.txt");

    std::vector<std::string> V1;
    std::vector<std::string> V2;

    std::string word;

    std::cout<< "-------file 1------- "<<std::endl;
    while (file1 >> word) {
        V1.push_back(word);
    }
    int i = 0;
    while (i < V1.size()) {
        std::cout << V1[i] << ",";
        i++;
    }
    std::cout<<std::endl;

    std::cout<< "-------file 2------- "<<std::endl;
    while (file2 >> word) {
        V2.push_back(word);
    }
    int j = 0;
    while (j < V2.size()) {
        std::cout << V2[j] << ",";
        j++;
    }
    double similarity = cosineSimilarity(V1, V2);
    std::cout<< "-------result------- "<<std::endl;
    std::cout << "Similarity between the files is : " << similarity << "°" << std::endl;

    file1.close();
    file2.close();

    return 0;
}

double cosineSimilarity(std::vector<std::string> V1, std::vector<std::string> V2) {

    std::vector<std::string> OverlappingWords;
    std::vector<std::string> V3(V2);

    // Find the Overlapping words
    for (size_t i = 0; i < V1.size(); ++i) {
        for (size_t j = 0; j < V3.size(); ++j) {
            if (V1[i] == V3[j]) {
                OverlappingWords.push_back(V1[i]);
                V3.erase(V3.begin() + j);
                break;
            }
        }
    }
    std::cout<<std::endl;
    std::cout<< "-------Words that dont overlap------- "<<std::endl;
    int i = 0;
    while (i < V3.size()) {
        std::cout << V3[i] << ",";
        i++;
    }
    std::cout<<std::endl;

    std::cout<< "-------Overlapping Words------- "<<std::endl;
    int j = 0;
    while (j < OverlappingWords.size()) {
        std::cout << OverlappingWords[j] << ",";
        j++;
    }
    std::cout<<std::endl;

    // Calculate the Euclidean distance
    double Euclidean = sqrt(V1.size() * V2.size());

    // if one is empty
    if (Euclidean == 0.0) {
        return 0.0;
    }

    // Calculate the angle in degrees
    double result = acos(OverlappingWords.size() / Euclidean) * (180.0 / 3.14159265358979323846);

    if (std::isnan(result) || result == 0) {
        // if they are similar
        return 0.0;
    } else {
        // if they are not similar
        return result;
    }
}
