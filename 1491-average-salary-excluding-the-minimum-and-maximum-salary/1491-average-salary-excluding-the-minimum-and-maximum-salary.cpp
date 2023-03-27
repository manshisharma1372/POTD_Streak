class Solution {
public:
    double average(vector<int>& salary) {
        
        int min=*min_element(salary.begin(),salary.end());
        
        int maxi=*max_element(salary.begin(),salary.end());
        
        double avg_salary;
        
        auto it= find(salary.begin(),salary.end(),min);
        salary.erase(it);
        
        auto it2=find(salary.begin(),salary.end(),maxi);
        salary.erase(it2);
        double sum=accumulate(salary.begin(),salary.end(),0);
        avg_salary=sum/salary.size();
        return avg_salary;
    }
};