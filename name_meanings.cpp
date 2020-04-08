/*
Author : Dipansh Parmar,
Program name : Name meanings,
Date : 8 April 2020
*/



#include <iostream>
#include <ctime>
using namespace std;


void words_generator(string name) {

    // making input characters in lower case
    for(int i = 0; i < name.length(); i++) {
        if(name[i] == 'A') {
            name[i] = 'a';
            continue;
        } else if(name[i] == 'B') {
            name[i] = 'b';
            continue;
        } else if(name[i] == 'C') {
            name[i] = 'c';
            continue;
        } else if(name[i] == 'D') {
            name[i] = 'd';
            continue;
        } else if(name[i] == 'E') {
            name[i] = 'e';
            continue;
        } else if(name[i] == 'F') {
            name[i] = 'f';
            continue;
        } else if(name[i] == 'G') {
            name[i] = 'g';
            continue;
        } else if(name[i] == 'H') {
            name[i] = 'h';
            continue;
        } else if(name[i] == 'I') {
            name[i] = 'i';
            continue;
        } else if(name[i] == 'J') {
            name[i] = 'j';
            continue;
        } else if(name[i] == 'K') {
            name[i] = 'k';
            continue;
        } else if(name[i] == 'L') {
            name[i] = 'l';
            continue;
        } else if(name[i] == 'M') {
            name[i] = 'm';
            continue;
        } else if(name[i] == 'N') {
            name[i] = 'n';
            continue;
        } else if(name[i] == 'O') {
            name[i] = 'o';
            continue;
        } else if(name[i] == 'P') {
            name[i] = 'p';
            continue;
        } else if(name[i] == 'Q') {
            name[i] = 'q';
            continue;
        } else if(name[i] == 'R') {
            name[i] = 'r';
            continue;
        } else if(name[i] == 'S') {
            name[i] = 's';
            continue;
        } else if(name[i] == 'T') {
            name[i] = 't';
            continue;
        } else if(name[i] == 'U') {
            name[i] = 'u';
            continue;
        } else if(name[i] == 'V') {
            name[i] = 'v';
            continue;
        } else if(name[i] == 'W') {
            name[i] = 'w';
            continue;
        } else if(name[i] == 'X') {
            name[i] = 'x';
            continue;
        } else if(name[i] == 'Y') {
            name[i] = 'y';
            continue;
        } else if(name[i] == 'Z') {
            name[i] = 'z';
            continue;
        }

    }

    // array to store alphabet A words
    string a_meaning[44] = {"Adorable", "Admirable", "Attentive", "Amrendra Bahubali", "Animal Lover", "Amazing nature", "Arrogant", "Active everytime", "Aloo chat lover", "Affectionate", "Attentive nature", "Attractive soul", "Advanced girl/boy", "Athletic", "Amazing", "Adventorous", "Aggressive nature", "Artistic", "Angry young girl", "Accurate figure", "Attractive personality", "Angry young boy/girl", "Attrangi", "Attitude wala munda/kudi", "Awesome personality", "Amazing guy/girl", "Aalsi", "Always helpful", "Akdu", "Angelic", "Angel", "Attitude", "Aspiring mind", "Always hungry", "Aaj ka Arjun", "Antique piece", "Awesome", "Angry launda", "Apple lover", "Attractive personality", "Active everytime", "Attractive soul", "Atrangi Baalak/Baalika", "Ambitious"};

    // array to store alphabet B words
    string b_meaning[10] = {"Baby ka Babu", "Bright future", "Bhalu", "Bhola", "Bahubali", "Bimaar", "Bimal khaane wala", "Brave girl/guy", "Bhukkad", "Book worm"};

    // array to store alphabet C words
    string c_meaning[5] = {"Cute guy/girl", "Cement ki shakti", "Chandarmukhi/Chandarmukha", "Cutiepie", "Chichora/Chichori"};

    // array to store alphabet D words
    string d_meaning[10] = {"Don", "Daringbaaz", "Daring boy", "Dancer", "Doggy lover", "Dashing", "Day dreamer", "Dance lover", "Descent", "Dashing munda"};

    // array to store alphabet D words
    string e_meaning[6] = {"Emotional", "Explosive", "Energetic", "Exciting", "Entertaining", "Empty mind"};

    // array to store alphabet F words
    string f_meaning[3] = {"favourite of everyone", "Fabulous guy/girl", "Fukra"};

    // array to store alphabet G words
    string g_meaning[15] = {"Gorgeous", "Gunda", "Gyaani", "Gadha", "Gapodiya", "Gussebaaz", "Gabbar", "Glorious guy", "Gabru", "Geet kaar", "Gambler", "Gamer", "Gobar", "Gareeb", "Girl boss"};

    // array to store alphabet H words
    string h_meaning[10] = {"Hotty", "Helpful", "Highly valueable", "Honest", "Humble nature", "Hard working", "Hungry everytime", "Heroic", "Handsome guy", "High class"};

    // array to store alphabet I words
    string i_meaning[15] = {"Innocent", "Impressive nature", "Innovative", "Inspirational", "Intelligent", "Impressive personality", "Intresting", "Instagram lover", "Ideal", "Inspiring", "Intelligent guy/girl", "Idiot", "Ice cream lover", "Iconic", "Illuminati"};

    // array to store alphabet J words
    string j_meaning[8] = {"Jabra", "Joyful", "Jolly nature", "Jameendaar", "Joker", "joode wala", "Jailor", "Jeevan data"};

    // array to store alphabet K words
    string k_meaning[14] = {"Kanya kumari", "Khatron ka khiladi", "Killer look", "Killer guy/girl", "King of your own", "kind hearted", "King of queen", "Killer", "Killer smile", "King's daughter/son", "Kamina", "Kind nature", "King", "Karma believer"};

    // array to store alphabet L words
    string l_meaning[15] = {"Loyal", "Lover", "Lonely", "Lallantop", "Loved someone", "Lovely girl/guy", "Lusty", "Lucky girl/guy", "Lazy", "Lost in love", "Lovely person", "Lovable", "Loyal gir;/guy", "Lucky", "Lots of friends"};

    // array to store alphabet M words
    string m_meaning[12] = {"Mental girl/guy", "Moh maya mukt", "Mind blowing guy/girl", "Master mind", "Macho man", "Music lover", "Movie lover", "Modern", "Mentor", "Mind blowing guy", "Manchali", "Maa ka ladla"};

    // array to store alphabet N words
    string n_meaning[14] = {"Nature lover", "Nakhrebaaz", "Nautankibaaz", "Native look", "Nicely hearted", "Naughty mind", "Nallo ka sahara", "Namooni", "Nakhrili/Nakhrila", "Naughty khopdi", "New fashioned", "Noble nature", "Nalayak", "Neta ji"};

    // array to store alphabet O words
    string o_meaning[4] = {"Outstanding", "Open minded", "Open hearted", "Owl"};

    // array to store alphabet P words
    string p_meaning[21] = {"Pagal", "Pizza lover", "Pretty face", "Papa's favorite", "Pet lover", "Pretty girl", "PUBG master", "Player", "Possessive", "Pure soul", "PUBG champion", "Perfectionist", "Pari's boy", "Pretty guy", "Prince", "Powerful guy", "Positive behaviour", "prettiest", "Papa ki pari", "Powerful", "Productive"};

    // array to store alphabet Q words
    string q_meaning[2] = {"Queen", "Quiz God/Goddess"};

    // array to store alphabet R words
    string r_meaning[19] = {"Realistic", "Romantic", "Refreshing", "Romantic guy/girl", "Rare product", "Rocking", "Responsible bnda/bndi", "Rani/Raja", "Reader", "Romio's Juliet", "Romio", "Ruler", "Raaton ka malik", "Rocking munda", "Ram", "Ravan", "Runner", "Rare maal", "Reputable"};

    // array to store alphabet S words
    string s_meaning[24] = {"Strong personality", "Secret lover", "Spicy combination", "Salman's phone", "Sexy guy/girl", "Sensitive person", "Smily face", "Strong guy/girl", "Secret superstar", "Shimla lover", "Sanskaari baalak", "Sweet nature", "Super duper guy/girl", "Sakht launda", "Sanyaasi bawa", "Sleepy head", "sahanshah", "Sabka pyaara", "Sexy figure", "Smart girl", "Short tempered", "Sweet", "Super man", "Singer"};

    // array to store alphabet T words
    string t_meaning[6] = {"Tea lover", "Talented", "Talkative", "Thrilled", "Trustable", "Tension less"};

    //array to store alphabet U words
    string u_meaning[7] = {"Uncommon", "Unique mind", "Unique", "Ultimate", "Universal smile", "Unlimited happiness", "Unique item"};

    // array to store alphabet V words
    string v_meaning[10] = {"Visiting lover", "Verbal expert", "Vampire", "Valuable", "Veer balak/baalika", "Volleyboll player", "Very helpful", "Very positive", "Very caring", "Vishal hirdya"};

    // array to store alphabet W words
    string w_meaning[2] = {"Watch lover", "Waqt ka pkka"};

    // array to store alphabet X words
    string x_meaning[3] = {"X-man", "X lover", "X box lover"};

    // array to store alphabet Y words
    string y_meaning[5] = {"Yaaron ka yaar", "Yamaha lover", "Yamraj", "Young", "Young blood"};

    // array to store alphabet Z words
    string z_meaning[4] = {"Zoo lover", "Zhandu aadmi", "Zehar aadmi", "Zoru ka gulaam"};


    // checking existance os chars in names
    for(char i : name) {
        if(i == 'a') {
            cout << "A : " << a_meaning[rand() % (sizeof(a_meaning) / sizeof(a_meaning[0]))] << endl;
            continue;
        } else if(i == 'b') {
            cout << "B : " << b_meaning[rand() % (sizeof(b_meaning) / sizeof(b_meaning[0]))] << endl;
            continue;
        } else if(i == 'c') {
            cout << "C : " << c_meaning[rand() % (sizeof(c_meaning) / sizeof(c_meaning[0]))] << endl;
            continue;
        } else if(i == 'd') {
            cout << "D : " << d_meaning[rand() % (sizeof(d_meaning) / sizeof(d_meaning[0]))] << endl;
            continue;
        } else if(i == 'e') {
            cout << "E : " << e_meaning[rand() % (sizeof(e_meaning) / sizeof(e_meaning[0]))] << endl;
            continue;
        } else if(i == 'f') {
            cout << "F : " << f_meaning[rand() % (sizeof(f_meaning) / sizeof(f_meaning[0]))] << endl;
            continue;
        } else if(i == 'g') {
            cout << "G : " << g_meaning[rand() % (sizeof(g_meaning) / sizeof(g_meaning[0]))] << endl;
            continue;
        } else if(i == 'h') {
            cout << "H : " << h_meaning[rand() % (sizeof(h_meaning) / sizeof(h_meaning[0]))] << endl;
            continue;
        } else if(i == 'i') {
            cout << "I : " << i_meaning[rand() % (sizeof(i_meaning) / sizeof(i_meaning[0]))] << endl;
            continue;
        } else if(i == 'j') {
            cout << "J : " << j_meaning[rand() % (sizeof(j_meaning) / sizeof(j_meaning[0]))] << endl;
        } else if(i == 'k') {
            cout << "K : " << k_meaning[rand() % (sizeof(k_meaning) / sizeof(k_meaning[0]))] << endl;
	        continue;
            continue;
        } else if(i == 'l') {
            cout << "L : " << l_meaning[rand() % (sizeof(l_meaning) / sizeof(l_meaning[0]))] << endl;
            continue;
        } else if(i == 'm') {
            cout << "M : " << m_meaning[rand() % (sizeof(m_meaning) / sizeof(m_meaning[0]))] << endl;
            continue;
        } else if(i == 'n') {
            cout << "N : " << n_meaning[rand() % (sizeof(n_meaning) / sizeof(n_meaning[0]))] << endl;
            continue;
        } else if(i == 'o') {
            cout << "O : " << o_meaning[rand() % (sizeof(o_meaning) / sizeof(o_meaning[0]))] << endl;
            continue;
        } else if(i == 'p') {
            cout << "P : " << p_meaning[rand() % (sizeof(p_meaning) / sizeof(p_meaning[0]))] << endl;
            continue;
        } else if(i == 'q') {
            cout << "Q : " << q_meaning[rand() % (sizeof(q_meaning) / sizeof(q_meaning[0]))] << endl;
            continue;
        } else if(i == 'r') {
            cout << "R : " << r_meaning[rand() % (sizeof(r_meaning) / sizeof(r_meaning[0]))] << endl;
            continue;
        } else if(i == 's') {
            cout << "S : " << s_meaning[rand() % (sizeof(s_meaning) / sizeof(s_meaning[0]))] << endl;
            continue;
        } else if(i == 't') {
            cout << "T : " << t_meaning[rand() % (sizeof(t_meaning) / sizeof(t_meaning[0]))] << endl;
            continue;
        } else if(i == 'u') {
            cout << "U : " << u_meaning[rand() % (sizeof(u_meaning) / sizeof(u_meaning[0]))] << endl;
            continue;
        } else if(i == 'v') {
            cout << "V : " << v_meaning[rand() % (sizeof(v_meaning) / sizeof(v_meaning[0]))] << endl;
            continue;
        } else if(i == 'w') {
            cout << "W : " << w_meaning[rand() % (sizeof(w_meaning) / sizeof(w_meaning[0]))] << endl;
            continue;
        } else if(i == 'x') {
            cout << "X : " << x_meaning[rand() % (sizeof(x_meaning) / sizeof(x_meaning[0]))] << endl;
            continue;
        } else if(i == 'y') {
            cout << "Y : " << y_meaning[rand() % (sizeof(y_meaning) / sizeof(y_meaning[0]))] << endl;
            continue;
        } else if(i == 'z') {
            cout << "Z : " << z_meaning[rand() % (sizeof(z_meaning) / sizeof(z_meaning[0]))] << endl;
            continue;
        }
    }


}


int main() {

    srand(time(NULL));

    string name;

    cout << "Please enter name : ";
    getline(cin, name);

    words_generator(name);


    return 0;
}
