// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C2EB0 .. +0x349 bytes.
extern "C" __declspec(naked) void FUN_587c2eb0_587C2EB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
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
        ; Exact mapped bytes 0F 84 0E 03 00 00: je 0x587c31e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587c2efb
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587c2efb
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 4D: je 0x587c2f57
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c2f1e
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587c2f04
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EA 27 CD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x27
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x587c2f2f
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x587c2f57
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 20 29 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x29
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB AD: jmp 0x587c2f04
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 84 22 02 00 00: je 0x587c3186
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 10h]
        mov eax, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7D 08: jge 0x587c2fcf
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7D 09: jge 0x587c2fe3
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7E 09: jle 0x587c2ff7
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 7E 09: jle 0x587c300b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8D 6F 01 00 00: jge 0x587c3186
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D 63 01 00 00: jge 0x587c3186
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x587c3035
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7D 53: jge 0x587c3096
        __asm _emit 0x7d
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 64h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 588be36ch
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 19 CC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x19
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 96: jmp 0x587c302c
        __asm _emit 0xeb
        __asm _emit 0x96
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 6ch], ecx
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 6ch]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x587c3186
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E8: shr ax, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x587c3186
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 7E DA FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7e
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 44h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        lea ecx, [ebp - 3ch]
        push ecx
        push 0
        push 588be36ch
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 AC 40 89 58: call dword ptr [0x588940ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 7D DA FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        push 0
        push 100h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 6A 8F CC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8f
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + eax - 3]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov esi, dword ptr [ebp - 3ch]
        imul esi, dword ptr [ecx + 88h]
        add esi, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 57 38 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x38
        __asm _emit 0xcc
        __asm _emit 0xff
        add esi, eax
        push esi
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 3ch]
        imul ecx, dword ptr [eax + 88h]
        add ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 80 CE FF: call 0x584ab1f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x80
        __asm _emit 0xce
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x587c319e
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 07: ja 0x587c319e
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 44: je 0x587c31e8
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x587c31e6
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c31be
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587c31a4
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 91 26 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x26
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB BE: jmp 0x587c31a4
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB B6: jmp 0x587c319e
        __asm _emit 0xeb
        __asm _emit 0xb6
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 5D DE 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xde
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
