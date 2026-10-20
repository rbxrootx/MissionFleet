// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873360 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_58873360_58873360() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push 0ffffh
        push 173fh
        ; Exact mapped bytes E8 B8 CD FF FF: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        add esp, 8
        mov ebx, eax
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        and eax, 7ff00000h
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        cmp eax, 7ff00000h
        ; Exact mapped bytes 75 5D: jne 0x588733f6
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes E8 92 64 FE FF: call 0x58859830
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        sub eax, 1
        ; Exact mapped bytes 74 3A: je 0x588733e0
        __asm _emit 0x74
        __asm _emit 0x3a
        sub eax, 1
        ; Exact mapped bytes 74 35: je 0x588733e0
        __asm _emit 0x74
        __asm _emit 0x35
        sub eax, 1
        ; Exact mapped bytes 74 30: je 0x588733e0
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes F2 0F 10 4D 08: movsd xmm1, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x08
        push ebx
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        sub esp, 10h
        ; Exact mapped bytes F2 0F 58 05 C0 50 89 58: addsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 44 24 08: movsd qword ptr [esp + 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        push 0bh
        push 8
        ; Exact mapped bytes E8 F8 13 FF FF: call 0x588647d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        push 0ffffh
        push ebx
        ; Exact mapped bytes E8 45 CD FF FF: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        add esp, 8
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes E8 E5 7F 00 00: call 0x5887b3e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        add esp, 8
        ; Exact mapped bytes DD 55 F0: fst qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 10 4D F8: movsd xmm1, qword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 66 0F 2E C8: ucomisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0xc8
        lahf
        test ah, 44h
        ; Exact mapped bytes 7B 25: jnp 0x5887343d
        __asm _emit 0x7b
        __asm _emit 0x25
        test bl, 20h
        ; Exact mapped bytes 75 20: jne 0x5887343d
        __asm _emit 0x75
        __asm _emit 0x20
        push ebx
        sub esp, 10h
        ; Exact mapped bytes F2 0F 11 4C 24 08: movsd qword ptr [esp + 8], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push 0bh
        push 10h
        ; Exact mapped bytes E8 9B 13 FF FF: call 0x588647d0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        push 0ffffh
        push ebx
        ; Exact mapped bytes E8 E8 CC FF FF: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        add esp, 8
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
