// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BBDC0 .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_587bbdc0_587BBDC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 3E: je 0x587bbe1a
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 F0: movss dword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F3 0F 2A 45 08: cvtsi2ss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 11 45 F4: movss dword ptr [ebp - 0xc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
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
        ; Exact mapped bytes E8 8C FD FF FF: call 0x587bbba0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x587bbf07
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 9
        ; Exact mapped bytes 7F 1D: jg 0x587bbe43
        __asm _emit 0x7f
        __asm _emit 0x1d
        cmp dword ptr [ebp - 18h], 9
        ; Exact mapped bytes 74 74: je 0x587bbea0
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2F: je 0x587bbe61
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 74 3E: je 0x587bbe76
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 74 4D: je 0x587bbe8b
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x587bbef4
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 10h
        ; Exact mapped bytes 74 6C: je 0x587bbeb5
        __asm _emit 0x74
        __asm _emit 0x6c
        cmp dword ptr [ebp - 18h], 19h
        ; Exact mapped bytes 74 7B: je 0x587bbeca
        __asm _emit 0x74
        __asm _emit 0x7b
        cmp dword ptr [ebp - 18h], 3e8h
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x587bbedf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x587bbef4
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x587bbf07
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fffffce0h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 7C: jmp 0x587bbf07
        __asm _emit 0xeb
        __asm _emit 0x7c
        push 0fffff9c0h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 67: jmp 0x587bbf07
        __asm _emit 0xeb
        __asm _emit 0x67
        push 0fffff6a0h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 52: jmp 0x587bbf07
        __asm _emit 0xeb
        __asm _emit 0x52
        push 0fffff380h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 3D: jmp 0x587bbf07
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 0fffff060h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 28: jmp 0x587bbf07
        __asm _emit 0xeb
        __asm _emit 0x28
        push 0ffffd8f0h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 13: jmp 0x587bbf07
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0ffffd8f0h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3F 51 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
