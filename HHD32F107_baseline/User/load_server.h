#ifndef __LOADSERVER_H__
#define __LOADSERVER_H__

#define MAX_PACKAGE_LEN		1450+10
#define SPI_PORT			2590


enum tcp_work_states
{
  ES_GETINFO = 3,
  ES_FILEINFO,
  ES_SENDDATA,
  ES_CANCEL,

};

void tcp_LoadServer_init(void);


#endif

