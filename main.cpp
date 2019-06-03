#include <iostream>
#include <vector>

int FindOutlier(std::vector<int> arr)
{
    bool even = true;

    if ((arr[0]*arr[1] % 2 != 0) ||
        (arr[0]*arr[2] % 2 != 0) ||
        (arr[1]*arr[2] % 2 != 0)) even = false;

    if (even == false)
    {
      for(auto& i:arr)
      {
        if (i % 2 == 0) return i;
      }
    }
    else
    {
      for(auto& i:arr)
      {
        if (i % 2 != 0) return i;
      }
    }
}

int main()
{
    std::vector<int> v {4, 1, 3, 5, 9};

    std::cout<<FindOutlier(v)<<std::endl;

    return 0;
}
