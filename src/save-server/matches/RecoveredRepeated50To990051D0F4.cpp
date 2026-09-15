extern "C" void Call0051D137();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0051D0F4()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [edx + 0xc]
    __asm sub ecx, dword ptr [eax + 4]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [edx + 8]
    __asm sub ecx, dword ptr [eax]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [edx + 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx]
    __asm push edx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0051D137
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
