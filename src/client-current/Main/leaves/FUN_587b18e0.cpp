// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B18E0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_587b18e0() {
    __asm {
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 88h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 19: jne 0x587b190d
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [edi + 104h]
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [edi + 104h]
        push edx
        push eax
        ; Exact mapped bytes E8 33 FD FE FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [edi + 104h]
        xor eax, 0aaaaaaaah
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x587b1a37
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 0f4h], 0
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x587b1a37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 08 45 A2 58 00: cmp dword ptr [0x58a24508], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x587b1940
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 10 FF FF FF: call 0x587b1850
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi]
        xor ecx, dword ptr [edi + 138h]
        and ecx, 1fh
        xor dword ptr [esi], ecx
        mov edx, dword ptr [edi + 130h]
        mov eax, dword ptr [edi + 0a8h]
        lea eax, [edx + eax + 384h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [edi + 0e4h], edx
        test edx, edx
        ; Exact mapped bytes 7D 08: jge 0x587b197f
        __asm _emit 0x7d
        __asm _emit 0x08
        add edx, ecx
        mov dword ptr [edi + 0e4h], edx
        mov edx, dword ptr [edi + 0e4h]
        shl edx, 0fh
        xor edx, dword ptr [esi]
        and edx, 7ff8000h
        xor dword ptr [esi], edx
        mov eax, dword ptr [edi + 0ach]
        cmp eax, dword ptr [edi + 0b8h]
        mov dword ptr [edi + 0e8h], eax
        ; Exact mapped bytes 7F 0A: jg 0x587b19b0
        __asm _emit 0x7f
        __asm _emit 0x0a
        xor ecx, ecx
        test eax, eax
        setl cl
        dec ecx
        and eax, ecx
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [edi + 0e8h], edx
        shl edx, 5
        xor edx, dword ptr [esi]
        and edx, 7fe0h
        xor dword ptr [esi], edx
        cmp dword ptr [edi + 88h], 0
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 74 50: je 0x587b1a26
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [edi + 138h]
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 78 27 0A 00: call 0x58854160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        movzx eax, ax
        shl eax, 1bh
        xor eax, dword ptr [esi]
        and eax, 18000000h
        xor dword ptr [esi], eax
        mov ecx, dword ptr [edi + 138h]
        push ecx
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 27 0A 00: call 0x588541d0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        movzx eax, ax
        movzx edx, ax
        shl edx, 1dh
        xor edx, dword ptr [esi]
        mov eax, 4
        and edx, 60000000h
        xor dword ptr [esi], edx
        pop esi
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        and eax, 87ffffffh
        mov dword ptr [esi], eax
        pop esi
        mov eax, 4
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
