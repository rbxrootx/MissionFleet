// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4570 .. +0x2B8 bytes.
extern "C" __declspec(naked) void FUN_587c4570_587C4570() {
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
        ; Exact mapped bytes 0F 84 7F 02 00 00: je 0x587c4818
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587c45ba
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587c45ba
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 4D: je 0x587c4616
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c45dd
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587c45c3
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2B 11 CD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x11
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x587c45ee
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x587c4616
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
        ; Exact mapped bytes E8 61 12 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x12
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB AD: jmp 0x587c45c3
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x587c47b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7D 08: jge 0x587c469f
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 09: jge 0x587c46b3
        __asm _emit 0x7d
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 09: jle 0x587c46c7
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 7E 09: jle 0x587c46db
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8D CF 00 00 00: jge 0x587c47b6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x587c47b6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        and eax, 2
        ; Exact mapped bytes 74 35: je 0x587c4741
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BC 11 CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0xcd
        __asm _emit 0xff
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 19: je 0x587c473f
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 9C 11 CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0xcd
        __asm _emit 0xff
        add eax, 2
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, eax
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 1E: jmp 0x587c475f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        and eax, 6
        ; Exact mapped bytes 74 13: je 0x587c475f
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7C 11 CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0xcd
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 10h]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 54h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 02 CC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x02
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
        nop
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x587c47ce
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 07: ja 0x587c47ce
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 44: je 0x587c4818
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x587c4816
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c47ee
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587c47d4
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
        ; Exact mapped bytes E8 61 10 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB BE: jmp 0x587c47d4
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB B6: jmp 0x587c47ce
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2E C8 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc8
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
