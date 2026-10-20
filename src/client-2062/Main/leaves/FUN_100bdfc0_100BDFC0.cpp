// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BDFC0 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_100bdfc0_100BDFC0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 84h]
        test eax, eax
        push esi
        ; Exact mapped bytes 7D 25: jge 0x100bdff4
        __asm _emit 0x7d
        __asm _emit 0x25
        or byte ptr [edx + 24h], 1
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 160h], 25h
        ; Exact mapped bytes 7E 39: jle 0x100be01b
        __asm _emit 0x7e
        __asm _emit 0x39
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x100be01b
        __asm _emit 0x74
        __asm _emit 0x2f
        add edx, 940h
        ; Exact mapped bytes EB 29: jmp 0x100be01d
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 66 81 62 24 FE FF: and word ptr [edx + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100be01b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100be01b
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100be01d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov esi, dword ptr [ecx + 88h]
        mov dword ptr [esi + 0f8h], edx
        mov ecx, dword ptr [ecx + 88h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 E6 16 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
