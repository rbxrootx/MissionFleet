// Exact recovered state/data leaf.
extern "C" __declspec(naked) void Recovered0042C340()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+292]
    __asm add ecx, 1
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+292], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+300]
    __asm add ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+300], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
