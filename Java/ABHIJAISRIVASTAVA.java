import java.util.*;
class frequency
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        test obj=new test();
        obj.accept();
        obj.split();
        obj.display();
    }
}

class test
{
    String para="";
    int l=0;
    int j=0;
    static String a;static String b;String s="";
    String arr[]; String brr[];
    int l1, l2,q=1;
    static char ch1, ch2;
    public void accept()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string");
        para=sc.nextLine();
        l=para.length(); int c=0;
        ch1=para.charAt(l-1);
        if(ch1=='.' || ch1=='?' || ch1=='!')
        {
            for(int i=0; i<l-1; i++)
            {
                ch2=para.charAt(i);
                if(ch2=='.' || ch2=='?' || ch2=='!')
                {
                    j=i;

                    c++;
                }
            }
            if(c==0)
            {
                System.out.println("INVALID INPUT");
                System.exit(0);
            }

        }
        else
        {
            System.out.println("INVALID INPUT");
            System.exit(0);
        }
    }

    public void split()
    {
        a=para.substring(0,j);
        b=para.substring(j+2, l-1);
        a=a.toUpperCase();
        b=b.toUpperCase();
        para=para.toUpperCase();
        StringTokenizer st1= new StringTokenizer(a, " ");
        StringTokenizer st2= new StringTokenizer(b, " ");
        l1=st1.countTokens(); 
        l2=st2.countTokens();
        arr=new String[l1];
        brr=new String[l2];
        int x=0; int y=0;

        while(st1.hasMoreTokens())
        {
            arr[x]=st1.nextToken();
            x++;
        }

        while(st2.hasMoreTokens())
        {
            brr[y]=st2.nextToken();
            y++;
        }
    }

    public void display()
    {
        System.out.println(para.substring(0, j) + para.charAt(j) + "\n" + para.substring(j+2, l-1) + ch1);
        int freq=1,flag=0;
        for (int i=0;i<l1;i++)
        {
            if (arr[i].compareTo(s)==0)
            {
                i++;
            }
            for (int j=i+1;j<l1;j++)
            {
                if (arr[i].compareTo(arr[j])==0)
                {
                    freq++;
                }
            }
            
            for (int k=0;k<l2;k++)
            {
                if (arr[i].compareTo(brr[k])==0)
                {
                    freq++;
                }
            }
            
            if (freq>1) 
            {
                if (q==1)
                {
                    System.out.println("COMMON WORDS"+"\t"+"FREQUENCY");
                    flag=1;
                    s="MY";
                }
                q++;
                System.out.println(arr[i]+"\t"+freq);
                freq=1;
            }
    
        }
        if(flag==0)
            {
                System.out.println("NO COMMON WORDS");
            }
    }
}
