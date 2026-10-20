// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C5670 .. +0x3A5 bytes.
extern "C" __declspec(naked) void FUN_586c5670_586C5670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 828h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 814h], ecx
        mov byte ptr [ebp - 404h], 20h
        push 3ffh
        push 0
        lea eax, [ebp - 403h]
        push eax
        ; Exact mapped bytes E8 6D 77 18 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x77
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 804h], 20h
        push 3ffh
        push 0
        lea ecx, [ebp - 803h]
        push ecx
        ; Exact mapped bytes E8 50 77 18 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x77
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 80ch], 0
        mov dword ptr [ebp - 808h], 0
        mov dword ptr [ebp - 810h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c56f2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 810h]
        add edx, 1
        mov dword ptr [ebp - 810h], edx
        cmp dword ptr [ebp - 810h], 400h
        ; Exact mapped bytes 0F 83 09 03 00 00: jae 0x586c5a0b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 814h]
        mov ecx, dword ptr [eax + 74h]
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [ebp - 810h]
        mov cl, byte ptr [ecx + eax + 44h]
        mov byte ptr [ebp + edx - 804h], cl
        mov edx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 84 15 FC F7 FF FF: movsx eax, byte ptr [ebp + edx - 0x804]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 74 61: je 0x586c5796
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 94 0D FC F7 FF FF: movsx edx, byte ptr [ebp + ecx - 0x804]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, 9
        ; Exact mapped bytes 74 4E: je 0x586c5796
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 8C 05 FC F7 FF FF: movsx ecx, byte ptr [ebp + eax - 0x804]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 0ah
        ; Exact mapped bytes 74 3B: je 0x586c5796
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 84 15 FC F7 FF FF: movsx eax, byte ptr [ebp + edx - 0x804]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x586c5796
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 94 0D FC F7 FF FF: movsx edx, byte ptr [ebp + ecx - 0x804]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, 0dh
        ; Exact mapped bytes 74 16: je 0x586c5796
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 808h]
        add eax, 1
        mov dword ptr [ebp - 808h], eax
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x586c56e3
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x586c57a5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 1
        mov dword ptr [ebp - 808h], ecx
        mov edx, dword ptr [ebp - 80ch]
        add edx, dword ptr [ebp - 808h]
        cmp edx, 32h
        ; Exact mapped bytes 7F 4C: jg 0x586c5802
        __asm _emit 0x7f
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 80ch]
        add eax, dword ptr [ebp - 808h]
        mov dword ptr [ebp - 80ch], eax
        lea ecx, [ebp - 804h]
        push ecx
        push 400h
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes E8 90 0D DC FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 808h], 0
        push 32h
        push 0
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes E8 16 76 18 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x76
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x586c5887
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 814h]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 820h], edx
        push 0ffffffh
        push -1
        lea eax, [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 820h]
        ; Exact mapped bytes E8 F3 AC 0F 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xac
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 808h]
        mov dword ptr [ebp - 80ch], ecx
        mov dword ptr [ebp - 808h], 0
        push 400h
        push 0
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes E8 BA 75 18 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x75
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 804h]
        push eax
        push 400h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes E8 1F 1F 19 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1f
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        push 32h
        push 0
        lea edx, [ebp - 804h]
        push edx
        ; Exact mapped bytes E8 8C 75 18 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 814h]
        mov ecx, dword ptr [eax + 74h]
        mov edx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 44 11 44: movsx eax, byte ptr [ecx + edx + 0x44]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x44
        cmp eax, 0ah
        ; Exact mapped bytes 74 18: je 0x586c58b8
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 814h]
        mov edx, dword ptr [ecx + 74h]
        mov eax, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 4C 02 44: movsx ecx, byte ptr [edx + eax + 0x44]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x44
        test ecx, ecx
        ; Exact mapped bytes 75 31: jne 0x586c58e9
        __asm _emit 0x75
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 814h]
        mov eax, dword ptr [edx + 1a0h]
        mov dword ptr [ebp - 824h], eax
        push 0ffffffh
        push -1
        lea ecx, [ebp - 404h]
        push ecx
        mov ecx, dword ptr [ebp - 824h]
        ; Exact mapped bytes E8 3D AC 0F 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 22 01 00 00: jmp 0x586c5a0b
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 814h]
        mov eax, dword ptr [edx + 74h]
        mov ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 54 08 44: movsx edx, byte ptr [eax + ecx + 0x44]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x44
        cmp edx, 0dh
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x586c5a06
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 80ch], 0
        ; Exact mapped bytes 0F 8E C4 00 00 00: jle 0x586c59d7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 80ch]
        ; Exact mapped bytes 0F BE 8C 05 FB FB FF FF: movsx ecx, byte ptr [ebp + eax - 0x405]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 0dh
        ; Exact mapped bytes 74 13: je 0x586c5939
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes 0F BE 84 15 FB FB FF FF: movsx eax, byte ptr [ebp + edx - 0x405]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 31: jne 0x586c596a
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 80ch]
        sub ecx, 1
        mov dword ptr [ebp - 818h], ecx
        cmp dword ptr [ebp - 818h], 400h
        ; Exact mapped bytes 73 02: jae 0x586c5956
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x586c595c
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 4E B8 16 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 818h]
        mov byte ptr [ebp + edx - 404h], 0
        mov eax, dword ptr [ebp - 80ch]
        mov dword ptr [ebp - 81ch], eax
        cmp dword ptr [ebp - 81ch], 400h
        ; Exact mapped bytes 73 02: jae 0x586c5984
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x586c598a
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 20 B8 16 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 81ch]
        mov byte ptr [ebp + ecx - 404h], 0
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes E8 DC B7 18 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 76 2C: jbe 0x586c59d7
        __asm _emit 0x76
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 814h]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 828h], ecx
        push 0ffffffh
        push -1
        lea edx, [ebp - 404h]
        push edx
        mov ecx, dword ptr [ebp - 828h]
        ; Exact mapped bytes E8 4A AB 0F 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xab
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 810h]
        add eax, 1
        mov dword ptr [ebp - 810h], eax
        mov dword ptr [ebp - 80ch], 0
        push 400h
        push 0
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes E8 0D 74 18 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 D8 FC FF FF: jmp 0x586c56e3
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3B B6 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb6
        __asm _emit 0x16
        __asm _emit 0x00
    }
}
