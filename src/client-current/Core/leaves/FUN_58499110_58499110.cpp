// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58499110 .. +0x354 bytes.
extern "C" __declspec(naked) void FUN_58499110_58499110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4a0h]
        push eax
        mov ecx, dword ptr [edx + 49ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 BC AC 04 00: call 0x584e3e10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 49ch]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4a0h]
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
        ; Exact mapped bytes E8 6A 7E 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7e
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 D2 80 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 324h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 348h]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 0F 87 72 02 00 00: ja 0x5849945d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 85 64 94 49 58: jmp dword ptr [eax*4 + 0x58499464]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x94
        __asm _emit 0x49
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 384h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 0F 87 8E 00 00 00: ja 0x5849929b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 95 74 94 49 58: jmp dword ptr [edx*4 + 0x58499474]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x94
        __asm _emit 0x49
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax + 348h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 73: jmp 0x5849929b
        __asm _emit 0xeb
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 348h]
        add eax, 708h
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 11: jle 0x5849924c
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ecx + 348h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 35: jmp 0x58499281
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        add ecx, 708h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 1A: jge 0x5849927a
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, 0e10h
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        add ecx, edx
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x58499281
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 708h
        ; Exact mapped bytes EB 18: jmp 0x5849929b
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, 0e10h
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        add ecx, edx
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x5849945d
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
        ; Exact mapped bytes 77 76: ja 0x5849932a
        __asm _emit 0x77
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 24 95 84 94 49 58: jmp dword ptr [edx*4 + 0x58499484]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x49
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        sub ecx, dword ptr [ebp - 8]
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 59: jmp 0x5849932a
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 348h]
        add eax, 708h
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 11: jle 0x584992f5
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ecx + 348h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 35: jmp 0x5849932a
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        add ecx, 708h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 1A: jge 0x58499323
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, 0e10h
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        add ecx, edx
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x5849932a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 708h
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x5849945d
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
        ; Exact mapped bytes 77 75: ja 0x584993b8
        __asm _emit 0x77
        __asm _emit 0x75
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 95 94 94 49 58: jmp dword ptr [edx*4 + 0x58499494]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0x94
        __asm _emit 0x49
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        sub ecx, 708h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 16: jle 0x58499377
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, 0e10h
        sub eax, dword ptr [edx + 348h]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 2E: jmp 0x584993a5
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 348h]
        sub edx, 708h
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 13: jge 0x5849939e
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        sub ecx, dword ptr [ebp - 8]
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x584993a5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 708h
        ; Exact mapped bytes EB 11: jmp 0x584993b8
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 348h]
        sub eax, dword ptr [ebp - 8]
        neg eax
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x5849945d
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
        ; Exact mapped bytes 0F 87 88 00 00 00: ja 0x5849945d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 95 A4 94 49 58: jmp dword ptr [edx*4 + 0x584994a4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0x94
        __asm _emit 0x49
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, 0e10h
        sub ecx, dword ptr [eax + 348h]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 68: jmp 0x5849945d
        __asm _emit 0xeb
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 348h]
        sub eax, 708h
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 16: jle 0x5849941e
        __asm _emit 0x7e
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, 0e10h
        sub edx, dword ptr [ecx + 348h]
        add edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 2E: jmp 0x5849944c
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        sub ecx, 708h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 13: jge 0x58499445
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 348h]
        sub eax, dword ptr [ebp - 8]
        neg eax
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5849944c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 708h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 348h]
        sub edx, dword ptr [ebp - 8]
        neg edx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
