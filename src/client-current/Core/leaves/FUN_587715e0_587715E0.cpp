// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587715E0 .. +0x353 bytes.
extern "C" __declspec(naked) void FUN_587715e0_587715E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 2E 03 00 00: je 0x5877192d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        lea eax, [ecx + edx + 140h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx + 4]
        lea ecx, [edx + eax + 0f0h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b0h], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x587716ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0a9h]
        cmp ecx, 2
        ; Exact mapped bytes 74 43: je 0x58771698
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 0a8h]
        add al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0a8h], al
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0a8h]
        mov ecx, dword ptr [ebp - 4]
        movzx ecx, word ptr [ecx + 0aah]
        mov edx, dword ptr [ebp - 4]
        movzx edx, word ptr [edx + 88h]
        imul ecx, edx
        cdq
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0a8h], dl
        ; Exact mapped bytes EB 57: jmp 0x587716ef
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 7E 4B: jle 0x587716ef
        __asm _emit 0x7e
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a4h]
        ; Exact mapped bytes E8 0E 87 D5 FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x87
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, ax
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 2A 89 A0 00 00 00: cvtsi2sd xmm1, dword ptr [ecx + 0xa0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 59 0D E8 54 8B 58: mulsd xmm1, qword ptr [0x588b54e8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C C1: subsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 88h]
        ; Exact mapped bytes F2 0F 2A C8: cvtsi2sd xmm1, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0a8h], cl
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0a9h]
        cmp ecx, 1
        ; Exact mapped bytes 75 55: jne 0x58771753
        __asm _emit 0x75
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0a8h]
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x58771753
        __asm _emit 0x75
        __asm _emit 0x47
        push 24h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 33 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x33
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a4h]
        ; Exact mapped bytes E8 90 86 D5 FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x86
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 AA 00 00 00: mov word ptr [ecx + 0xaa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0a9h], 2
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0a9h], 2
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x587717f3
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0a9h]
        cmp edx, 2
        ; Exact mapped bytes 75 05: jne 0x58771767
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x587717f3
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0a9h]
        cmp ecx, 3
        ; Exact mapped bytes 75 53: jne 0x587717c9
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, 4
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 88 00 00 00: mov word ptr [eax + 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 25h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 33 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x33
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a4h]
        ; Exact mapped bytes E8 17 86 D5 FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x86
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 AA 00 00 00: mov word ptr [ecx + 0xaa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0a8h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0a9h], 4
        ; Exact mapped bytes EB 2A: jmp 0x587717f3
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0a9h]
        cmp edx, 4
        ; Exact mapped bytes 75 1B: jne 0x587717f3
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0a8h]
        test ecx, ecx
        ; Exact mapped bytes 75 0D: jne 0x587717f3
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 47: je 0x58771846
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ecx + 0a8h]
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + 88h]
        cdq
        idiv ecx
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2B AF D2 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x58771867
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58771867
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 51: je 0x587718c7
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5877188a
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58771870
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7E 3E D2 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x3e
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 02: jl 0x5877189b
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x587718c7
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B0 3F D2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB A9: jmp 0x58771870
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x587718df
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 07: ja 0x587718df
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x5877192d
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x5877192b
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587718ff
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x587718e5
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4C 3F D2 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB BA: jmp 0x587718e5
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x587718df
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
