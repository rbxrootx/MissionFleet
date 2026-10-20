// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C0AA .. +0x3AC bytes.
extern "C" __declspec(naked) void FUN_0054c0aa_0054C0AA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eedah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 12ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x54c0df
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54c0f3
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d8h
        push 679318h
        ; Exact mapped bytes E8 52 CC FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c0f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x54c0cb
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x54c10d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54c121
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d9h
        push 679318h
        ; Exact mapped bytes E8 24 CC FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c121
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x54c0f9
        __asm _emit 0x75
        __asm _emit 0xd2
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 A4 BC 68 00: call dword ptr [0x68bca4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 1A: je 0x54c170
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 74 14: je 0x54c170
        __asm _emit 0x74
        __asm _emit 0x14
        push 1e4h
        push 679318h
        ; Exact mapped bytes E8 D5 CB FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c170
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x54c150
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 08: jne 0x54c184
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x54c196
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D 6C 02 00 00: jge 0x54c40e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 90 BC 68 00: call dword ptr [0x68bc90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        push 400h
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BC 68 00: call dword ptr [0x68bc9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 64: jne 0x54c233
        __asm _emit 0x75
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 28h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 57: je 0x54c233
        __asm _emit 0x74
        __asm _emit 0x57
        cmp dword ptr [ebp + 14h], 5
        ; Exact mapped bytes 7E 14: jle 0x54c1f6
        __asm _emit 0x7e
        __asm _emit 0x14
        push 1f1h
        push 679318h
        ; Exact mapped bytes E8 4F CB FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c1f6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54c1dc
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx*4], eax
        mov dword ptr [ebp - 20h], 0
        cmp dword ptr [ebp + 14h], 5
        ; Exact mapped bytes 7D 10: jge 0x54c225
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + ecx*4 + 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 2
        mov dword ptr [ebp + 14h], ecx
        ; Exact mapped bytes E9 D6 01 00 00: jmp 0x54c409
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 26: je 0x54c269
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 14h], 5
        ; Exact mapped bytes 75 20: jne 0x54c269
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + edx*4], 1
        ; Exact mapped bytes 75 14: jne 0x54c269
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 90 BC 68 00: call dword ptr [0x68bc90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        push 400h
        push 100h
        lea eax, [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 98 BC 68 00: call dword ptr [0x68bc98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x54c39e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x54c34f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 72 58 FE FF: call 0x531b1c
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 C2 06 F8 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 C4 8A FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x54c2d9
        __asm _emit 0x75
        __asm _emit 0x0d
        push 20h
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 77 0D F8 FF: call 0x4cd050
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        lea eax, [ebp - 12ch]
        push eax
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 0A 0D F8 FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 B4 8A FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 10h
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 B8 BC 68 00: call dword ptr [0x68bcb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + eax*4], 0
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + edx*4 - 4]
        add ecx, 1
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + edx*4 - 4], ecx
        mov dword ptr [ebp - 24h], 1
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 9F 05 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 4D: jmp 0x54c39c
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 A4 BC 68 00: call dword ptr [0x68bca4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x54c39c
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffh
        or al, 10h
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 28h]
        or ah, 4
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 8C BC 68 00: call dword ptr [0x68bc8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 6B: jmp 0x54c409
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 7E 62: jle 0x54c409
        __asm _emit 0x7e
        __asm _emit 0x62
        ; Exact mapped bytes 0F BE 95 D4 FE FF FF: movsx edx, byte ptr [ebp - 0x12c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x54c3c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 233h
        push 679318h
        ; Exact mapped bytes E8 7F C9 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c3c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x54c3a7
        __asm _emit 0x75
        __asm _emit 0xdb
        lea ecx, [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 A0 BC 68 00: call dword ptr [0x68bca0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        or ch, 4
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 8C BC 68 00: call dword ptr [0x68bc8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes E9 7F FD FF FF: jmp 0x54c18d
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 2C: jne 0x54c440
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [ebp + 14h], 5
        ; Exact mapped bytes 7E 14: jle 0x54c42e
        __asm _emit 0x7e
        __asm _emit 0x14
        push 242h
        push 679318h
        ; Exact mapped bytes E8 17 C9 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c42e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54c414
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx*4], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
