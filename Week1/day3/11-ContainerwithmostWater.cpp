class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0,e=height.size()-1;
        int maxarea=0;
        while(s<e){
            int minheight=min(height[s],height[e]);
            maxarea=max(maxarea,minheight*(e-s));
            if(height[s]<height[e]){
                s++;
            }else{
                e--;
            }
        }
        return maxarea;
    }
};