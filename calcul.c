#include "calcul.h"

int minimal(const int array[], const int count) {

    if (count <= 0 || array == NULL) {
        return -1;
    }

    int minimum_value = pole[0];
    int minimal_index = 0;

    for (int i = 1; i < count; i++) {
        if (array[i] < minimum_value) {
            minimum_value = array[i];
            minimal_index = i;
        }
    }

    if (minimum_value < 0) {
        return -1;
    }

    return minimal_index;

}

int maximal(const int array[], const int count) {

    if (count <= 0 || array == NULL) {
        return -1;
    }

    int max_value = array[0];

    for (int i = 1; i < count; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    if (max_value < 0) {
        return -1;
    }

    return max_value;

}

int summary(const int array[], const int count) {

    if (count <= 0 || array == NULL) {
        return -1;
    }

    int total_weight = 0;

    for (int i = 0; i < count; i++) {
        if (array[i] < 0) {
            return -1;
        }
        total_weight += array[i];
    }

    return total_weight;

}

double average(const int array[], const int count) {

    if (count <= 0 || array == NULL) {
        return -1.0;
    }

    int total_weight = 0;

    for (int i = 0; i < count; i++) {
        if (array[i] < 0) {
            return -1.0;
        }
        total_weight += array[i];
    }

    double average_weight = (double)total_weight / count;

    return average_weight;

}