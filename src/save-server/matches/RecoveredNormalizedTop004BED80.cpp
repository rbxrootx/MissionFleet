extern "C" void Call00524790();
extern "C" void *Data00637614;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004BED80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00524790
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00637614
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 4], 0
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0x10], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0xc], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 8], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
