// Exact recovered allocation-failure adapter.
extern "C" unsigned char AllocState004CFDAC;
extern "C" unsigned char AllocText004CFDAC;
extern "C" void AllocCall004B0320();
extern "C" __declspec(naked) void AllocationFailure004CFDAC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], offset AllocState004CFDAC
    __asm push offset AllocText004CFDAC
    __asm lea eax, dword ptr [ebp-4]
    __asm push eax
    __asm call AllocCall004B0320
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
