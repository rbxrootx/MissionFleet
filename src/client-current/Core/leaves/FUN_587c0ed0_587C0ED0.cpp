// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0ED0 .. +0x320 bytes.
extern "C" __declspec(naked) void FUN_587c0ed0_587C0ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
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
        ; Exact mapped bytes 0F 84 E7 02 00 00: je 0x587c11e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587c0f1a
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587c0f1a
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 4D: je 0x587c0f76
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c0f3d
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587c0f23
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CB 47 CD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x47
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x587c0f4e
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x587c0f76
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
        ; Exact mapped bytes E8 01 49 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x49
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB AD: jmp 0x587c0f23
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 84 FB 01 00 00: je 0x587c117e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 10h]
        mov eax, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7D 08: jge 0x587c0fee
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7D 09: jge 0x587c1002
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7E 09: jle 0x587c1016
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 7E 09: jle 0x587c102a
        __asm _emit 0x7e
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8D 48 01 00 00: jge 0x587c117e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D 3C 01 00 00: jge 0x587c117e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x587c117e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D 1A 01 00 00: jge 0x587c117e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes 75 4F: jne 0x587c10c1
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 74h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 26 59 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x59
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 39 CC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x39
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 50h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x587c1162
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 4C: je 0x587c1116
        __asm _emit 0x74
        __asm _emit 0x4c
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
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CE 58 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x58
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 38 CC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x38
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
        ; Exact mapped bytes EB 4C: jmp 0x587c1162
        __asm _emit 0xeb
        __asm _emit 0x4c
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
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A9 AD CC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xad
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 80 58 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x58
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 38 CC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x38
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 50h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9A 6A CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x6a
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E9 D0 FE FF FF: jmp 0x587c104e
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x587c1196
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 07: ja 0x587c1196
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 44: je 0x587c11e0
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x587c11de
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587c11b6
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x587c119c
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
        ; Exact mapped bytes E8 99 46 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x46
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB BE: jmp 0x587c119c
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB B6: jmp 0x587c1196
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 66 FE 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfe
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
