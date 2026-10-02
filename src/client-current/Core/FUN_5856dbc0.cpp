// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856DBC0 .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_5856dbc0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0fffffd80h
        ; Exact mapped bytes 0F 8E B2 01 00 00: jle 0x5856dd92
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 280h
        ; Exact mapped bytes 0F 8D A5 01 00 00: jge 0x5856dd92
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0fffffe00h
        ; Exact mapped bytes 0F 8E 98 01 00 00: jle 0x5856dd92
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 200h
        ; Exact mapped bytes 0F 8D 8B 01 00 00: jge 0x5856dd92
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 52: je 0x5856dc62
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes F3 0F 2A 45 08: cvtsi2ss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 5E 05 18 52 89 58: divss xmm0, dword ptr [0x58895218]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F0: movss dword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F3 0F 2A 45 10: cvtsi2ss xmm0, dword ptr [ebp + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 11 45 F4: movss dword ptr [ebp - 0xc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F3 0F 2A 45 0C: cvtsi2ss xmm0, dword ptr [ebp + 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 5E 05 18 52 89 58: divss xmm0, dword ptr [0x58895218]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        sub esp, 0ch
        mov ecx, esp
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 44 DF 24 00: call 0x587bbba0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x5856dd7e
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 9
        ; Exact mapped bytes 7F 21: jg 0x5856dc8f
        __asm _emit 0x7f
        __asm _emit 0x21
        cmp dword ptr [ebp - 18h], 9
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5856dd03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 37: je 0x5856dcb5
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 74 4A: je 0x5856dcce
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 74 60: je 0x5856dcea
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x5856dd67
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 10h
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5856dd1c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 19h
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5856dd35
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 3e8h
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x5856dd4e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x5856dd67
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x5856dd7e
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 20h], eax
        push 0fffffce0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        nop
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x5856dd7e
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 24h], eax
        push 0fffff9c0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        nop
        ; Exact mapped bytes EB 7B: jmp 0x5856dd7e
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 28h], eax
        push 0fffff6a0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        ; Exact mapped bytes EB 62: jmp 0x5856dd7e
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 2ch], eax
        push 0fffff380h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        nop
        ; Exact mapped bytes EB 49: jmp 0x5856dd7e
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 30h], eax
        push 0fffff060h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 30: jmp 0x5856dd7e
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 34h], eax
        push 0ffffd8f0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        nop
        ; Exact mapped bytes EB 17: jmp 0x5856dd7e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 38h], eax
        push 0ffffd8f0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B4 32 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x32
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 0ch
    }
}
