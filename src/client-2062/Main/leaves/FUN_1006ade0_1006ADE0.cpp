// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006ADE0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_1006ade0_1006ADE0() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x1006ae0b
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ecx + 384h]
        mov eax, dword ptr [esp + 8]
        or edx, eax
        xor edx, eax
        mov al, byte ptr [esp + 4]
        add al, 1fh
        mov dword ptr [ecx + 384h], edx
        mov byte ptr [ecx + 10470h], al
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 26: jne 0x1006ae38
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ecx + 384h]
        mov edx, dword ptr [esp + 8]
        push esi
        mov esi, eax
        and esi, edx
        cmp esi, edx
        pop esi
        ; Exact mapped bytes 74 12: je 0x1006ae38
        __asm _emit 0x74
        __asm _emit 0x12
        or eax, edx
        mov dl, byte ptr [esp + 4]
        mov dword ptr [ecx + 384h], eax
        mov byte ptr [ecx + 10470h], dl
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
