// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449C1E .. +0x349 bytes.
extern "C" __declspec(naked) void FUN_00449c1e_00449C1E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 0F 84 04 03 00 00: je 0x449f56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 75 10: jne 0x449c6e
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 104h], 0
        ; Exact mapped bytes 0F 84 E8 02 00 00: je 0x449f56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x449df9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x449df9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 00 57 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 110h
        ; Exact mapped bytes E8 08 7A 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x7a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 110h
        ; Exact mapped bytes E8 8C 7A 0E 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 114h], eax
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 114h], 0ah
        ; Exact mapped bytes 0F 8C 99 00 00 00: jl 0x449d66
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 114h], 16h
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x449d66
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 10ch], 0
        ; Exact mapped bytes 75 55: jne 0x449d3e
        __asm _emit 0x75
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 10ch], 1
        mov esi, esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 C6 EA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 104h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 A2 EA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 104h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 7F EA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x449df4
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 10ch], 1
        ; Exact mapped bytes 75 55: jne 0x449dc7
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 10ch], 0
        mov esi, esp
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 104h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 3D EA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 19 EA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 F6 E9 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x449f58
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x449f56
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x449ed5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x449ed5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 75 55 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 110h
        ; Exact mapped bytes E8 7D 78 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 110h
        ; Exact mapped bytes E8 01 79 0E 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x79
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 114h], eax
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 114h], 0ah
        ; Exact mapped bytes 7C 31: jl 0x449e85
        __asm _emit 0x7c
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 114h], 16h
        ; Exact mapped bytes 7D 25: jge 0x449e85
        __asm _emit 0x7d
        __asm _emit 0x25
        mov esi, esp
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 104h]
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 104h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 5D E9 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x449ed0
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 80 25 00 00: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 1B: je 0x449ec0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 D0 25 00 00: call 0x44c490
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 84 D8 FF FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AE D7 FF FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x449f56
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 108h], 0
        ; Exact mapped bytes 74 2A: je 0x449f0b
        __asm _emit 0x74
        __asm _emit 0x2a
        mov esi, esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 108h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 108h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 DC E8 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4D: jmp 0x449f58
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 FA 24 00 00: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 1B: je 0x449f46
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 4A 25 00 00: call 0x44c490
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FE D7 FF FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 28 D7 FF FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7D E8 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
