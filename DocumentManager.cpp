#include"DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit){
    if (documents.find(id) == documents.end()){
        documents[id] = {name, id, license_limit, 0, {}};
        name_to_id[name] = id;
    }
}

void DocumentManager::addPatron(int patronID){
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name){
    if (name_to_id.find(name) != name_to_id.end()){
        return name_to_id[name];
    }
    else {
        return 0;
    }
}
bool DocumentManager::borrowDocument (int docid, int patronID){
    if (documents.find(docid) != documents.end() && patrons.find(patronID) != patrons.end()){
        Document& doc = documents[docid];
        if (doc.borrowed_count<doc.license_limit && doc.borrowers.find(patronID)==doc.borrowers.end()){
            doc.borrowed_count++;
            doc.borrowers.insert(patronID);
            return true;
        }
        else {
            return false;
        }
    }
}

void DocumentManager::returnDocument(int docid, int patronID){
    if(documents.find(docid)!=documents.end()&& patrons.find(patronID)!= patrons.end()){
        Document&doc = documents[docid];
        if(doc.borrowers.find(patronID)!=doc.borrowers.end()){
            doc.borrowed_count--;
            doc.borrowers.erase(patronID);
        }
    }
}