# lab3

QuestionA
宣告出一個vector,讓他去儲存n頭牛的重量,
再利用sort()函式將接收到的數字由小排到大,
之後用一個for迴圈,從第n-1格(vector)一直加到第n-6格
如此把前五重的牛重量相加,最後輸出加完的結果


QuestionB		      

1000	    10000     100000   	1000000 

(nlogn) sort() (seconds):	0.000164	0.00216	  0.026709	0.303657

(n^2)  insert()(seconds):	0.007999	0.768312 	76.6689	  7200.65

依據結果發現,執行sort()所需的時間小於insert function所需的時間,
且當所需排序的個數越大時,兩者的時間差也越大,
明顯看出O(nlogn)及O(n^2)所需時間的差異
