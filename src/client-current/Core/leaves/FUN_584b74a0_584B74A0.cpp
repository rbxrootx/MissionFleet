// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B74A0 .. +0x3A4 bytes.
extern "C" __declspec(naked) void FUN_584b74a0_584B74A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 450h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 448h], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0F: je 0x584b74ce
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 448h]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 448h]
        ; Exact mapped bytes 0F BF 42 7C: movsx eax, word ptr [edx + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x7c
        cmp eax, 2
        ; Exact mapped bytes 7D 21: jge 0x584b74fe
        __asm _emit 0x7d
        __asm _emit 0x21
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 68 FD FF FF: call 0x584b7260
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 36 03 00 00: jmp 0x584b7834
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 440h], ecx
        mov byte ptr [ebp - 438h], 20h
        push 3ffh
        push 0
        lea edx, [ebp - 437h]
        push edx
        ; Exact mapped bytes E8 EF 58 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x58
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 38h], 20h
        push 31h
        push 0
        lea eax, [ebp - 37h]
        push eax
        ; Exact mapped bytes E8 DB 58 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x58
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 450h], 0
        mov dword ptr [ebp - 44ch], 0
        mov dword ptr [ebp - 43ch], 0
        mov dword ptr [ebp - 444h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584b7571
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 444h]
        add ecx, 1
        mov dword ptr [ebp - 444h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 444h], eax
        ; Exact mapped bytes 0F 8F AD 02 00 00: jg 0x584b7834
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 444h]
        mov ecx, dword ptr [ebp - 43ch]
        mov dl, byte ptr [eax]
        mov byte ptr [ebp + ecx - 38h], dl
        mov eax, dword ptr [ebp - 43ch]
        ; Exact mapped bytes 0F BE 4C 05 C8: movsx ecx, byte ptr [ebp + eax - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xc8
        cmp ecx, 20h
        ; Exact mapped bytes 74 6A: je 0x584b7616
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes 0F BE 44 15 C8: movsx eax, byte ptr [ebp + edx - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xc8
        cmp eax, 9
        ; Exact mapped bytes 74 5A: je 0x584b7616
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes 0F BE 54 0D C8: movsx edx, byte ptr [ebp + ecx - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xc8
        cmp edx, 0ah
        ; Exact mapped bytes 74 4A: je 0x584b7616
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 43ch]
        ; Exact mapped bytes 0F BE 4C 05 C8: movsx ecx, byte ptr [ebp + eax - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 74 3B: je 0x584b7616
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes 0F BE 44 15 C8: movsx eax, byte ptr [ebp + edx - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xc8
        cmp eax, 0dh
        ; Exact mapped bytes 74 2B: je 0x584b7616
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 43ch]
        add ecx, 1
        mov dword ptr [ebp - 43ch], ecx
        cmp dword ptr [ebp - 43ch], 30h
        ; Exact mapped bytes 7E 0C: jle 0x584b760f
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 450h], 1
        ; Exact mapped bytes EB 05: jmp 0x584b7614
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x584b7562
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x584b7625
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 43ch]
        add edx, 1
        mov dword ptr [ebp - 43ch], edx
        cmp dword ptr [ebp - 450h], 1
        ; Exact mapped bytes 74 1A: je 0x584b7648
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 44ch]
        add eax, dword ptr [ebp - 43ch]
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes 0F BF 51 7C: movsx edx, word ptr [ecx + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x7c
        cmp eax, edx
        ; Exact mapped bytes 7F 59: jg 0x584b76a1
        __asm _emit 0x7f
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 44ch]
        add eax, dword ptr [ebp - 43ch]
        mov dword ptr [ebp - 44ch], eax
        lea ecx, [ebp - 38h]
        push ecx
        push 400h
        lea edx, [ebp - 438h]
        push edx
        ; Exact mapped bytes E8 01 EF FC FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 43ch], 0
        mov eax, dword ptr [ebp - 448h]
        ; Exact mapped bytes 0F BF 48 7C: movsx ecx, word ptr [eax + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x7c
        push ecx
        push 0
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 81 57 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x57
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 450h], 0
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x584b7743
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 440h]
        push edx
        lea eax, [ebp - 438h]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 9C FB FF FF: call 0x584b7260
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 440h]
        add ecx, 1
        mov dword ptr [ebp - 440h], ecx
        mov edx, dword ptr [ebp - 43ch]
        mov dword ptr [ebp - 44ch], edx
        mov dword ptr [ebp - 43ch], 0
        push 400h
        push 0
        lea eax, [ebp - 438h]
        push eax
        ; Exact mapped bytes E8 14 57 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        push 588958d8h
        push 400h
        lea ecx, [ebp - 438h]
        push ecx
        ; Exact mapped bytes E8 5B EE FC FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 38h]
        push edx
        push 400h
        lea eax, [ebp - 438h]
        push eax
        ; Exact mapped bytes E8 46 EE FC FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes 0F BF 51 7C: movsx edx, word ptr [ecx + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x7c
        push edx
        push 0
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 D0 56 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 0ah
        ; Exact mapped bytes 74 10: je 0x584b7764
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 444h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 37: jne 0x584b779b
        __asm _emit 0x75
        __asm _emit 0x37
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 440h]
        push ecx
        lea edx, [ebp - 438h]
        push edx
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 D9 FA FF FF: call 0x584b7260
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 440h]
        add eax, 1
        mov dword ptr [ebp - 440h], eax
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x584b7834
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 0dh
        ; Exact mapped bytes 75 78: jne 0x584b7824
        __asm _emit 0x75
        __asm _emit 0x78
        cmp dword ptr [ebp - 44ch], 0
        ; Exact mapped bytes 7E 0E: jle 0x584b77c3
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 44ch]
        mov byte ptr [ebp + eax - 439h], 20h
        mov ecx, dword ptr [ebp - 444h]
        add ecx, 1
        mov dword ptr [ebp - 444h], ecx
        mov dword ptr [ebp - 44ch], 0
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 440h]
        push ecx
        lea edx, [ebp - 438h]
        push edx
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 61 FA FF FF: call 0x584b7260
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 440h]
        add eax, 1
        mov dword ptr [ebp - 440h], eax
        push 400h
        push 0
        lea ecx, [ebp - 438h]
        push ecx
        ; Exact mapped bytes E8 EF 55 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x55
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 440h], 0ah
        ; Exact mapped bytes 75 02: jne 0x584b782f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x584b7834
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 2E FD FF FF: jmp 0x584b7562
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 12 98 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x98
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
