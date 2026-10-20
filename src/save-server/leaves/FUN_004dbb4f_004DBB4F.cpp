// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DBB4F .. +0x1BD bytes.
extern "C" __declspec(naked) void FUN_004dbb4f_004DBB4F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 67 4B 06 00: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x4dbcf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x4dbcf7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5E: je 0x4dbbed
        __asm _emit 0x74
        __asm _emit 0x5e
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 21: je 0x4dbbb6
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes E8 BF CC FF FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x4dbbb6
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 0A: je 0x4dbbb6
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 20h]
        ; Exact mapped bytes E8 63 05 00 00: call 0x4dc124
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 58 05 00 00: call 0x4dc124
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes E8 4D 05 00 00: call 0x4dc124
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 42 05 00 00: call 0x4dc124
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24h]
        ; Exact mapped bytes E8 37 05 00 00: call 0x4dc124
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7E 5E 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 686d24h
        ; Exact mapped bytes E8 31 1A 06 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x4dbcf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x4dbc33
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 9F BB F8 FF: call 0x4677c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 0F 83 C4 00 00 00: jae 0x4dbcf7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0bch], 0
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x4dbcf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 21: je 0x4dbc74
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 61 BB F8 FF: call 0x4677c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes E8 AF B6 F8 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push 0
        ; Exact mapped bytes E8 C4 05 FF FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0bch]
        push eax
        ; Exact mapped bytes E8 03 AB F8 FF: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xab
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 4F: jne 0x4dbcee
        __asm _emit 0x75
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0bch]
        push ecx
        push 676848h
        ; Exact mapped bytes E8 62 49 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x4dbcee
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 CB AA F8 FF: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x4dbce8
        __asm _emit 0x75
        __asm _emit 0x11
        push 55h
        push 67683ch
        ; Exact mapped bytes E8 5D D0 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dbce8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4dbcce
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 48 05 FF FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [edx + 10h], 0
        setne al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
