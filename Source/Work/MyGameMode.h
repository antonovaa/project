// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"
/**
 * 
 */
UCLASS()
class WORK_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
public:
		void rwadiusBeetwenObj(int* index_n);

		void Combinatorik(int * M, int n, int N);

		int temp;
		float X0;
		float Y0;
		float *coordss = new float[14];
		int iwndex=0;
		int *index_end = new int[7];
		int *index_new = new int[7];
		float sum_Min_new;
		float sum_Min_end=5555;
		float x1;
		float y1;
		float r1;

		UFUNCTION(BlueprintCallable, Category = "getmin")
		void StartLogic(float x, float y);	

		UPROPERTY(VisibleAnywhere)
			int endSec = 30;

		virtual void Tick(float DeltaTime) override; 


		UFUNCTION(BlueprintCallable, Category = "getmin")
			TArray<int32> StartCalcul(float x, float y);

		UFUNCTION(BlueprintCallable, Category = "getmin")
			float getlebgthall();

};



