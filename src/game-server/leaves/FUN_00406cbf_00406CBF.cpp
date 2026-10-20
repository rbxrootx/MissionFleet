// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406CBF .. +0x222 bytes.
extern "C" __declspec(naked) void FUN_00406cbf_00406CBF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 45ch], 8010000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 460h], 10000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 38 00 00: call 0x40a520
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406d04
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 01 00 00: call 0x406ee1
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CD 01 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 3B 00 00: call 0x40a860
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406d21
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 25 00 00: call 0x4092dd
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 38 00 00: call 0x40a560
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406d3e
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 04 00 00: call 0x40716a
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 38 00 00: call 0x40a5a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406d5b
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 05 00 00: call 0x40729a
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 3C 00 00: call 0x40a9a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406d78
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 31 00 00: call 0x409e93
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 38 00 00: call 0x40a5e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x406d90
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 38 00 00: call 0x40a620
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x406d95
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 3C 01 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 38 00 00: call 0x40a660
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x406dad
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 38 00 00: call 0x40a6a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x406db2
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 39 00 00: call 0x40a6e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406dcf
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 08 00 00: call 0x4076c7
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 39 00 00: call 0x40a720
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406dec
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 1D 00 00: call 0x408b71
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 39 00 00: call 0x40a760
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406e09
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 20 00 00: call 0x408e36
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 39 00 00: call 0x40a7a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406e26
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 20 00 00: call 0x408e4a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 39 00 00: call 0x40a7e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x406e43
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 20 00 00: call 0x408f2b
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x406ed1
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 39 00 00: call 0x40a820
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x406e5d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 22 00 00: call 0x4090e6
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 74: jmp 0x406ed1
        __asm _emit 0xeb
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 3A 00 00: call 0x40a920
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x406e77
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 27 00 00: call 0x4095a6
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x406ed1
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 3A 00 00: call 0x40a960
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x406e91
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 28 00 00: call 0x409712
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 40: jmp 0x406ed1
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 3A 00 00: call 0x40a8a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x406eab
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 2A 00 00: call 0x409935
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x406ed1
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 3A 00 00: call 0x40a8e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x406ec5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 2D 00 00: call 0x409bea
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x406ed1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 23 00 00: call 0x4091fc
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 05 19 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
