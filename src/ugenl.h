#ifndef _UGENL_H_
#define _UGENL_H_

enum {
	IPR_ATTR_UNSPEC,
	IPR_ATTR_OK,
	IPR_ATTR_IP,
	IPR_ATTR_MASK,
	__IPR_ATTR_MAX,
};
#define IPR_ATTR_MAX (__IPR_ATTR_MAX - 1)

enum {
	IPR_CMD_UNSPEC,
	IPR_CMD_REPLY,
	IPR_CMD_ADD_ROUTE,
	IPR_CMD_DELETE_ROUTE,
	IPR_CMD_DELETE_MATCH_ROUTE,
	IPR_CMD_FIND_ROUTE,
	IPR_CMD_CLEAR_ROUTE,
	IPR_CMD_SHOW_ROUTE,
	__IPR_CMD_MAX,
};
#define IPR_CMD_MAX (__IPR_CMD_MAX - 1)

#endif
