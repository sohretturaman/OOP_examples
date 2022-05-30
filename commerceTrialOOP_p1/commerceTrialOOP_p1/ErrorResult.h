#pragma once

#include "Result.h"

public class ErrorResult :public Result{
public:

	//ErrorResult();

	ErrorResult(bool success, string message):Result(success,message) {
		success = false; 
		message = nullptr; 
	}

};