// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858C550 .. +0x354 bytes.
extern "C" __declspec(naked) void FUN_5858c550_5858C550() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e0h]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1d8h]
        push eax
        mov ecx, dword ptr [edx + 1d4h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 7C 78 F5 FF: call 0x584e3e10
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1d4h]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e0h]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1d8h]
        sub ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [ebp - 14h]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 2A 4A 2C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4a
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 92 4C 2A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4c
        __asm _emit 0x2a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b8h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 0F 87 72 02 00 00: ja 0x5858c89d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 85 A4 C8 58 58: jmp dword ptr [eax*4 + 0x5858c8a4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 0F 87 8E 00 00 00: ja 0x5858c6db
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 95 B4 C8 58 58: jmp dword ptr [edx*4 + 0x5858c8b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 73: jmp 0x5858c6db
        __asm _emit 0xeb
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        add eax, 708h
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 11: jle 0x5858c68c
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 35: jmp 0x5858c6c1
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        add ecx, 708h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 1A: jge 0x5858c6ba
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, 0e10h
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        add ecx, edx
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x5858c6c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 708h
        ; Exact mapped bytes EB 18: jmp 0x5858c6db
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, 0e10h
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        add ecx, edx
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x5858c89d
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 3
        ; Exact mapped bytes 77 76: ja 0x5858c76a
        __asm _emit 0x77
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 24 95 C4 C8 58 58: jmp dword ptr [edx*4 + 0x5858c8c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        sub ecx, dword ptr [ebp - 8]
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 59: jmp 0x5858c76a
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        add eax, 708h
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 11: jle 0x5858c735
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 35: jmp 0x5858c76a
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        add ecx, 708h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 1A: jge 0x5858c763
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, 0e10h
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        add ecx, edx
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x5858c76a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 708h
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x5858c89d
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 3
        ; Exact mapped bytes 77 75: ja 0x5858c7f8
        __asm _emit 0x77
        __asm _emit 0x75
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 95 D4 C8 58 58: jmp dword ptr [edx*4 + 0x5858c8d4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        sub ecx, 708h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 16: jle 0x5858c7b7
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, 0e10h
        sub eax, dword ptr [edx + 0d0h]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 2E: jmp 0x5858c7e5
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        sub edx, 708h
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 13: jge 0x5858c7de
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        sub ecx, dword ptr [ebp - 8]
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x5858c7e5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 708h
        ; Exact mapped bytes EB 11: jmp 0x5858c7f8
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        sub eax, dword ptr [ebp - 8]
        neg eax
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x5858c89d
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 3
        ; Exact mapped bytes 0F 87 88 00 00 00: ja 0x5858c89d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 95 E4 C8 58 58: jmp dword ptr [edx*4 + 0x5858c8e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, 0e10h
        sub ecx, dword ptr [eax + 0d0h]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 68: jmp 0x5858c89d
        __asm _emit 0xeb
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        sub eax, 708h
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 16: jle 0x5858c85e
        __asm _emit 0x7e
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, 0e10h
        sub edx, dword ptr [ecx + 0d0h]
        add edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 2E: jmp 0x5858c88c
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        sub ecx, 708h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 13: jge 0x5858c885
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        sub eax, dword ptr [ebp - 8]
        neg eax
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858c88c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 708h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        sub edx, dword ptr [ebp - 8]
        neg edx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
