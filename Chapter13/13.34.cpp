#include "13.34.h"
#include "13.36.h"

void Message::add_to_folders()
{
    for (auto &folder : folders)
    {
        folder->addMsg(*this);
    }
}

void Message::rem_from_folders()
{
    for (auto &folder : folders)
    {
        folder->remMsg(*this);
    }
}

Message::Message(const std::string &content = std::string()) : content(content)
{
}

Message::Message(const Message &msg) : content(msg.content), folders(msg.folders)
{
    add_to_folders();
}

const Message &Message::operator=(const Message &msg)
{
    if (this != &msg)
    {
        content = msg.content;
        rem_from_folders();
        folders = msg.folders;
        add_to_folders();
    }
    return *this;
}

Message::~Message()
{
    rem_from_folders();
}

void Message::save(Folder &folder)
{
    folders.insert(std::shared_ptr<Folder>(&folder));
    folder.addMsg(*this);
}

void Message::remove(Folder &folder)
{
    folders.erase(std::shared_ptr<Folder>(&folder));
    folder.remMsg(*this);
}