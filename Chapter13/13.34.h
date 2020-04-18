#ifndef __MESSAGE_H__
#define __MESSAGE_H__ 1

#include <iostream>
#include <string>
#include <set>
#include <memory>
#include "13.36.h"

class Folder;

class Message
{
private:
    friend class Folder;

    std::string content;
    std::set<std::shared_ptr<Folder>> folders;

    void add_to_folders();

    void rem_from_folders();

public:
    Message(const std::string &content);
    Message(const Message &msg);
    
    const Message &operator=(const Message &msg);

    ~Message();

    void save(Folder &folder);

    void remove(Folder &folder);
};
#endif