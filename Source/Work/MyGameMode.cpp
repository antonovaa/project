// Fill out your copyright notice in the Description page of Project Settings.

#include "Work.h"
#include "MyGameMode.h"


float AMyGameMode::getlebgthall()
{
	return sum_Min_end;
}

void  AMyGameMode::rwadiusBeetwenObj(int* index_n)
{
	 x1 = X0 - coordss[2 * index_n[0]];
	 y1 = Y0 - coordss[2 * index_n[0]+ 1];
	 r1 = x1*x1 + y1*y1;
	sum_Min_new = sqrt(r1);
	for (int i = 0; i < iwndex - 1; i++)
	{

		 x1 = coordss[2*index_n[i]] - coordss[2*index_n[i + 1]];
		 y1 = coordss[2*index_n[i]+1] - coordss[2*index_n[i + 1]+1];
		 r1 = x1*x1 + y1*y1;
		sum_Min_new += sqrt(r1);
		temp = r1;
	}
	temp = coordss[0];
	temp = coordss[1];
	temp = sum_Min_new;

	if (sum_Min_new<sum_Min_end)
	{
		sum_Min_end = sum_Min_new;
		for (int i = 0; i < iwndex; i++)
		{
			index_new[i] = index_n[i];
		}
	}

}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void  AMyGameMode::Combinatorik(int *M, int n, int N)
{
	if (n == 1)
		rwadiusBeetwenObj(M);
	else
	{
		for (int i = 0; i < n; i++)
		{	
			swap(M[i], M[n - 1]);
			Combinatorik(M, n - 1, N); 
			swap(M[i], M[n - 1]); 
		}
	}
}

void AMyGameMode::Tick(float DeltaTime)
{

		Super::Tick(DeltaTime);
}

TArray<int32> AMyGameMode::StartCalcul(float x,float y)
{	
	X0 = x;
	Y0 = y;
	Combinatorik(index_end, iwndex, iwndex);
	TArray<int32> ti;
	for (int i = 0; i < iwndex; i++)
	{
		ti.Add(index_new[i]);
	}
	return ti;
}



void AMyGameMode::StartLogic(float x, float y)
{	
	coordss[2 * iwndex] = x;
	coordss[2 * iwndex + 1] = y;
	index_end[iwndex] = iwndex;
	iwndex++;
}

