#include "Hero.h"

// Ӣ�۴���װ��
void Hero::DressEquip(uint32_t uEquipId)
{
	Goods goods;
	goods.uId = uEquipId;
	m_equipList.push_back(goods);
	return;
}
