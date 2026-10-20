// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555A93 .. +0x1D0 bytes.
extern "C" __declspec(naked) void FUN_00555a93_00555A93() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 24h], 0
        push 750h
        push 67c1e0h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 92 47 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 8B D9 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x555af3
        __asm _emit 0x75
        __asm _emit 0x14
        push 751h
        push 67c1e0h
        ; Exact mapped bytes E8 52 32 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555af3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x555ace
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x555b24
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5A D9 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x555b24
        __asm _emit 0x75
        __asm _emit 0x14
        push 753h
        push 67c1e0h
        ; Exact mapped bytes E8 21 32 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555b24
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x555af9
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x555b4e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 10h]
        push eax
        xor ecx, ecx
        ; Exact mapped bytes E8 94 6D FC FF: call 0x51c8e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x555b5c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x555b80
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 20h]
        push edx
        xor ecx, ecx
        ; Exact mapped bytes E8 62 6D FC FF: call 0x51c8e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x555b8e
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 84 0C 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 2ch]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 24 BA 68 00: call dword ptr [0x68ba24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1D B9 FD FF: call 0x5314cb
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 F1 FC FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 09: jne 0x555bc7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 36: jmp 0x555bfd
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 BA 03 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 F6 79 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x79
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 D9 73 FF FF: call 0x54cff9
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 05: jne 0x555c3b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A1 D2 F4 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd2
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 1
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 8], 0
        lea esp, [ebp - 40h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
