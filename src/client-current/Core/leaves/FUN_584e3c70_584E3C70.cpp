// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E3C70 .. +0x199 bytes.
extern "C" __declspec(naked) void FUN_584e3c70_584E3C70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x584e3c91
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x584e3df8
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x584e3c9d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x584e3ca2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x584e3df8
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 2D FA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 0D FA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 1C FB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 2D FA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 1D FB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        sub eax, esi
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 4]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 2C FA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 28 1A FB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 1B FB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1b
        __asm _emit 0xfb
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 2C FA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 1C FB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 14h], esi
        cmp dword ptr [ebp - 18h], 0fffffd80h
        ; Exact mapped bytes 0F 8E AE 00 00 00: jle 0x584e3df8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 280h
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x584e3df8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0fffffe00h
        ; Exact mapped bytes 0F 8E 94 00 00 00: jle 0x584e3df8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 200h
        ; Exact mapped bytes 0F 8D 87 00 00 00: jge 0x584e3df8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 2A 45 E8: cvtsi2ss xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
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
        ; Exact mapped bytes F3 0F 2A 05 90 20 96 58: cvtsi2ss xmm0, dword ptr [0x58962090]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F4: movss dword ptr [ebp - 0xc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F3 0F 2A 45 EC: cvtsi2ss xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
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
        push ecx
        ; Exact mapped bytes F3 0F 10 05 5C 1A 8A 58: movss xmm0, dword ptr [0x588a1a5c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push ecx
        ; Exact mapped bytes F3 0F 10 05 80 5A 89 58: movss xmm0, dword ptr [0x58895a80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7A 7D 2D 00: call 0x587bbb40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7d
        __asm _emit 0x2d
        __asm _emit 0x00
        sub esp, 0ch
        mov edx, esp
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BC 7D 2D 00: call 0x587bbba0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4B D2 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd2
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
