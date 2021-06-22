#ifndef ___TPL
#define ___TPL
#include<wp>
using namespace wp;
void getErrorPage_TPL(Request &request,Response &response);
void registerTPLs(WebProjector *server)
{
server->onRequest("/ErrorPage.tpl",getErrorPage_TPL);
}
#endif