extern "C" void Call0051D58E();
extern "C" void Call0051D86C();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered0051D7D6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm cmp ecx, dword ptr [ebp + 0xc]
    __asm je loc_0051D866
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [edx], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 0x70]
    __asm and edx, 0xa000
    __asm test edx, edx
    __asm je loc_0051D823
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x70]
    __asm and ecx, 0x5000
    __asm test ecx, ecx
    __asm je loc_0051D823
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 0x7c], 0
    __asm je loc_0051D823
    __asm mov dword ptr [ebp - 8], 1
    __asm jmp loc_0051D82A
loc_0051D823:
    __asm mov dword ptr [ebp - 8], 0
loc_0051D82A:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov dword ptr [eax + 0x7c], ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 0x80], 0
    __asm je loc_0051D848
    __asm mov dword ptr [ebp - 0xc], 0
    __asm jmp loc_0051D853
loc_0051D848:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0051D86C
    __asm mov dword ptr [ebp - 0xc], eax
loc_0051D853:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov dword ptr [eax + 0x74], ecx
    __asm push 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0051D58E
loc_0051D866:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
