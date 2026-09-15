// Exact recovered allocation-failure adapter.
extern "C" unsigned char AllocState004A2EDC;
extern "C" unsigned char AllocText004A2EDC;
extern "C" void AllocCall00465920();
extern "C" __declspec(naked) void AllocationFailure004A2EDC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], offset AllocState004A2EDC
    __asm push offset AllocText004A2EDC
    __asm lea eax, dword ptr [ebp-4]
    __asm push eax
    __asm call AllocCall00465920
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
