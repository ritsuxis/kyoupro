# kyoupro
競技プログラミング進捗

競技プログラミング（主にAtCoder）で解いた問題を管理

進捗状況:  
ABC A:155/155 B:155/155 C:115/155 D:11/155 E:2/30 F0/30  
ARC A:40/103 B:0/103 C:1/103 D:0/103  
AGC A:1/41 B:0/41 C:0/41 D:0/41 E:0/41 F:0/41

Rating 733 (2020/02/09 Now)  
AtCoder アカウント
https://atcoder.jp/users/seiritsu

メモ:  
abc147C -> bit全探索  
Pythonは文字列操作に便利   
桁DPをする(abc155e, yukicoder No.636)  
map<string, int> mp に対してmp[s]++ と入れたときにsがキーの中に無かったらC++はいいように解釈してmp(s, 1)を作ってくれる  
範囲for ex) for(auto i : mp)  
二分探索  
char組み合わせてstringにしたい時 char tmp = 'a'; string s = {tmp, 'bc'}; // "abc"になる  
構造体のvectorに代入したい時とかpush_backに複数の要素を入れたい時は{}で囲んで順番通りに入れてやるといい感じに入れてくれる G[s].push_back({t, d});  
ある範囲に同じ数字を入れたい時 ex) fill(a, a + v, INF)
２次元配列の宣言 vector<vector<int>> dp(3100, vector<int>(3100));