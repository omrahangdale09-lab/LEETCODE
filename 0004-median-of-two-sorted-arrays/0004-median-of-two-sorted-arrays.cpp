class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> s;

        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                s.push_back(nums1[i]);
                i++;
            }else{
                s.push_back(nums2[j]);
                j++;
            }
        }


        while(i < nums1.size()){
            s.push_back(nums1[i]);
            i++;
        }

        while(j < nums2.size()){
            s.push_back(nums2[j]);
            j++;
        }


        int len = s.size();
        int a = len/2;
        double median;
        if(len % 2 == 0){
            median = static_cast <double> (s[a] + s[a-1])/2; 

        }else{
            median = s[a];
        }

        return median;

    }
};