class Solution {
public:
bool caneat(vector<int>& piles, int k, int h)
{
    long long hrs = 0;

    for(int i = 0; i < piles.size(); i++)
    {
        hrs += (piles[i] + k - 1) / k;
    }

    return hrs <= h;
}

int minEatingSpeed(vector<int>& piles, int h)
{
    int maxi = *max_element(piles.begin(), piles.end());

    int l = 1;
    int r = maxi;

    while(l <= r)
    {
        int mid = l + (r - l) / 2;

        if(caneat(piles, mid, h))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return l;
}
};