#include<bits/stdc++.h>
using namespace std;
typedef double ll;
class point
{
public:
  ll x1,x2,x3,x4,y1,y2,y3,y4;
  void input()
  {
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  }
  ll midx()
  {
    return (x1+x2+x3+x4)/4;
  }
  ll midy()
  {
    return (y1+y2+y3+y4)/4;
  }
};

int main()
{
  point s,d;
  s.input();
  d.input();
  ll flag=0,ws,wd,diag_d,diag_s,ms,my,dis;
  ws = abs(s.x3 - s.x1);
  wd = sqrt( pow(d.x2 - d.x1,2) + pow(d.y2 - d.y1,2))/2;
  diag_d= (d.x1 == d.x3) ? (d.y1 - d.y3) : (d.x1 - d.x3);
  diag_s = ws/sqrt(2);

  ms = s.midx();
  my = s.midy();

  dis =sqrt(pow(s.midy()-d.midy(),2) + pow(s.midx()-d.midx(),2));
  if(s.x1 < d.x1)
  {
    if(s.x1 + ws >= d.x1)
    {
      if(s.y1 < d.y1)
      {
        if(s.y1 +ws >= d.y1)
        {
          if(((diag_s) + wd > dis) || (ws/2 + diag_d/2 >dis)) flag=1;
        }
      }
      else
      {
        if(s.y1 > d.y1 + wd)
        {}

          else
          {
          if(((diag_s) + wd > dis) || (ws/2 + diag_d/2 >dis)) flag=1;
          }

      }
    }
  }
  else
  {
    if(d.x1 + diag_d >= s.x1)
    {
      if(s.y1 < d.y1)
      {
        if(s.y1 +ws >= d.y1)
        {
          if(((diag_s) + wd > dis) || (ws/2 + diag_d/2 >dis)) flag=1;
        }
      }
      else
      {
        if(s.y1 > d.y1 + wd)
        {}
          else
          {
            if(((diag_s) + wd > dis) || (ws/2 + diag_d/2 >dis)) flag=1; 
          }

      }
    }
  }

  if (flag) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
