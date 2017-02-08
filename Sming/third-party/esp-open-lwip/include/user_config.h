#ifndef _USER_CONFIG_LWIP_
#define _USER_CONFIG_LWIP_

#ifdef __cplusplus
extern "C" {
#endif

typedef signed short        sint16_t;

void *ets_bzero(void *block, size_t size);
bool ets_post(uint32_t prio, ETSSignal sig, ETSParam par);
void ets_task(ETSTask task, uint32_t prio, ETSEvent * queue, uint8 qlen);

void system_pp_recycle_rx_pkt(void *eb);

#ifndef MEMLEAK_DEBUG
	extern void *pvPortMalloc( size_t xWantedSize );
	extern void vPortFree( void *pv );
	extern void *pvPortZalloc(size_t size);
#else
	extern void *pvPortMalloc(size_t xWantedSize, const char *file, uint32 line);
	extern void *pvPortZalloc(size_t xWantedSize, const char *file, uint32 line);
	extern void vPortFree(void *ptr, const char *file, uint32 line);

	extern void pvPortFree(void *ptr);
	extern void *vPortMalloc(size_t xWantedSize);
#endif /*MEMLEAK_DEBUG*/


	extern void *pvPortCalloc(unsigned int n, unsigned int count);
	extern void *pvPortRealloc(void * p, size_t size);
	extern size_t xPortGetFreeHeapSize(void);
//	extern void prvHeapInit(void) ICACHE_FLASH_ATTR ;

#ifdef __cplusplus
}
#endif

#endif /*_USER_CONFIG_LWIP_*/