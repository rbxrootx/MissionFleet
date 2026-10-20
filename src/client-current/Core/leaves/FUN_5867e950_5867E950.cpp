// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867E950 .. +0x385 bytes.
extern "C" __declspec(naked) void FUN_5867e950_5867E950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2c4h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2d4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2d0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2cch], 0
        push 0
        push 6
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 4F 04 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 2F: jle 0x5867e9d1
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2f4h]
        mov dword ptr [ebp - 10h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 75 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x75
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        mov dword ptr [ebp - 14h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C2 75 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x75
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5867e9fe
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2f4h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A9 75 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x75
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2f8h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 93 75 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x75
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b8h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2C 0E E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2bch]
        ; Exact mapped bytes E8 AE 88 F0 FF: call 0x585872d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b0h]
        ; Exact mapped bytes E8 00 63 EB FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x63
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2b4h]
        ; Exact mapped bytes E8 F2 62 EB FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x62
        __asm _emit 0xeb
        __asm _emit 0xff
        push 80h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 1a8h
        push edx
        ; Exact mapped bytes E8 BC E3 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe3
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867ea69
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 3A: jge 0x5867eaa9
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 108h]
        mov dword ptr [ebp - 24h], eax
        push 0fffffe70h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 24 6C 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 108h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9A 0D E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0d
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B7: jmp 0x5867ea60
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867eabb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 5D: jge 0x5867eb1e
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5867ead3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 43: jge 0x5867eb1c
        __asm _emit 0x7d
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 188h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 47 0D E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 77 C6 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc6
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AE: jmp 0x5867eaca
        __asm _emit 0xeb
        __asm _emit 0xae
        ; Exact mapped bytes EB 94: jmp 0x5867eab2
        __asm _emit 0xeb
        __asm _emit 0x94
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867eb30
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D 7A 01 00 00: jge 0x5867ecb4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0f8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0f8h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0d8h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0d8h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 34h], edx
        push 0
        push 0
        push 0
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 61 12 00 00: call 0x5867fe20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 38h], edx
        push 0
        push 0
        push 0
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 36 12 00 00: call 0x5867fe20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax*8 + 7ch]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx*8 + 7ch]
        mov edx, dword ptr [ecx + eax]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax*8 + 7ch]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 44h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax*8 + 7ch]
        mov ecx, dword ptr [eax + edx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 20h]
        mov dword ptr [ebp - 48h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 4ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A4 81 00 00: call 0x58686e30
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D2 42 01 00: call 0x58692f80
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 73 FE FF FF: jmp 0x5867eb27
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 2E 57 00 00: call 0x586843f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes E8 40 12 01 00: call 0x5868ff10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
