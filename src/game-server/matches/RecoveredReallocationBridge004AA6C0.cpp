// Exact recovered locked reallocation bridge.
extern "C" void Call004AA700();
extern "C" void Call004B51F0();
extern "C" void Call004B5290();
extern "C" __declspec(naked) void Recovered004AA6C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push 9
    __asm call Call004B51F0
    __asm add esp, 4
    __asm push 1
    __asm mov eax, dword ptr [ebp+24]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+20]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+16]
    __asm push edx
    __asm mov eax, dword ptr [ebp+12]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm push ecx
    __asm call Call004AA700
    __asm add esp, 24
    __asm mov dword ptr [ebp-4], eax
    __asm push 9
    __asm call Call004B5290
    __asm add esp, 4
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
