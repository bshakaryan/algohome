#include <bits/stdc++.h>

using namespace std;

int mn_fun (int x, int y) { //O(1)
  return x < y ? x : y;
}

void task1 () { //O(N)
  int n, a[110];
  cin >> n;
  int mn = 999999;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    mn = mn_fun(mn, a[i]);
  }
  cout << mn;
}

void task2 () { //O(N)
  int n;
  cin >> n;
  double a[110], sum = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  cout << sum / n;
}

bool check_prime (int x) { //O(sqrt(N))
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
}

void task3 () { //O(sqrt(N))
  int n;
  cin >> n;
  if (check_prime(n)) {
    cout << "Prime";
  }
  else {
    cout << "Composite";
  }
}

int fact (int x) { //O(N)
  if (x == 0)
    return 1;
  return fact(x - 1) * x;
}

void task4 () { //O(N)
  int n;
  cin >> n;
  cout << fact(n);
}

int fib (int x) { //O(2^N)
  if (x == 0) {
    return 0;
  }
  if (x == 1) {
    return 1;
  }
  return fib(x - 1) + fib(x - 2);
}

void task5 () { //O(2^N)
  int n;
  cin >> n;
  cout << fib(n);
}

int binpow (int x, int y) { //O(log(N))
  if (y == 0) {
    return 1;
  }
  if (y == 1) {
    return x;
  }
  if (y % 2 == 0) {
    int z = binpow(x, y / 2);
    return z * z;
  }
  else {
    return binpow(x, y - 1) * x;
  }
}

void task6 () { //O(log(N))
  int a, n;
  cin >> a >> n;
  cout << binpow (a, n);
}

void perm (int n, string t) { //O(N!)
  if (t.size() == n) {
    cout << t + '\n';
    return;
  }
  for (int i = 0; i < n; i++) {
    if (!u[i]) {
      u[i] = true;
      perm (n, t + s[i]);
      u[i] = false;
    }
  }
}

void task7 () { //O(N!)
  string s;
  cin >> s;
  perm (s);
}

bool check_digit (char c) { //O(1)
  if ('0' <= c && c <= '9') {
    return true;
  }
  return false;
}

void task8 () { //O(N);
  string s, ans = "Yes";
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (!check_digit(s[i])) {
      ans = "No";
    }
  }
  cout << ans;
}

int gcd_fun (int x, int y) { //O(log(min(X, Y)))
  if (x == 0 || y == 0) {
    return x + y;
  }
  if (x > y) {
    return gcd_fun (x % y, y);
  }
  else {
    return gcd_fun (x, y % x);
  }
}

int bincf (int x, int y) { //O(2^N)
  if (y == 0|| x == y) {
    return 1;
  }
  return bincf(x - 1, y - 1, z) + bincf(x - 1, y, z);
}

void task9 () { //O(2^N)
  int a, b;
  cin >> a >> b;
  cout << bincf (a, b, a);
}

void task10 () { //O(log(min(A, B)))
  int a, b;
  cin >> a >> b;
  cout << gcd_fun(a, b);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  //task1();
  //task2();
  //task3();
  //task4();
  //task5();
  //task6();
  //task7();
  //task8();
  //task9();
  //task10();
}
