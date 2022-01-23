#pragma once
#include <map>
#include <list>
#include <vector>
#include <string>

// Alphabet of 20 + gap
#define MAX_MEME_COLUMNS 21

using namespace std;
class Meme;
typedef map<string, Meme> MemesMap;
typedef map<string, list<string>*> SequencesMap;
typedef map<char, int> AlphabetMap;
typedef map<string, double> CutoffsMap;
typedef vector<vector<double>> MemeRows;
typedef map<string, double> SequencesCount;
typedef vector<int> ShufflePattern;
typedef vector<ShufflePattern> ShufflePatterns;
typedef map<int, ShufflePatterns> ShufflesMap;
typedef map<string, vector<Meme>> MemeShufflesMap;
typedef map<string, double> MemeRatingMap;
typedef map<string, double> SequencesRpmMap;
