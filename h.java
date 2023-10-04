import java.util.*;
class Invalidayexception extends Exception{
	public  String toString(){
		return "Invalio day\n";
	}
}
class InvalidmonthException extends Exception{
	public String toString(){
		return "Invalid Month\n";
	}
}
class currentdate{
	
	void createdata(int day,int month,int year)throws Invalidayexception,InvalidmonthException{
		if(day<=0 || day>31)
		{
			throw new Invalidayexception();
		}
		if(month <=0 || month>12)
		{
			throw new InvalidmonthException();
		}
		System.out.println(day+"/"+month+"/"+year);
	}
}
class h{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int day;
		int month;
		int year;
		currentdate a[]=new currentdate[n];
		for(int i=0;i<n;i++)
		{
			a[i]=new currentdate();
			day=sc.nextInt();
			month=sc.nextInt();
			year=sc.nextInt();
			try{
				a[i].createdata(day,month,year);
			}
			
		}
		catch(Invalidayexception ob){
			System.out.println(ob);
		}
		catch(InvalidmonthException ob){
			System.out.println(ob);
		}
		sc.close();
	}
}