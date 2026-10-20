// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A4750 .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_584a4750_584A4750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 8], ecx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax + 30h], 0
        ; Exact mapped bytes 75 05: jne 0x584a476c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x584a48c2
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 30h]
        ; Exact mapped bytes E8 D4 CE 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 74 14: je 0x584a4797
        __asm _emit 0x74
        __asm _emit 0x14
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 30h], 0
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x584a48c2
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 34h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x584a47c2
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 74 11: je 0x584a47c2
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 74 0B: je 0x584a47c2
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 74 05: je 0x584a47c2
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x584a48c2
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 26 75 FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DB 21 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a47f5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BE 78 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 27: je 0x584a4822
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DD 76 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x584a4820
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D1 76 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A E4 FF FF: call 0x584a2c20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7F 06: jg 0x584a4820
        __asm _emit 0x7f
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 0
        ; Exact mapped bytes EB 02: jmp 0x584a4822
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C8: jmp 0x584a47ea
        __asm _emit 0xeb
        __asm _emit 0xc8
        movzx eax, byte ptr [ebp - 1]
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x584a4857
        __asm _emit 0x75
        __asm _emit 0x2d
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 30h], 0
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax + 34h], 6
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3C E5 FF FF: call 0x584a2d90
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6B: jmp 0x584a48c2
        __asm _emit 0xeb
        __asm _emit 0x6b
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 30h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F F2 FF FF: call 0x584a3b00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 02: jne 0x584a487c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 46: jmp 0x584a48c2
        __asm _emit 0xeb
        __asm _emit 0x46
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx + 30h]
        ; Exact mapped bytes E8 24 78 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 30h]
        ; Exact mapped bytes E8 21 21 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 B1 39 00 00: call 0x584a8270
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
