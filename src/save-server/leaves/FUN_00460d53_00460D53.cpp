// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460D53 .. +0x286 bytes.
extern "C" __declspec(naked) void FUN_00460d53_00460D53() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 06 0D 00: call 0x531416
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 63c7d0h
        ; Exact mapped bytes E8 8E 94 07 00: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x460d86
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 4C 02 00 00: jmp 0x460fd2
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x460fd2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE EB 0E 00: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 63ccf8h
        ; Exact mapped bytes E8 45 94 07 00: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 02: jne 0x460dcc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB CB: jmp 0x460d97
        __asm _emit 0xeb
        __asm _emit 0xcb
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1C: jne 0x460dee
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 11: je 0x460dec
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 1ch]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 74 02: je 0x460dee
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB A9: jmp 0x460d97
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov dword ptr [ebp - 18h], 8000ffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B7 F9 FF FF: call 0x4607b4
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 01 00 00: je 0x460fa5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 6A 01 00 00: je 0x460fa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x460f91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 BF C7 0E 00: call 0x54d624
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x460f7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x460f75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx], 18h
        mov eax, dword ptr [ebp - 28h]
        mov eax, dword ptr [eax]
        xor edx, edx
        mov ecx, 4
        div ecx
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x460eb6
        __asm _emit 0x74
        __asm _emit 0x14
        push 1d6h
        push 67c8a4h
        ; Exact mapped bytes E8 8F 7E 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x460eb6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x460e90
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4], 1
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 8], 1
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0ch], 1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DB 75 0C 00: call 0x5284bd
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x75
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E6 75 0C 00: call 0x5284d6
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x75
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 14h], eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 34h], 8
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x460f20
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 34h]
        or al, 40h
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 30h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 0
        push 0
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 11: jge 0x460f6b
        __asm _emit 0x7d
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 67c914h
        ; Exact mapped bytes E8 AD F6 03 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x460fcd
        __asm _emit 0xeb
        __asm _emit 0x28
        push 0
        push 2
        push 6
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 F7 FF FF: call 0x460743
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 11: jge 0x460fcd
        __asm _emit 0x7d
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 67c934h
        ; Exact mapped bytes E8 4B F6 03 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 C5 FD FF FF: jmp 0x460d97
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
