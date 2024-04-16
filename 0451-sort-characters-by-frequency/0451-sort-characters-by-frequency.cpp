class Solution {
public:
    string frequencySort(string s) {
       int arr[256]={0};
        int maxi;
        string result;
       for(int i=0;i<s.length();i++){
           arr[s[i]]++;
       }
       maxi=findmax(arr); 
        while(maxi>0){
            for(int i=0;i<256;i++){
                if(arr[i]==maxi){
                  result.append(arr[i],i);
                }
            }
            maxi--;
        }
        
        return result;
    }
    
    int findmax(int arr[]){
    int maximum=0;
    for(int i=0;i<256;i++){
        maximum=max(maximum,arr[i]);
    }
    return maximum;
}
};
 
