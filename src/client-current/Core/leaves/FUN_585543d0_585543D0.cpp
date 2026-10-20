// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585543D0 .. +0x18B bytes.
extern "C" __declspec(naked) void FUN_585543d0_585543D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 25 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 5f34h]
        ; Exact mapped bytes E8 D0 25 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 25 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 5f34h]
        ; Exact mapped bytes E8 A7 7C F3 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x7c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x58554554
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x5855442c
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        movzx esi, word ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 25 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 0D 01 00 00: jge 0x58554554
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x5855454f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 25 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 4]
        imul ecx, edx, 120h
        lea edx, [eax + ecx + 1b78h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 25 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax + 5eb8h]
        shl eax, 3
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 14h]
        sub esi, dword ptr [ecx + 4]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 25 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x25
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 4]
        sub esi, dword ptr [eax + edx*4 + 1af8h]
        mov dword ptr [ebp - 24h], esi
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 24 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        imul edx, ecx, 120h
        lea eax, [eax + edx + 1b78h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 24 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 5eb8h]
        shl ecx, 3
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0A 11 26 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x11
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        movzx eax, byte ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 2F: je 0x5855454f
        __asm _emit 0x74
        __asm _emit 0x2f
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 24 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 5ebch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C2 00 01 00: call 0x58564610
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CC FE FF FF: jmp 0x58554420
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
