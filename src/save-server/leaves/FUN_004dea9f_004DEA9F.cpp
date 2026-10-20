// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DEA9F .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_004dea9f_004DEA9F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e40dh
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
        sub esp, 15ch
        push ebx
        push esi
        push edi
        push 1
        push 104h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 96 49 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4deae8
        __asm _emit 0x75
        __asm _emit 0x14
        push 216h
        push 677f28h
        ; Exact mapped bytes E8 5D A2 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4deae8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4deac0
        __asm _emit 0x75
        __asm _emit 0xd2
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 104h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 10 B9 68 00: call dword ptr [0x68b910]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x4deb3e
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4deb24
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 677fa0h
        ; Exact mapped bytes E8 F4 1A FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push 104h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x4dec31
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C1 61 04 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 EA 00 00 00: call 0x4dec44
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        push 0
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 36 62 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 14 B9 68 00: call dword ptr [0x68b914]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 37: jne 0x4debb6
        __asm _emit 0x75
        __asm _emit 0x37
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 23 62 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 677fcch
        ; Exact mapped bytes E8 83 1A FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 164h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3E DD FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 164h]
        ; Exact mapped bytes EB 7B: jmp 0x4dec31
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 18h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x4debca
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 A8 BD 68 00: call dword ptr [0x68bda8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 75 3E: jne 0x4dec12
        __asm _emit 0x75
        __asm _emit 0x3e
        lea edx, [ebp - 15ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 18 B9 68 00: call dword ptr [0x68b918]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], eax
        cmp dword ptr [ebp - 160h], -1
        ; Exact mapped bytes 74 1E: je 0x4dec12
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        ; Exact mapped bytes FF 15 1C B9 68 00: call dword ptr [0x68b91c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 130h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C1 DC FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 168h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
