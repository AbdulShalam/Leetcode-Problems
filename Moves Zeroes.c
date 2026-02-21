int moveZeroes(int* nums, int numsSize) {
    int r[numsSize];
    int i, j=0,z=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            r[j]=nums[i];
            j++;
        }
        else
        z++;
    }
    for(i=0;i<z;i++)
    {
        r[j]=0;
        j++;
    }
    for(i=0;i<numsSize;i++)
    {
        nums[i]=r[i];
    }
    return *nums;
}
