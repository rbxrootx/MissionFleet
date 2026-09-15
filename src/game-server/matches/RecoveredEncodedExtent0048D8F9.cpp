int __cdecl Recovered0048D9F9(void *);
// Exact recovered encoded-record extent calculator.
extern "C" __declspec(naked) void Recovered0048D8F9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp-0ch], ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm push edx
    __asm call Recovered0048D9F9
    __asm add esp, 4
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm je compact
    __asm mov eax, dword ptr [ebp+8]
    __asm add eax, 1ah
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+0ch]
    __asm mov dword ptr [ebp-0ch], edx
    __asm jmp first
    __asm compact:
    __asm mov eax, dword ptr [ebp+8]
    __asm add eax, 12h
    __asm mov dword ptr [ebp-8], eax
    __asm first:
    __asm mov ecx, dword ptr [ebp-8]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm cmp edx, 0ffffh
    __asm jne first_scan
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 4
    __asm mov dword ptr [ebp-8], eax
    __asm jmp second
    __asm first_scan:
    __asm mov ecx, dword ptr [ebp-8]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 2
    __asm mov dword ptr [ebp-8], eax
    __asm test edx, edx
    __asm je second
    __asm jmp first_scan
    __asm second:
    __asm mov ecx, dword ptr [ebp-8]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm cmp edx, 0ffffh
    __asm jne second_scan
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 4
    __asm mov dword ptr [ebp-8], eax
    __asm jmp third
    __asm second_scan:
    __asm mov ecx, dword ptr [ebp-8]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 2
    __asm mov dword ptr [ebp-8], eax
    __asm test edx, edx
    __asm je third
    __asm jmp second_scan
    __asm third:
    __asm mov ecx, dword ptr [ebp-8]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 2
    __asm mov dword ptr [ebp-8], eax
    __asm test edx, edx
    __asm je optional
    __asm jmp third
    __asm optional:
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm and ecx, 40h
    __asm test ecx, ecx
    __asm je aligned_end
    __asm mov edx, dword ptr [ebp-4]
    __asm neg edx
    __asm sbb edx, edx
    __asm and edx, 2
    __asm add edx, 1
    __asm mov eax, dword ptr [ebp-8]
    __asm lea ecx, [eax+edx*2]
    __asm mov dword ptr [ebp-8], ecx
    __asm optional_scan:
    __asm mov edx, dword ptr [ebp-8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx]
    __asm mov ecx, dword ptr [ebp-8]
    __asm add ecx, 2
    __asm mov dword ptr [ebp-8], ecx
    __asm test eax, eax
    __asm je aligned_end
    __asm jmp optional_scan
    __asm aligned_end:
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 3
    __asm and al, 0fch
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
