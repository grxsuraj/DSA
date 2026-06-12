class Solution {
public:
    int numberOfSteps(int num) {
        
        int steps=0;

        while(num>0){
            //we take while because we don't know how much step we required to reach the zero.

            if(num%2==0){
                num=num/2;
            }
            else{
                num=num-1;
            }
            steps++;
        }
        return steps;
        
    }
};