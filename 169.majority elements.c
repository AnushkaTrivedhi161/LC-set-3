int majorityElement(int* nums, int numsSize) {
    int a=nums[0];
    int c=0;
    for(int i=0;i<numsSize;i++)
    {
         if(c==0)
        {
            a=nums[i];
        }
        if(nums[i]==a)
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    return a;
}
