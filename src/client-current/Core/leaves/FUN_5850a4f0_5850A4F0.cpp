// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A4F0 .. +0x23B bytes.
extern "C" __declspec(naked) void FUN_5850a4f0_5850A4F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880a0dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 70h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 BD CD FB FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 DE D6 F7 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        and eax, 3000h
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 2000h
        ; Exact mapped bytes 75 06: jne 0x5850a549
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 31h], 1
        ; Exact mapped bytes EB 04: jmp 0x5850a54d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 31h], 0
        mov al, byte ptr [ebp - 31h]
        mov byte ptr [ebp - 35h], al
        cmp dword ptr [ebp - 3ch], 3000h
        ; Exact mapped bytes 75 06: jne 0x5850a562
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 32h], 1
        ; Exact mapped bytes EB 04: jmp 0x5850a566
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 32h], 0
        mov cl, byte ptr [ebp - 32h]
        mov byte ptr [ebp - 34h], cl
        movzx edx, byte ptr [ebp - 34h]
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x5850a583
        __asm _emit 0x74
        __asm _emit 0x0f
        or eax, 0ffffffffh
        mov dword ptr [ebp - 50h], 0ffffffffh
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 0E: jmp 0x5850a591
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 D5 14 00 00: call 0x5850ba60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4ch], edx
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 58h], ecx
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 E2 A8 FF FF: call 0x58504e90
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 40h], eax
        movzx ecx, byte ptr [ebp - 35h]
        test ecx, ecx
        ; Exact mapped bytes 74 62: je 0x5850a624
        __asm _emit 0x74
        __asm _emit 0x62
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 1C: movsd xmm0, qword ptr [ebp + 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 2C F1 34 00: call 0x58859700
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf1
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D 84: fstp qword ptr [ebp - 0x7c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0x84
        ; Exact mapped bytes F2 0F 10 45 84: movsd xmm0, qword ptr [ebp - 0x7c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 66 0F 2F 05 10 3E 8A 58: comisd xmm0, xmmword ptr [0x588a3e10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x3e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 76 3B: jbe 0x5850a624
        __asm _emit 0x76
        __asm _emit 0x3b
        lea edx, [ebp - 60h]
        push edx
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 1C: movsd xmm0, qword ptr [ebp + 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B1 F2 34 00: call 0x588598b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0x34
        __asm _emit 0x00
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        add esp, 0ch
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 00 6A 34 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6a
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        imul eax, eax, 7597h
        cdq
        mov ecx, 186a0h
        idiv ecx
        add eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov edx, dword ptr [ebp - 40h]
        add edx, 32h
        push edx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 FB 16 00 00: call 0x5850bd30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 1C: movsd xmm0, qword ptr [ebp + 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 19 B4 FF FF: call 0x58505a60
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [ebp - 33h], al
        movzx eax, byte ptr [ebp - 33h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5850a662
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 B3 D5 F7 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 0E: jmp 0x5850a670
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 A6 D5 F7 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xff
        and eax, 0ffffffefh
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        push 0
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 67 E5 FF FF: call 0x58508bf0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 68h], eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 49 A3 F7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 1C 79 FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 1C: movsd xmm0, qword ptr [ebp + 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 D7 24 00 00: call 0x5850cba0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [ebp - 74h], eax
        movzx eax, byte ptr [ebp - 33h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 60 B6 FB FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        movzx edx, byte ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 22 A8 FF FF: call 0x58504f20
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 23 F6 F9 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 2B 69 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x69
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
