// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D5F0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_1004d5f0_1004D5F0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x1004d64f
        __asm _emit 0x75
        __asm _emit 0x52
        mov edx, dword ptr [esp + 8]
        xor ecx, ecx
        mov eax, edx
        shl eax, 10h
        cmp edx, 4
        ; Exact mapped bytes 75 24: jne 0x1004d631
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [edx + 0d0ch]
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x1004d631
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [edx + 0b4ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edx
        shr ecx, 0dh
        push 0
        push 0
        push 0
        push ecx
        push eax
        push 80011002h
        mov ecx, esi
        ; Exact mapped bytes E8 0B E9 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 400h
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
