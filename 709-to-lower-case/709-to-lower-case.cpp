class Solution {
 public:
  string toLowerCase(string str) {        
    for (char& c : str) {
        if (c >= 'A' && c <= 'Z') c += 32;
    }
    return str;
}
};


/*
class Solution {
 public:
  string toLowerCase(string str) {
    const int diff = 'a' - 'A';

    for (char& c : str)
      if (c >= 'A' && c <= 'Z') c += diff;

    return str;
  }
};

*/