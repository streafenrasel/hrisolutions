#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {

  /* Enter your code here */

if (Fireball *s = dynamic_cast<Fireball *>(spell)) 
    {
        s->revealFirepower();
    } 
    else if (Frostbite *s = dynamic_cast<Frostbite *>(spell)) 
    {
        s->revealFrostpower();
    } 
    else if (Thunderstorm *s = dynamic_cast<Thunderstorm *>(spell)) 
    {
        s->revealThunderpower();
    } 
    else if (Waterbolt *s = dynamic_cast<Waterbolt *>(spell)) 
    {
        s->revealWaterpower();
    } 
    else 
    {
        string scroll_name = spell->revealScrollName();
        string journal = SpellJournal::read();
        size_t s_size = scroll_name.size();
        size_t j_size = journal.size();

        if (s_size == 1 && j_size == 1 && scroll_name == journal) 
        {
            cout << 1 << endl;
        } 
        else 
        {
            vector<vector<size_t>> lcs_table(s_size + 1, vector<size_t>(j_size + 1));

            for (size_t i = 1; i <= s_size; ++i) 
            {
                for (size_t j = 1; j <= j_size; ++j) 
                {
                    if (scroll_name[i - 1] == journal[j - 1]) 
                    {
                        lcs_table[i][j] = lcs_table[i - 1][j - 1] + 1;
                    } 
                    else 
                    {
                        lcs_table[i][j] = max(lcs_table[i][j - 1], lcs_table[i - 1][j]);
                    } 
                }
            }
          cout << lcs_table[s_size][j_size] << endl;
        }
    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}
/*
________STREAFEN_0101_RASEL__
________STREAFEN_0101_RASEL__
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
_____________0101010_________
________STREAFEN_0101_RASEL__
________STREAFEN_0101_RASEL__

_____010101_____________________
_0101010101010__________________
010101010101010_________________
01010101010101011_______________
01010101010101010_______________
01010101010101010101010101______
01010101010101010101010101010___
0101010100101010101010101010101_
01010101010101010101010101010101
010101010101010101010101010__01_
01010101010101010100101010101___
01010100101010010101010101______
01010101010101010101010_________
1010101010101010101_____________
01010101010101__________________
101010101_______________________
010101__________________________
10______________________________
*/
