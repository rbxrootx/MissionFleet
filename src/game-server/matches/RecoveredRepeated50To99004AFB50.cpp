
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004AFB50()
{
    __asm push ebp
    __asm mov ebp, esp
loc_004AFB53:
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm cmp dword ptr [eax], 0
    __asm je loc_004AFB96
    __asm mov ecx, dword ptr [ebp + 8]
    __asm movsx edx, byte ptr [ecx]
    __asm test edx, edx
    __asm je loc_004AFB96
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [eax]
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov al, byte ptr [edx]
    __asm mov byte ptr [ecx], al
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov edx, dword ptr [ecx]
    __asm add edx, 1
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [eax], edx
    __asm mov ecx, dword ptr [ebp + 8]
    __asm add ecx, 1
    __asm mov dword ptr [ebp + 8], ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm mov eax, dword ptr [edx]
    __asm sub eax, 1
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov dword ptr [ecx], eax
    __asm jmp loc_004AFB53
loc_004AFB96:
    __asm pop ebp
    __asm ret
}
