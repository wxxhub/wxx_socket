#include <iostream>
#include "wxx_socket/tcp_server.h"

using namespace wxx_socket;

int main()
{
    std::cout<<"Hello World"<<std::endl;
    TCPServer server;
    bool set_result = server.setServer(true, 8888);

    if (!set_result)
    {
        printf("set server failed!\n");
        return 0;
    }

    while (true)
    {
        // char* message;
        printf("send:");
        // scanf("%s", &message);
        // server.sendMessage(message);
        boost::this_thread::sleep(boost::posix_time::seconds(60)); 
    }
    
}