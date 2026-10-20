// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854D6E0 .. +0x21B bytes.
extern "C" __declspec(naked) void FUN_5854d6e0_5854D6E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes F2 0F 2A 45 0C: cvtsi2sd xmm0, dword ptr [ebp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes F2 0F 2A 4D 08: cvtsi2sd xmm1, dword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 5E C1: divsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes F2 0F 10 05 A8 7E 8A 58: movsd xmm0, qword ptr [0x588a7ea8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d71b
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 B0 7E 8A 58: movsd xmm0, qword ptr [0x588a7eb0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d736
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 32h
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 B8 7E 8A 58: movsd xmm0, qword ptr [0x588a7eb8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d751
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 64h
        ; Exact mapped bytes E9 6F 01 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 C0 7E 8A 58: movsd xmm0, qword ptr [0x588a7ec0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d76c
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 96h
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 C8 7E 8A 58: movsd xmm0, qword ptr [0x588a7ec8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d787
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 0c8h
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 D0 7E 8A 58: movsd xmm0, qword ptr [0x588a7ed0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d7a2
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 0fah
        ; Exact mapped bytes E9 1E 01 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 D8 7E 8A 58: movsd xmm0, qword ptr [0x588a7ed8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d7bd
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 12ch
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 E0 7E 8A 58: movsd xmm0, qword ptr [0x588a7ee0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d7d8
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 15eh
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 E8 7E 8A 58: movsd xmm0, qword ptr [0x588a7ee8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d7f3
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 190h
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 F0 7E 8A 58: movsd xmm0, qword ptr [0x588a7ef0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d80e
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 1c2h
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 F8 7E 8A 58: movsd xmm0, qword ptr [0x588a7ef8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x7e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 0C: jbe 0x5854d829
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 1f4h
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x5854d8c0
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 00 7F 8A 58: movsd xmm0, qword ptr [0x588a7f00]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 09: jbe 0x5854d841
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 226h
        ; Exact mapped bytes EB 7F: jmp 0x5854d8c0
        __asm _emit 0xeb
        __asm _emit 0x7f
        ; Exact mapped bytes F2 0F 10 05 08 7F 8A 58: movsd xmm0, qword ptr [0x588a7f08]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 09: jbe 0x5854d859
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 258h
        ; Exact mapped bytes EB 67: jmp 0x5854d8c0
        __asm _emit 0xeb
        __asm _emit 0x67
        ; Exact mapped bytes F2 0F 10 05 10 7F 8A 58: movsd xmm0, qword ptr [0x588a7f10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 09: jbe 0x5854d871
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 28ah
        ; Exact mapped bytes EB 4F: jmp 0x5854d8c0
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes F2 0F 10 05 18 7F 8A 58: movsd xmm0, qword ptr [0x588a7f18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 09: jbe 0x5854d889
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 2bch
        ; Exact mapped bytes EB 37: jmp 0x5854d8c0
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes F2 0F 10 05 20 7F 8A 58: movsd xmm0, qword ptr [0x588a7f20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 09: jbe 0x5854d8a1
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 2eeh
        ; Exact mapped bytes EB 1F: jmp 0x5854d8c0
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes F2 0F 10 05 28 7F 8A 58: movsd xmm0, qword ptr [0x588a7f28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 09: jbe 0x5854d8b9
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 320h
        ; Exact mapped bytes EB 07: jmp 0x5854d8c0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 352h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x5854d8d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 384h
        ; Exact mapped bytes 7D 1A: jge 0x5854d8f4
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes F2 0F 10 04 D5 98 38 90 58: movsd xmm0, qword ptr [edx*8 + 0x58903898]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x98
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 F0: comisd xmm0, xmmword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 76 05: jbe 0x5854d8f2
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 05: jmp 0x5854d8f7
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB D4: jmp 0x5854d8c8
        __asm _emit 0xeb
        __asm _emit 0xd4
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
