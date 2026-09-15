extern "C" void Call00530990();
extern "C" void Call00534A00();
extern "C" void *Data0057D6E9;
extern "C" void *Data00584B54;
extern "C" void *Data005C7DD4;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004EBA10()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -1
    __asm push offset Data0057D6E9
    __asm mov eax, dword ptr fs:[0]
    __asm push eax
    __asm mov dword ptr fs:[0], esp
    __asm push ecx
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call00530990
    __asm mov dword ptr [ebp - 4], 0
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax], offset Data00584B54
loc_004EBA47:
    __asm cmp dword ptr [ebp + 8], 0
    __asm jg loc_004EBA5E
    __asm push 0x25
    __asm push offset Data005C7DD4
    __asm call Call00534A00
    __asm test eax, eax
    __asm je loc_004EBA5E
    __asm _emit 0cch
loc_004EBA5E:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne loc_004EBA47
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
