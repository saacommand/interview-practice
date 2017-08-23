#include <iostream>
#include <vector>

using namespace std;
class Solution {
    vector<int> numbers;
    int target;
public:
    Solution(vector<int> numbers, int target){}

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(int i = 0 ; i<nums.size(); i ++){
            for(int j = i+1; j <nums.size();j++)
            {
                if(target == (nums[i]+nums[j]))
                {
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }
        return answer;
    }

};

int main()
{
    vector<int> numbers;
    vector<int> answers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    int target = 4;
    Solution Answer(numbers,target);
    answers = Answer.twoSum(numbers,target);
    for(std::vector<int>::const_iterator i = answers.begin(); i!=answers.end(); ++i)
    {
        std::cout<<*i<<' ';
    }
}

