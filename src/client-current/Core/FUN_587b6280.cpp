// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6280 .. +0x29F bytes.
extern "C" __declspec(naked) void FUN_587b6280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
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
        ; Exact mapped bytes 0F 84 66 02 00 00: je 0x587b650f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587b62ca
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587b62ca
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 4D: je 0x587b6326
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587b62ed
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587b62d3
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1B F4 CD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf4
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x587b62fe
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x587b6326
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
        ; Exact mapped bytes E8 51 F5 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf5
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB AD: jmp 0x587b62d3
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 84 7A 01 00 00: je 0x587b64ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7D 08: jge 0x587b63af
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 09: jge 0x587b63c3
        __asm _emit 0x7d
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 09: jle 0x587b63d7
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 7E 09: jle 0x587b63eb
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8D B6 00 00 00: jge 0x587b64ad
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x587b64ad
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 14h]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 54h]
        and ecx, 6
        ; Exact mapped bytes 74 15: je 0x587b6437
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A6 F4 CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0xcd
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 19: jmp 0x587b6450
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        and eax, 2
        ; Exact mapped bytes 74 0E: je 0x587b6450
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 86 F4 CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0xcd
        __asm _emit 0xff
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 18h]
        mov ecx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 64h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 E5 CC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x587b64c5
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 07: ja 0x587b64c5
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 44: je 0x587b650f
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x587b650d
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587b64e5
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587b64cb
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6A F3 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf3
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB BE: jmp 0x587b64cb
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB B6: jmp 0x587b64c5
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 37 AB 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xab
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
