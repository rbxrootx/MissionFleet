// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009E870 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_1009e870_1009E870() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [eax + esi*4 + 0cf4h]
        test edx, edx
        ; Exact mapped bytes 74 37: je 0x1009e8bf
        __asm _emit 0x74
        __asm _emit 0x37
        mov dl, byte ptr [edx]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 05: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 74 2C: je 0x1009e8bf
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 83 FA 06: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 75 26: jne 0x1009e8bf
        __asm _emit 0x75
        __asm _emit 0x26
        push ebx
        xor edx, edx
        mov dl, byte ptr [eax + esi + 1d8h]
        xor ebx, ebx
        mov bl, byte ptr [eax + esi + 1f8h]
        lea eax, [ebx + edx*2 + 10h]
        pop ebx
        pop esi
        mov ecx, dword ptr [ecx + eax*8]
        ; Exact mapped bytes 66 8B 81 A6 00 00 00: mov ax, word ptr [ecx + 0xa6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
