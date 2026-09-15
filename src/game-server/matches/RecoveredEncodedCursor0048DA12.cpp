// Exact recovered encoded-record cursor helper.
extern "C" __declspec(naked) void Recovered0048DA12()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm cmp dword ptr [ebp+0ch], 0
    __asm je short_header
    __asm mov eax, dword ptr [ebp+8]
    __asm add eax, 18h
    __asm mov dword ptr [ebp-8], eax
    __asm jmp first
    __asm short_header:
    __asm mov ecx, dword ptr [ebp+8]
    __asm add ecx, 12h
    __asm mov dword ptr [ebp-8], ecx
    __asm first:
    __asm mov edx, dword ptr [ebp-8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx]
    __asm cmp eax, 0ffffh
    __asm jne first_scan
    __asm mov ecx, dword ptr [ebp-8]
    __asm add ecx, 4
    __asm mov dword ptr [ebp-8], ecx
    __asm jmp second
    __asm first_scan:
    __asm mov edx, dword ptr [ebp-8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx]
    __asm mov ecx, dword ptr [ebp-8]
    __asm add ecx, 2
    __asm mov dword ptr [ebp-8], ecx
    __asm test eax, eax
    __asm je second
    __asm jmp first_scan
    __asm second:
    __asm mov edx, dword ptr [ebp-8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx]
    __asm cmp eax, 0ffffh
    __asm jne second_scan
    __asm mov ecx, dword ptr [ebp-8]
    __asm add ecx, 4
    __asm mov dword ptr [ebp-8], ecx
    __asm jmp payload
    __asm second_scan:
    __asm mov edx, dword ptr [ebp-8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx]
    __asm mov ecx, dword ptr [ebp-8]
    __asm add ecx, 2
    __asm mov dword ptr [ebp-8], ecx
    __asm test eax, eax
    __asm je payload
    __asm jmp second_scan
    __asm payload:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov ax, word ptr [edx]
    __asm mov word ptr [ebp-4], ax
    __asm mov ecx, dword ptr [ebp-8]
    __asm add ecx, 2
    __asm mov dword ptr [ebp-8], ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm and edx, 0ffffh
    __asm mov eax, dword ptr [ebp-8]
    __asm lea eax, [eax+edx+3]
    __asm and al, 0fch
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
