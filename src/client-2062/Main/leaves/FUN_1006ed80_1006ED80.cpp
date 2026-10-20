// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006ED80 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_1006ed80_1006ED80() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        mov ebp, 101ace60h
        mov eax, dword ptr [ebp]
        test byte ptr [eax + 30h], 1
        ; Exact mapped bytes 74 49: je 0x1006ede4
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 3B: mov di, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x3b
        mov esi, dword ptr [ecx + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 39: je 0x1006ede4
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 66 39 BE 2C 03 00 00: cmp word ptr [esi + 0x32c], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 29: jne 0x1006eddd
        __asm _emit 0x75
        __asm _emit 0x29
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 13 07 08 00: call 0x100ef4d0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x07
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 66 3B B8 2C 03 00 00: cmp di, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x1006eddd
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [ecx + 370h], 1
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 C7: jne 0x1006edab
        __asm _emit 0x75
        __asm _emit 0xc7
        add ebp, 4
        add ebx, 2
        cmp ebp, 101ace80h
        ; Exact mapped bytes 7C A0: jl 0x1006ed92
        __asm _emit 0x7c
        __asm _emit 0xa0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
