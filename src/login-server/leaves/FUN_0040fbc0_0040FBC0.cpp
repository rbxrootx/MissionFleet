// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FBC0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_0040fbc0_0040FBC0() {
    __asm {
        mov edx, dword ptr [ecx + 40c5ch]
        mov eax, dword ptr [ecx + 40c64h]
        dec edx
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 10h]
        cmp eax, edx
        ; Exact mapped bytes 75 04: jne 0x40fbdf
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 03: jmp 0x40fbe2
        __asm _emit 0xeb
        __asm _emit 0x03
        lea edx, [eax + 1]
        push ebx
        mov ebx, dword ptr [ecx + 40c68h]
        cmp edx, ebx
        mov dword ptr [ecx + 40c64h], edx
        pop ebx
        ; Exact mapped bytes 74 1A: je 0x40fc0e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ecx + 40c6ch]
        mov dword ptr [edx + eax*8], esi
        mov dword ptr [edx + eax*8 + 4], edi
        mov eax, dword ptr [ecx + 40c60h]
        inc eax
        mov dword ptr [ecx + 40c60h], eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
