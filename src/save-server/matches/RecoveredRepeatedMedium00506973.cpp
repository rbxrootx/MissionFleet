extern "C" void Call0050672B();
extern "C" void Call00506A09();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered00506973()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm cmp ecx, dword ptr [ebp + 0xc]
    __asm je loc_00506A03
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [edx], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 0x70]
    __asm and edx, 0xa000
    __asm test edx, edx
    __asm je loc_005069C0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x70]
    __asm and ecx, 0x5000
    __asm test ecx, ecx
    __asm je loc_005069C0
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 0x7c], 0
    __asm je loc_005069C0
    __asm mov dword ptr [ebp - 8], 1
    __asm jmp loc_005069C7
loc_005069C0:
    __asm mov dword ptr [ebp - 8], 0
loc_005069C7:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov dword ptr [eax + 0x7c], ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 0x80], 0
    __asm je loc_005069E5
    __asm mov dword ptr [ebp - 0xc], 0
    __asm jmp loc_005069F0
loc_005069E5:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00506A09
    __asm mov dword ptr [ebp - 0xc], eax
loc_005069F0:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov dword ptr [eax + 0x74], ecx
    __asm push 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0050672B
loc_00506A03:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
