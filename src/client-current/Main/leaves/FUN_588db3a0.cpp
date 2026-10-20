// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DB3A0 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_588db3a0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588db3ce
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 BA F0 05 01 00 06: cmp word ptr [edx + 0x105f0], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 74 76: je 0x588db42e
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ecx + 12ech]
        mov dword ptr [edx + 60h], 0abd9f8h
        mov dword ptr [ecx + 60bch], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 6090h]
        push esi
        cmp edx, 40000h
        ; Exact mapped bytes 75 29: jne 0x588db406
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ecx + 608ch]
        mov esi, dword ptr [ecx + 12ech]
        neg edx
        sbb edx, edx
        and edx, 0ff32ff33h
        add edx, 0ffffffh
        mov dword ptr [esi + 60h], edx
        pop esi
        mov dword ptr [ecx + 60bch], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edx, 50000h
        ; Exact mapped bytes 75 1F: jne 0x588db42d
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ecx + 1258h]
        mov esi, dword ptr [ecx + 12ech]
        neg edx
        sbb edx, edx
        and edx, 0ff9a01h
        add edx, 0ffh
        mov dword ptr [esi + 60h], edx
        pop esi
        mov dword ptr [ecx + 60bch], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
