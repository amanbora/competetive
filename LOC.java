
import java.util.Scanner;
class LOC
{
  static Scanner in=new Scanner(System.in);
  public static void main(String[] args){
    int n=in.nextInt();

    String arr[]=new String[n];

    for(int i=0;i<n;i++){
      arr[i]=in.nextLine();
    }

    int q=in.nextInt();


    for(int i=0;i<q;i++){
       int x=0;
       int l=in.nextInt()-1;
       int r=in.nextInt()-1;
       int c=in.nextInt()-1;
       String p=in.nextLine();
       char t=p.charAt(0);
       for(int j=l;j<=r;j++){
         if((arr[j].charAt(c))==t)
           x++;
       }


    System.out.print(x);
    System.out.print("\n");
}

    }
  }
