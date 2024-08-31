int findClosestNumber(int nums[], int numsSize) {
    int min =nums[0];
    for(int i =0;i<numsSize;i++){
        if(abs(nums[i])<abs(min)){
            min = nums[i];
        }
    if(abs(nums[i])==abs(min) && nums[i]>min){
            min = nums[i]; 
        }
    }
     
    return min;
}
