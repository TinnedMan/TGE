#pragma once

namespace G {
	__declspec(dllimport) void Print();
}

void main() 
{
	G::Print();
}
