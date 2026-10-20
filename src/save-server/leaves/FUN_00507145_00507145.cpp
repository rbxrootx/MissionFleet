// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507145 .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_00507145_00507145() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e4f3h
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
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 01 EC FC FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x50718d
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b6h
        push 678024h
        ; Exact mapped bytes E8 B8 1B 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50718d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x507173
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 91 7B 02 00: call 0x52ed2c
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 B1 F8 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x507288
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 B7 F8 01 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        push 639040h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BC 2F FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5071ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c0h
        push 678024h
        ; Exact mapped bytes E8 59 1B 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5071ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5071c7
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 0D DB 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 2
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x507274
        __asm _emit 0x74
        __asm _emit 0x5e
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 6E DB 01 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x507274
        __asm _emit 0x75
        __asm _emit 0x52
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 80 DB 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 79 02 00: call 0x52ec28
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 75 28: jne 0x507264
        __asm _emit 0x75
        __asm _emit 0x28
        push -1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C1 76 FC FF: call 0x4ce907
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 90 56 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x50732f
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 84 74 02 00: call 0x52e6f8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 69 56 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 21 FF FF FF: jmp 0x5071a9
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 70 70 02 00: call 0x52e300
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1E: jne 0x5072b7
        __asm _emit 0x75
        __asm _emit 0x1e
        push 6780b4h
        push 6780e4h
        ; Exact mapped bytes E8 6D 93 F9 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 52 76 FC FF: call 0x4ce907
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 70: jmp 0x507327
        __asm _emit 0xeb
        __asm _emit 0x70
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 60: jne 0x50731d
        __asm _emit 0x75
        __asm _emit 0x60
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB 73 02 00: call 0x52e6a2
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 60h], eax
        push 1dbh
        push 678024h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes E8 7D 2F FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 639040h
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 9D 2E FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50730b
        __asm _emit 0x75
        __asm _emit 0x14
        push 1dch
        push 678024h
        ; Exact mapped bytes E8 3A 1A 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50730b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x5072e3
        __asm _emit 0x75
        __asm _emit 0xd2
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 EC 75 FC FF: call 0x4ce907
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x507327
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D 70 02 00: call 0x52e3a4
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E3 77 FC FF: call 0x4ceb12
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
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
        ret
    }
}
