// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563C80 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_58563c80_58563C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        imul eax, dword ptr [ebp - 10h], 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [ebp - 0ch]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 45 D3 2E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd3
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D E0: fstp qword ptr [ebp - 0x20]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe0
        ; Exact mapped bytes F2 0F 10 45 E8: movsd xmm0, qword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 5E 45 E0: divsd xmm0, qword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0xe0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 F8 78 2F 00: call 0x5885b5f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x78
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D C8: fstp qword ptr [ebp - 0x38]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xc8
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 43: jge 0x58563d47
        __asm _emit 0x7d
        __asm _emit 0x43
        ; Exact mapped bytes F2 0F 10 45 E8: movsd xmm0, qword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 5E 45 E0: divsd xmm0, qword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0xe0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 D5 78 2F 00: call 0x5885b5f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x78
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D D8: fstp qword ptr [ebp - 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 10 45 D8: movsd xmm0, qword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 59 05 A0 95 8A 58: mulsd xmm0, qword ptr [0x588a95a0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 05 98 95 8A 58: divsd xmm0, qword ptr [0x588a9598]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 4D: jmp 0x58563d94
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes F2 0F 10 45 E8: movsd xmm0, qword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 5E 45 E0: divsd xmm0, qword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0xe0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 92 78 2F 00: call 0x5885b5f0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x78
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D D0: fstp qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 10 45 D0: movsd xmm0, qword ptr [ebp - 0x30]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 59 05 A0 95 8A 58: mulsd xmm0, qword ptr [0x588a95a0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 05 98 95 8A 58: divsd xmm0, qword ptr [0x588a9598]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 0D A8 95 8A 58: movsd xmm1, qword ptr [0x588a95a8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5C C8: subsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 2C D1: cvttsd2si edx, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 180h], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
