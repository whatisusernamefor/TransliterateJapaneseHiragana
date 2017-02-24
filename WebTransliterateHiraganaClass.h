#ifndef WEBTRANSLITERATEHIRAGANACLASS_H
#define WEBTRANSLITERATEHIRAGANACLASS_H

class WebTransliterateHiraganaClass
{
      public: 
          WebTransliterateHiraganaClass();
          ~WebTransliterateHiraganaClass();

           int posOfHiragana(unsigned char hiraganaText[], const int offset);
           void singleWebHiragana(char Array[7][3]);
           void doubWebHiragana(unsigned char Array[15][15]);
           void tripleWebHiragana(unsigned char Array[8][30]); // 7+1 added 'dya~' 5/23/2016
           void smallWebHiragana(unsigned char Array[10][3]);
           char *pConvertToHiraganaText(char romanizedText[]);
           void pConvertToRomanText(unsigned char hiraganaText[]); // Hiragana to Romanji
           unsigned short int isVowel(char); 
           void writeFirstBytes(char nameOfFile[]);
           void writeKANA();
           
           void pause();
           void pause(char []);
           void pause(int);
          
};
#endif
