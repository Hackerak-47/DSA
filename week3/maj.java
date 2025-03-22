class Solution {
    public int majorityElement(int[] nums) 
    {
     int c=nums[0];
     int k,i,count=1;
     int d=0;
     d=nums.length;
     for(i=1;i<d;i++)
     {
       if(nums[i]==c)
       {
        count++;
       }
       else
       {
        count--;
         if(count==0)
       {
            c=nums[i];
            count=1;
       }
       }
             
    }
    count=0;   
    for(int num:nums)
       {
        if(num==c)
        {
            count++;
        }
       }
    return count>d/2?c:-1;
    }
}
