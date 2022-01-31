public class StudentClass{
	public static void main(String[] args) {
		int []inp={31,35,35,40,50,66,69,69,70,70,70,78,78,85,88,90,90};
		int key =70;
		int cnt =count(inp,key);

		if(cnt ==0) 
			System.out.println("Not found");
		else
			System.out.println( cnt+" students");
	}

	private static int count(int ip[],int key){
		int low ,high,mid,cnt=0;
		low=0;
		high=ip.length;
		mid=(low+high)/2;
		while((low<high) && (ip[mid] !=key)){
			if(ip[mid] > key ){
				high =mid-1;
			}
			else low=mid+1;
			mid=(low+high)/2;
		}

		if(ip[mid] == key){
			cnt++;
			low=mid-1;
			while((low >= 0) && (ip[low] == key)){
				cnt++;low--;
			}
			high=mid+1;
			while((high < ip.length) && (ip[high] == key)){
				cnt++;high++;
			}
		}
		return cnt;
	}
}