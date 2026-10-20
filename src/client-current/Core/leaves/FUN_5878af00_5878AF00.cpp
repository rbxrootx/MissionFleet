// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AF00 .. +0x1D3 bytes.
extern "C" __declspec(naked) void FUN_5878af00_5878AF00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890e57h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 9A CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x9a
        __asm _emit 0xcf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 A9 CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa9
        __asm _emit 0xcf
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5878af45
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x5878b0c2
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 9A CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 74 37: je 0x5878af98
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5878af87
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878af8e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        push 27ch
        ; Exact mapped bytes E8 62 60 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x5878afc6
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3F D1 D6 FF: call 0x584f8100
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878afcd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 75 05: jne 0x5878aff1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x5878b0c2
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E2 BE F1 FF: call 0x586a6ef0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbe
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 44h]
        sub eax, 1fh
        push eax
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 47h
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F0 A5 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 34h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 4A AF CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xaf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 38h], edx
        push 2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 04 AD CF FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xad
        __asm _emit 0xcf
        __asm _emit 0xff
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 F9 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6F 03 00 00: call 0x5878b3e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 4A: je 0x5878b0c2
        __asm _emit 0x74
        __asm _emit 0x4a
        push 4
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10h
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 06 18 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 BB D6 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xbb
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        lea ecx, [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 15h
        push edx
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AF 01 00 00: call 0x5878b270
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
