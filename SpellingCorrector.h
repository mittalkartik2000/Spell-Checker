#ifndef _SPELLINGCORRECTOR_H_
#define _SPELLINGCORRECTOR_H_

#include <vector>
#include <map>

class SpellingCorrector
{
private:
	typedef std::vector<std::string> Vector;
	typedef std::map<std::string, int> Dictionary;

	Dictionary dictionary;

	void edits(const std::string& word, Vector& result);
	void known(Vector& results, Dictionary& candidates);

public:
	void load(const std::string& filename);
	std::string correct(const std::string& word);
};

#endif
