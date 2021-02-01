#include <iostream>
#include <vector>
#include <string>

/*
// Exo 3
int add(int a, int b) {
  return a + b;
}

void add_to(int& a, int b) {
  a += b;
}

void another_add_to(int* a, int b) {
  *a += b;
}

int count_a_occurences(const std::string& s);
void update_loop(
    const float& dt, 
    std::string& errors_out);
bool are_all_positives(
    const std::vector<int>& values, 
    int& negative_indices_out, 
    size_t& negative_count_out);
std::string concatenate(
    const char& str1, 
    const char& str2);


int main() {
  const int x{10};
  int y = add(x, x);
  another_add_to(&y, y);
  add_to(y, 2);
  std::cout << y << std::endl;
  
  return 0;
}
*/

//EXO 4

void count_lower(
    const std::string& word, 
    std::vector<unsigned int>& lower
)
{
    for(const auto c: word)
        if((c >= 'a') && (c <= 'z'))
            lower[c - 'a']++;
}

void concatenate(
    std::string& concatenate, 
    const std::string& word
)
{
    if (word.empty()) return;
    concatenate += word;
    concatenate += " ";
}

void display_lower_occ(
    const std::vector<unsigned int>& lower
)
{
    char c = 'a';
    for (auto l : lower)
    {
        std::cout << c << " :" << l << std::endl;
        c ++;
    }
}

int main() 
{
    std::string word;
    std::string conca;
    std::vector<unsigned int> lower(26);
    while (word != "quit"){
        count_lower(word, lower);
        concatenate(conca, word);
        std::cin >> word;
    }
  
    display_lower_occ(lower);
    std::cout << conca << std::endl;
    return 0;
}