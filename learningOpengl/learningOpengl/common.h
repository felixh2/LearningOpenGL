#pragma once
#include <stdint.h>

class cYoni {
public:
	cYoni() = delete;
	cYoni(uint8_t nData): m_Data(nData) {};

	static uint8_t pow2(uint8_t ndata) {
		return ndata * ndata;
	};

	uint8_t getValue() const {
		return m_Data;
	};
protected:
	uint8_t m_Data = (uint8_t)(-1);
};