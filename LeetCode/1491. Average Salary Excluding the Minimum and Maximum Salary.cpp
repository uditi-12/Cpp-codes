class Solution {
public:
    double average(vector<int>& salary) {
        double avg;
    double min=INT_MAX,max=INT_MIN,sum=0;
        for(int i=0;i<salary.size();i++){
            if(min>salary[i])
                min=salary[i];
            if(max<salary[i])
                max=salary[i];
            sum+=salary[i];
        }
        sum=sum-min-max;
        avg=sum/(salary.size()-2);
        return avg;
    }
};
