// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004608EF .. +0x266 bytes.
extern "C" __declspec(naked) void FUN_004608ef_004608EF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f71ch
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
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        push 111h
        push 67c8a4h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 3D 99 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        push 112h
        push 67c8a4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2A 99 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        push 1
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 23 2B 04 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x46095b
        __asm _emit 0x75
        __asm _emit 0x14
        push 113h
        push 67c8a4h
        ; Exact mapped bytes E8 EA 83 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x46095b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x460936
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 94 5E 0F 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 75 0B 0D 00: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x4609a4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 9E 01 00 00: jmp 0x460b42
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 65 01 00 00: je 0x460b28
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 3C 43 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 400h
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B5 6E 0D 00: call 0x53789c
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 26: jne 0x460a16
        __asm _emit 0x75
        __asm _emit 0x26
        push 67c8c8h
        push 67c908h
        ; Exact mapped bytes E8 16 FC 03 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 DB BE 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x460b42
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E9 42 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 F1 10 0D 00: call 0x531b1c
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 67c90ch
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 6C 11 04 00: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        push 26h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 04 04 04 00: call 0x4a0e4b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 07 6D 0D 00: call 0x537756
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 90 BC 68 00: call dword ptr [0x68bc90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 6F: jne 0x460ae1
        __asm _emit 0x75
        __asm _emit 0x6f
        push 13bh
        push 67c8a4h
        push 8
        ; Exact mapped bytes E8 7C B6 06 00: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 0D: je 0x460a9d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A7 68 0D 00: call 0x53733f
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x460aa4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 34h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 F7 68 0D 00: call 0x5373b9
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E0 42 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 410h
        push -1
        mov ecx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 47 6F 0D 00: call 0x537a28
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6f
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 C1 42 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 74h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        push 410h
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 6F 0D 00: call 0x537a28
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 14h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D3 BD 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 C4 BD 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D 69 0D 00: call 0x537499
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x69
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 68 B5 0E 00: call 0x54c0aa
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
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
