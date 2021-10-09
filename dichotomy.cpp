/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int search(int* nums,int numsSize,int target,bool p)
{
    int left=0,right=numsSize-1,an=numsSize;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(nums[mid]>target||(nums[mid]==target&&p))
        {
            right=mid-1;
            an=mid;
        }
        else
        {
            left=mid+1;
        }
    }
    return an;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    int left=search(nums,numsSize,target,true);
    int right=search(nums,numsSize,target,false)-1;
    int *ans=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    if(left<=right&&right<numsSize&&nums[left]==target&&nums[right]==target)
    {
        ans[0]=left;
        ans[1]=right;
        return ans;
    }
    ans[0]=-1;
    ans[1]=-1;
    return ans;
}
