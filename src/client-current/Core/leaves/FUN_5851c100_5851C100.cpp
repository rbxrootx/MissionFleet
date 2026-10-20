// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851C100 .. +0x1CB bytes.
extern "C" __declspec(naked) void FUN_5851c100_5851C100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 A6 01 00 00: je 0x5851c2c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 0F 86 0F 01 00 00: jbe 0x5851c23f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 55 97 F7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x97
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx edx, al
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 74 88 F6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5851c161
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 7D: jge 0x5851c1e4
        __asm _emit 0x7d
        __asm _emit 0x7d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 8ch], 0
        ; Exact mapped bytes 74 68: je 0x5851c1df
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE FD F6 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4F 10 F7 FF: call 0x5848d1f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x10
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5851c1b8
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 8ch], 0
        ; Exact mapped bytes EB 27: jmp 0x5851c1df
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 8ch]
        ; Exact mapped bytes E8 E6 0F F7 FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5851c1df
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 8ch], 0
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x5851c158
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 1
        ; Exact mapped bytes 75 09: jne 0x5851c1f6
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 00 00 00: call 0x5851c2d0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 75 1F: jne 0x5851c221
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 FA FF FF: call 0x5851bca0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 01 00 00: call 0x5851c390
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], 7dh
        ; Exact mapped bytes EB 15: jmp 0x5851c236
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 E8 FF FF: call 0x5851ab30
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5851c260
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5851c260
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5851c2c9
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5851c283
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x5851c269
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 85 93 F7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5851c2a7
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5851c2c9
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5851c2c7
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 93 F7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x5851c269
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
