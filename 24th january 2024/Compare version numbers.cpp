class Solution {
public:
    int compareVersion(string version1, string version2) {
        int a=version1.size(),b=version2.size(),i,c;
        string str;
        vector<int> x,y;
        for(i=0;i<a;i++){
            if(version1[i]=='.'){
                c=stoi(str);
                x.emplace_back(c);
                str="";
                continue;
            }
            str+=version1[i];
        }
        c=stoi(str);
        x.emplace_back(c);
        str="";
        for(i=0;i<b;i++){
            if(version2[i]=='.'){
                c=stoi(str);
                y.emplace_back(c);
                str="";
                continue;
            }
            str+=version2[i];
        }
        c=stoi(str);
        y.emplace_back(c);

        int p=x.size(),q=y.size();
        for(i=0;i<abs(p-q);i++){
        if(p<q) x.emplace_back(0);
        else y.emplace_back(0);
        }
        
        for(i=0;i<x.size();i++){
            if(x[i]<y[i]) return -1;
            if(x[i]>y[i]) return 1;
        }
        return 0;
    }
};