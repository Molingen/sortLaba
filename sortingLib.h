#pragma once


void swap(double * a, double * b);

void bubbleSort(double * arr, int n);

void insertSort(double * arr, int n);

void selectionSort(double * arr, int n);


int partitionLomuto(double * arr, int low, int high);

void quickSortL(double * arr, int left, int right);

int partitionHoare(double * arr, int left, int right);

void quickSortH(double * arr, int left, int right);