int removeDuplicates(int* nums, int numsSize) {
    int i,j,k=1;
    for(i=1;i<numsSize;i++)
    {
        j=i-1;
        if(nums[i]==nums[j])
        {

        }
        else
        {
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}
