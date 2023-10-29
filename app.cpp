#include <iostream>
#include <fstream>
#include <cmath>

double cosineSimilarity(int Table1[], int Table2[]);

int main() {
    // Initialize the two files
    std::ifstream file1("file1.txt");
    std::ifstream file2("file5.txt");

    int Table1[128] = {0};
    int Table2[128] = {0};

    char c;

    // Read the files and fill the tables
    while (file1.get(c)) {
        Table1[static_cast<unsigned char>(c)]++;
    }

    while (file2.get(c)) {
        Table2[static_cast<unsigned char>(c)]++;
    }

    // Ralculate the similarity
    double similarity = cosineSimilarity(Table1, Table2);
    // Display the similarity
    std::cout << "Similarity between the files is " << similarity << "°" << std::endl;

    file1.close();
    file2.close();

    return 0;
}
double cosineSimilarity(int Table1[], int Table2[]) {
    double ProduitScalaire = 0.0;
    double EuclideanTable1 = 0.0;
    double EuclideanTable2 = 0.0;

    // Calculate the scalar product and the euclidean norm of the two tables
    for (int i = 0; i < 128; ++i) {
        ProduitScalaire += Table1[i] * Table2[i];
        EuclideanTable1 += Table1[i] * Table1[i];
        EuclideanTable2 += Table2[i] * Table2[i];
    }

    EuclideanTable1 = sqrt(EuclideanTable1);
    EuclideanTable2 = sqrt(EuclideanTable2);

    // If one of the tables is empty, return 0.0
    if (EuclideanTable1 == 0.0 || EuclideanTable2 == 0.0) {
        return 0.0;
    }

    // Calculate the angle between the two tables
    double result = acos(ProduitScalaire / (EuclideanTable1 * EuclideanTable2)) * (180.0 / 3.14159265358979323846);
    
    // if are similar, return 0.0
    if (std::isnan(result) || result == 0) {
        return 0.0;
    } else {
        return result;
    }
}
