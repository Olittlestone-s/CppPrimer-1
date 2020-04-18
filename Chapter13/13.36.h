#ifndef __FOLDER_H__
#define __FOLDER_H__ 1
#include <set>
#include <memory>
#include "13.34.h"
class Message;
class Folder
{
private:
    std::set<std::shared_ptr<Message>> messages;

public:
    Folder() = default;
    ~Folder() = default;

    void addMsg(Message &msg);

    void remMsg(Message &msg);
};
#endif