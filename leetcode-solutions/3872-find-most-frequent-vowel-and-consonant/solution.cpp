#include<bits/stdc++.h>
class Solution {
public:
    int maxFreqSum(string s) {
        int arr[26];
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-97]+=1;
        }
        int vowel=0;
        if(arr[0]>=arr[4] && arr[0]>=arr[8] && arr[0]>=arr[14] && arr[0]>=arr[20])
        {vowel=arr[0];}
        else if(arr[4]>=arr[0] && arr[4]>=arr[8] && arr[4]>=arr[14] && arr[4]>=arr[20])
        {vowel=arr[4];}
        else if(arr[8]>=arr[0] && arr[8]>=arr[4] && arr[8]>=arr[14] && arr[8]>=arr[20])
        {vowel=arr[8];}
        else if(arr[14]>=arr[0] && arr[14]>=arr[8] && arr[14]>=arr[4] && arr[14]>=arr[20])
        {vowel=arr[14];}
        else if(arr[20]>=arr[0] && arr[20]>=arr[8] && arr[20]>=arr[14] && arr[20]>=arr[4])
        {vowel=arr[20];}
        int consonant=0;
        arr[0]=0;
        arr[4]=0;
        arr[8]=0;
        arr[14]=0;
        arr[20]=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>consonant)
            {
                consonant=arr[i];
            }
        }
        return (vowel+consonant);
    }
};
