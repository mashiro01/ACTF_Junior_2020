#include <stdio.h>
#include <cstring>
using namespace std;
bool chk(char * inp){
    if(+95*inp[0]-20*inp[1]+12*inp[2]+84*inp[3]-45*inp[4]+1*inp[5]+97*inp[6]+58*inp[7]-85*inp[8]+0*inp[9]!=12613) return false;
    if(-15*inp[0]-86*inp[1]-41*inp[2]-115*inp[3]-66*inp[4]-81*inp[5]-122*inp[6]-30*inp[7]-70*inp[8]+30*inp[9]!=-54400) return false;
    if(-41*inp[0]+78*inp[1]-89*inp[2]+48*inp[3]+31*inp[4]+108*inp[5]-64*inp[6]+120*inp[7]-120*inp[8]-103*inp[9]!=-10283) return false;
    if(+79*inp[0]+85*inp[1]-111*inp[2]-30*inp[3]+99*inp[4]+128*inp[5]+71*inp[6]-119*inp[7]+48*inp[8]-16*inp[9]!=22855) return false;
    if(-98*inp[0]+22*inp[1]-69*inp[2]+10*inp[3]-117*inp[4]+99*inp[5]-19*inp[6]+122*inp[7]+23*inp[8]+5*inp[9]!=-2944) return false;
    if(-85*inp[0]+124*inp[1]-82*inp[2]-11*inp[3]-8*inp[4]-60*inp[5]+95*inp[6]-23*inp[7]+100*inp[8]-54*inp[9]!=-2222) return false;
    if(-57*inp[0]+41*inp[1]+73*inp[2]-18*inp[3]+26*inp[4]-111*inp[5]+16*inp[6]+77*inp[7]-63*inp[8]-83*inp[9]!=-13258) return false;
    if(-85*inp[0]+80*inp[1]+60*inp[2]+85*inp[3]+95*inp[4]-121*inp[5]-104*inp[6]+66*inp[7]-48*inp[8]+81*inp[9]!=-1559) return false;
    if(+18*inp[0]-28*inp[1]+90*inp[2]-101*inp[3]-83*inp[4]+117*inp[5]+7*inp[6]-1*inp[7]-85*inp[8]+101*inp[9]!=6308) return false;
    if(+58*inp[0]-93*inp[1]-9*inp[2]+6*inp[3]-127*inp[4]-18*inp[5]+93*inp[6]+5*inp[7]-28*inp[8]+99*inp[9]!=-1697) return false;
    return true;
}
void build(char *inp,char *ret){
    int res1=9,tmp[10]={0};
    for(unsigned int i=0;i<strlen(inp);++i){
        res1^=inp[i];
    }
    int mark=0;
    while(res1){
        tmp[mark++]=res1%10;
        res1/=10;
    }
    for(int i=0;i<mark;++i){
        ret[i]=tmp[mark-1-i]+'0';
    }
    ret[mark]=0;
}
int main(){
    char flag[100];
    printf("Please give me the key string:");
    scanf("%s",flag);
    if(chk(flag)){
        char ext[20];
        build(flag,ext);
        printf("Judgement pass! flag is actf{%s_%s}\n",flag,ext);
    }
    else{
        printf("False key!\n");
    }
    return 0;
}