extern "C" void Call00457F40();
extern "C" void Call00457FD0();
extern "C" void Call00457FFD();
extern "C" void Call004584CD();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered0045855F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm je loc_0045857B
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm call Call00457FD0
    __asm add esp, 4
    __asm test eax, eax
    __asm je loc_0045858D
loc_0045857B:
    __asm push 3
    __asm push 0
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call00457FFD
    __asm mov dword ptr [ebp + 0xc], eax
    __asm jmp loc_0045859D
loc_0045858D:
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call00457F40
    __asm mov dword ptr [ebp + 0xc], eax
loc_0045859D:
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm jne loc_004585A5
    __asm jmp loc_004585DF
loc_004585A5:
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ebp - 4], ecx
loc_004585AB:
    __asm push 0
    __asm mov edx, dword ptr [ebp - 4]
    __asm push edx
    __asm call Call004584CD
    __asm add esp, 8
    __asm push 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call00457FFD
    __asm mov dword ptr [ebp - 8], eax
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [ebp - 4], edx
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_004585DF
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp eax, dword ptr [ebp + 0xc]
    __asm jne loc_004585AB
loc_004585DF:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
