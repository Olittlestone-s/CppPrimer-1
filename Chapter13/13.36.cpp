#include "13.36.h"
#include "13.34.h"

void Folder::addMsg(Message &msg)
{
    messages.insert(std::shared_ptr<Message>(&msg));
    msg.save(*this);
}

void Folder::remMsg(Message &msg)
{
    messages.erase(std::shared_ptr<Message>(&msg));
    msg.remove(*this);
}