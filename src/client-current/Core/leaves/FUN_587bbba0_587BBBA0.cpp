// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BBBA0 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_587bbba0_587BBBA0() {
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
        ; Exact mapped bytes 74 3D: je 0x587bbbf9
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        push ecx
        ; Exact mapped bytes F3 0F 10 45 10: movss xmm0, dword ptr [ebp + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push ecx
        ; Exact mapped bytes F3 0F 10 45 0C: movss xmm0, dword ptr [ebp + 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push ecx
        ; Exact mapped bytes F3 0F 10 45 08: movss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 4ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x587bbcfd
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 5F 96 58: mov ecx, dword ptr [0x58965f9c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 FC FF FF: call 0x587bb900
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 45 08: movss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 5C 45 F0: subss xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F3 0F 11 45 08: movss dword ptr [ebp + 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 10 45 0C: movss xmm0, dword ptr [ebp + 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 5C 45 F4: subss xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F3 0F 11 45 0C: movss dword ptr [ebp + 0xc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 10 45 10: movss xmm0, dword ptr [ebp + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 5C 45 F8: subss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes F3 0F 11 45 10: movss dword ptr [ebp + 0x10], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 10 45 08: movss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 59 45 08: mulss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 10 4D 10: movss xmm1, dword ptr [ebp + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 59 4D 10: mulss xmm1, dword ptr [ebp + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 10 4D 0C: movss xmm1, dword ptr [ebp + 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 59 4D 0C: mulss xmm1, dword ptr [ebp + 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 5A C0: cvtss2sd xmm0, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B4 53 09 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes D9 5D E8: fstp dword ptr [ebp - 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xe8
        ; Exact mapped bytes F3 0F 10 05 B0 5A 89 58: movss xmm0, dword ptr [0x58895ab0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 0F 2F 45 E8: comiss xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 76 6A: jbe 0x587bbcea
        __asm _emit 0x76
        __asm _emit 0x6a
        ; Exact mapped bytes F3 0F 10 45 E8: movss xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 0F 2F 05 C8 52 89 58: comiss xmm0, dword ptr [0x588952c8]
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 76 2A: jbe 0x587bbcb8
        __asm _emit 0x76
        __asm _emit 0x2a
        ; Exact mapped bytes F3 0F 10 05 C8 52 89 58: movss xmm0, dword ptr [0x588952c8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5C 45 E8: subss xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F3 0F 59 05 B4 5A 89 58: mulss xmm0, dword ptr [0x58895ab4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 10: jmp 0x587bbcc8
        __asm _emit 0xeb
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes F3 0F 10 45 08: movss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 59 05 5C 1A 8A 58: mulss xmm0, dword ptr [0x588a1a5c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 10h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 13: jmp 0x587bbcfd
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0ffffd8f0h
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 49 53 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
