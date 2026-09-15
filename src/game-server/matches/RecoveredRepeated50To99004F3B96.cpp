
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004F3B96()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov dword ptr [ebp - 4], 0
    __asm lea eax, [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0xa4]
    __asm test eax, eax
    __asm jne loc_004F3BE5
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0xa8]
    __asm mov dword ptr [ebp - 4], eax
loc_004F3BE5:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
