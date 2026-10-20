// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005154FE .. +0x1E5 bytes.
extern "C" __declspec(naked) void FUN_005154fe_005154FE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D0 D6 FD FF: call 0x4f2be3
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 1D: je 0x515539
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 3ch]
        mov ecx, dword ptr [eax]
        push ecx
        push 5c8a4ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E2 F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 40h]
        push eax
        push 5c8a64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 13 F8 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 44h]
        push edx
        push 5c8a74h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F8 F7 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        push 5c8a84h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD F7 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        push 5c8a90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C2 F7 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 70h]
        push edx
        push 5c8a9ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A7 F7 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 5c8ab0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8C F7 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 48h]
        push eax
        push 5c8ac4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 71 F7 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        push 5c8ad8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 F5 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 56 F7 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5156d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c0h]
        push edx
        push 5c8aech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 F4 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 28 F7 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 90h
        push eax
        push 5c8b04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 F4 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 99 B5 FE FF: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 5c8b14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 F4 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 27 B5 FE FF: call 0x500bb2
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0a0h
        push eax
        push 5c8b28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A F4 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 4D B5 FE FF: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 1D: je 0x5156d0
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0b0h
        push edx
        push 5c8b3ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 F4 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 24 B5 FE FF: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 5c8b50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E F4 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
