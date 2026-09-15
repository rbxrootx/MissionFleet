extern "C" void Call0054BF97();
extern "C" void Call00550F0B();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered00550F57()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [edx + 0xbc]
    __asm mov dword ptr [ebp - 8], eax
loc_00550F71:
    __asm lea eax, [ebp - 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call Call00550F0B
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_00550FB8
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0x20], 0
    __asm je loc_00550FB6
    __asm push 1
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [eax + 0x60]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [eax + 0xc8]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054BF97
loc_00550FB6:
    __asm jmp loc_00550F71
loc_00550FB8:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
