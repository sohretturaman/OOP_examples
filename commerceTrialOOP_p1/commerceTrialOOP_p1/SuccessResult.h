#pragma once

#include "Result.h"

public class SuccessResult :public Result {
public:

	//SuccessResult();

	SuccessResult(bool success, string message) :Result(success, message) {
		success = true;
		message = nullptr;
	}

};