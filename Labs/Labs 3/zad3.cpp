#include <iostream>
using namespace std;
/*Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.).
 *Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри.
 *Доколку добиениот декаден збир е делив со 16 се печати Pogodok.
 *Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), се печати Poln pogodok инаку се печати самиот збир.

Пример:

влез: A 7 F 2 0 c A 5

излез: 61

(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)
*/
int main() {

    char ch;
    int suma=0;

    while (cin>>ch) {
        if (ch=='.') {
            break;
        }
        int vrednsot;

        if (ch>='0' && ch<='9') {
            vrednsot=ch-'0';
        }
        else  if (ch>='A' && ch<='F') {
            vrednsot=ch-'A'+10;
        }
        else if (ch>='a' && ch<='f') {
            vrednsot=ch-'a'+10;
        }
        else
            continue;
        suma+=vrednsot;
    }

    if (suma%16==0) {
        if (suma%100==16) {
            cout<<"Poln pogodok"<<endl;
        }
        else
            cout<<"Pogodok"<<endl;
    }
    else
        cout<<suma<<endl;


    return 0;
}