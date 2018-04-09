#include "def.h"

void ProcesatorNumaraCuvinte::Proceseaza(const char * el) {
		char* pch = NULL;
		char *elem = new char[strlen(el)];
		memcpy(elem, el,strlen(el)+1);
		pch = strtok(elem, del);
		while (pch != NULL) {
			std::string s;
			s = pch;
			if (mp.count(s)==0) {
				mp.insert(std::pair<std::string, int>(s, 1));
			}
			else {
				mp[s]+=1;
			}
			pch = strtok(NULL, del);
		}
}

void ProcesatorNumaraCuvinte::Print() {
	for (auto it : mp) {
		std::cout << it.first << ": " << it.second << std::endl;
	}
}

void ProcesatorNumaraPropozitii::Proceseaza(const char * el) {
	char* pch = NULL;
	char *elem = new char[strlen(el)];
	memcpy(elem, el, strlen(el)+1);
	pch = strtok(elem, del);
	while (pch != NULL) {
		this->count+=1;
		pch = strtok(NULL, del);
	}
}

void ProcesatorNumaraPropozitii::Print() {
	std::cout << this->count << " propozitii.\n";
}

std::vector<const char *>::iterator ListaParagrafe::begin() { return this->vec.begin(); }
std::vector<const char *>::iterator ListaParagrafe::end() { return this->vec.end(); }
void ListaParagrafe::Add(const char * p) {
	this->vec.push_back(p);
}

