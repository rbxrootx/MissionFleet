// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876DB90 .. +0x1C7 bytes.
extern "C" __declspec(naked) void FUN_5876db90_5876DB90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0ffffffh
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 97 D6 FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x97
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5876dbbe
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 8E D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 63: jne 0x5876dc21
        __asm _emit 0x75
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EA F3 D1 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes 77 50: ja 0x5876dc1f
        __asm _emit 0x77
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 85 58 DD 76 58: jmp dword ptr [eax*4 + 0x5876dd58]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xdd
        __asm _emit 0x76
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0ff9b00h
        ; Exact mapped bytes EB 3D: jmp 0x5876dc1f
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 4], 0ffh
        ; Exact mapped bytes EB 34: jmp 0x5876dc1f
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 86ffh
        ; Exact mapped bytes EB 2B: jmp 0x5876dc1f
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 86ffh
        ; Exact mapped bytes EB 22: jmp 0x5876dc1f
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 86ffh
        ; Exact mapped bytes EB 19: jmp 0x5876dc1f
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 86ffh
        ; Exact mapped bytes EB 10: jmp 0x5876dc1f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 86ffh
        ; Exact mapped bytes EB 07: jmp 0x5876dc1f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 86ffh
        ; Exact mapped bytes EB 16: jmp 0x5876dc37
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x5876dc30
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0ff9b00h
        ; Exact mapped bytes EB 07: jmp 0x5876dc37
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0ffh
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 35: je 0x5876dc72
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 115ch]
        mov dword ptr [ebp - 18h], edx
        push 0ff00h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8A 84 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1160h]
        mov dword ptr [ebp - 1ch], ecx
        push 0ff00h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 71 84 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 33: jmp 0x5876dca5
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 115ch]
        mov dword ptr [ebp - 20h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 55 84 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1160h]
        mov dword ptr [ebp - 24h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3C 84 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 10c0h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0E 84 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 ED 83 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x83
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x5876dd02
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 2
        ; Exact mapped bytes EB 07: jmp 0x5876dd09
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 3
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 8C D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 07: jne 0x5876dd26
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0cfh
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5f58h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 6D D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6d
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 10 8F D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8f
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
