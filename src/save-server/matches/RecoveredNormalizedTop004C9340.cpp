extern "C" void Call00524790();
extern "C" void Call00528D40();
extern "C" void *Data0058D289;
extern "C" void *Data00637734;
extern "C" void *Data00674970;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004C9340()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -1
    __asm push offset Data0058D289
    __asm mov eax, dword ptr fs:[0]
    __asm push eax
    __asm mov dword ptr fs:[0], esp
    __asm push ecx
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call00524790
    __asm mov dword ptr [ebp - 4], 0
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax], offset Data00637734
loc_004C9377:
    __asm cmp dword ptr [ebp + 8], 0
    __asm jg loc_004C938E
    __asm push 0x25
    __asm push offset Data00674970
    __asm call Call00528D40
    __asm test eax, eax
    __asm je loc_004C938E
    __asm _emit 0cch
loc_004C938E:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne loc_004C9377
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm mov dword ptr [edx + 4], 0
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax + 8], 0x11
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov dword ptr [ecx + 0xc], 0
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm mov dword ptr [edx + 0x10], 0
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax + 0x14], 0
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [ecx + 0x18], edx
    __asm mov dword ptr [ebp - 4], 0xffffffff
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov dword ptr fs:[0], ecx
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
