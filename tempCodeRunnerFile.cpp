void merge(vector<int> arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int originalArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[originalArrayIndex++];
    }

    originalArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[originalArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    originalArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[originalArrayIndex++] = first[index1++];
        }
        else
        {
            arr[originalArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[originalArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[originalArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(vector<int> &arr, int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    mergeSort(arr, len1);
    mergeSort(arr, len2);

    merge(arr, start, end);
}

int main(int argc, char const *argv[])
{
    
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }


    mergeSort(arr, arr.size());

    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
