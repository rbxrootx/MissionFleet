// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C65B0 .. +0x3E1 bytes.
extern "C" __declspec(naked) void FUN_584c65b0_584C65B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push esi
        mov dword ptr [ebp - 2ch], ecx
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2B CD 2E 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xcd
        __asm _emit 0x2e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 AA 03 00 00: je 0x584c698c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1A: jne 0x584c6602
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 11: jne 0x584c6602
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes E9 8C 03 00 00: jmp 0x584c698e
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0D: je 0x584c6615
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 4C 07 00 00: call 0x584c6d60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 3ch], 0
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0ch
        ; Exact mapped bytes 77 13: ja 0x584c6654
        __asm _emit 0x77
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes E9 3C 03 00 00: jmp 0x584c698e
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x584c665d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, 0ch
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 DC A9 36 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa9
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 8], eax
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        push 4
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        push 4
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        push 4
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 1ch]
        xor eax, 390a4f16h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0fafah
        mov edx, dword ptr [ebp - 18h]
        and edx, 0adadh
        add ecx, edx
        mov eax, dword ptr [ebp - 1ch]
        sub eax, ecx
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584c670f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 1D: jae 0x584c6734
        __asm _emit 0x73
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        add ecx, 7
        mov edx, dword ptr [ebp - 4]
        add edx, 3
        imul ecx, edx
        add ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB D2: jmp 0x584c6706
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 74 26: je 0x584c6762
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x584c675b
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 FA A8 36 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa8
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes E9 2C 02 00 00: jmp 0x584c698e
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ff000000h
        shr eax, 18h
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [ebp + edx - 34h], al
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ff0000h
        shr eax, 10h
        mov ecx, 1
        shl ecx, 0
        mov byte ptr [ebp + ecx - 34h], al
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffh
        mov eax, 1
        shl eax, 1
        mov byte ptr [ebp + eax - 34h], dl
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ff00h
        shr ecx, 8
        mov edx, 1
        imul eax, edx, 3
        mov byte ptr [ebp + eax - 34h], cl
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ff0000h
        shr ecx, 10h
        mov edx, 1
        imul eax, edx, 0
        mov byte ptr [ebp + eax - 30h], cl
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ff000000h
        shr ecx, 18h
        mov edx, 1
        shl edx, 0
        mov byte ptr [ebp + edx - 30h], cl
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ff00h
        shr eax, 8
        mov ecx, 1
        shl ecx, 1
        mov byte ptr [ebp + ecx - 30h], al
        mov edx, dword ptr [ebp - 18h]
        and edx, 0ffh
        mov eax, 1
        imul ecx, eax, 3
        mov byte ptr [ebp + ecx - 30h], dl
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584c6830
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 3C: jae 0x584c6874
        __asm _emit 0x73
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 72 02: jb 0x584c684b
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 29: jmp 0x584c6874
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x584c685a
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        movzx ecx, byte ptr [ebp + eax - 30h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 20h]
        movzx eax, byte ptr [edx]
        xor eax, ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB B3: jmp 0x584c6827
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584c6886
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 2A: jae 0x584c68b8
        __asm _emit 0x73
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x584c689e
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        movzx edx, byte ptr [ebp + ecx - 34h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        xor ecx, edx
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB C5: jmp 0x584c687d
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584c68ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 43: jae 0x584c6915
        __asm _emit 0x73
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        imul eax, ecx
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        movzx ecx, byte ptr [edx]
        mov eax, dword ptr [ebp - 4]
        add eax, 0dh
        mov edx, dword ptr [ebp - 4]
        add edx, 0dh
        imul eax, edx
        cdq
        mov esi, 7bh
        idiv esi
        imul ecx, edx
        add ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB AC: jmp 0x584c68c1
        __asm _emit 0xeb
        __asm _emit 0xac
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 24h]
        xor ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 28h]
        xor eax, dword ptr [edx + 28h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 08: jne 0x584c693d
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 23: je 0x584c6960
        __asm _emit 0x74
        __asm _emit 0x23
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x584c695c
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 F9 A6 36 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa6
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x584c698e
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 17: jne 0x584c6985
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 30 F9 FF FF: call 0x584c62b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 09: jmp 0x584c698e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 04: jmp 0x584c698e
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x584c698e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        mov esp, ebp
    }
}
