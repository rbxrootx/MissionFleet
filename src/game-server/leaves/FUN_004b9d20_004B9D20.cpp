// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B9D20 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_004b9d20_004B9D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1b0h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4b9d3e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 12h
        ; Exact mapped bytes 73 13: jae 0x4b9d57
        __asm _emit 0x73
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx*8 + 5d1df0h]
        ; Exact mapped bytes 75 02: jne 0x4b9d55
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4b9d57
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x4b9d35
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax*8 + 5d1df0h]
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x4b9ed8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fch
        ; Exact mapped bytes 74 21: je 0x4b9d94
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx*8 + 5d1df4h]
        push eax
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 A5 6D FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b9d94
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 83 3D 2C ED 5D 00 01: cmp dword ptr [0x5ded2c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 12: je 0x4b9daf
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 83 3D 2C ED 5D 00 00: cmp dword ptr [0x5ded2c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 42: jne 0x4b9de8
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 83 3D E4 12 5D 00 01: cmp dword ptr [0x5d12e4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 39: jne 0x4b9de8
        __asm _emit 0x75
        __asm _emit 0x39
        push 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx*8 + 5d1df4h]
        push eax
        ; Exact mapped bytes E8 0B F6 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx*8 + 5d1df4h]
        push edx
        push -0ch
        ; Exact mapped bytes FF 15 88 22 5E 00: call dword ptr [0x5e2288]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x4b9ed8
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fch
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x4b9ed8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        lea eax, [ebp - 110h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 50 24 5E 00: call dword ptr [0x5e2450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b9e21
        __asm _emit 0x75
        __asm _emit 0x14
        push 58c648h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 22 00 FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp - 110h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 9D F5 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        cmp eax, 3ch
        ; Exact mapped bytes 76 2C: jbe 0x4b9e6a
        __asm _emit 0x76
        __asm _emit 0x2c
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 86 F5 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + eax - 3bh]
        mov dword ptr [ebp - 0ch], eax
        push 3
        push 58c644h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 D9 F9 FE FF: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        push 58cc10h
        lea edx, [ebp - 1b0h]
        push edx
        ; Exact mapped bytes E8 C5 FF FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        push eax
        lea ecx, [ebp - 1b0h]
        push ecx
        ; Exact mapped bytes E8 C2 FF FE FF: call 0x4a9e50
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 58c5bch
        lea edx, [ebp - 1b0h]
        push edx
        ; Exact mapped bytes E8 AE FF FE FF: call 0x4a9e50
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*8 + 5d1df4h]
        push ecx
        lea edx, [ebp - 1b0h]
        push edx
        ; Exact mapped bytes E8 94 FF FE FF: call 0x4a9e50
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 12010h
        push 58cbe8h
        lea eax, [ebp - 1b0h]
        push eax
        ; Exact mapped bytes E8 CB 22 00 00: call 0x4bc1a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
