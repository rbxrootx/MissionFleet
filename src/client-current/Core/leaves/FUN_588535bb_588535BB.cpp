// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588535BB .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_588535bb_588535BB() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 18h]
        mov edx, ecx
        xor ecx, ecx
        mov dword ptr [edx + 8], eax
        xor eax, eax
        ; Exact mapped bytes 66 89 42 2E: mov word ptr [edx + 0x2e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        mov dword ptr [edx + 0ch], ecx
        mov dword ptr [edx + 10h], ecx
        mov dword ptr [edx + 43ch], ecx
        mov dword ptr [edx + 440h], ecx
        mov dword ptr [edx + 14h], ecx
        mov byte ptr [edx + 18h], cl
        mov dword ptr [edx + 1ch], ecx
        mov dword ptr [edx + 20h], ecx
        mov dword ptr [edx + 24h], ecx
        mov byte ptr [edx + 2ch], cl
        mov dword ptr [edx + 34h], ecx
        mov byte ptr [edx + 38h], cl
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 448h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 10h], eax
        mov eax, edx
        mov dword ptr [edx + 4], ecx
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
