// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9EF0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_584a9ef0_584A9EF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e09fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 48h
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
        mov dword ptr [ebp - 38h], ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2D 01 00 00: call 0x584aa050
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 1F FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a9f3f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F4 21 FE FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x584aa033
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AF 01 00 00: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 76 FB FF FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 93 02 00 00: call 0x584aa200
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 29h], al
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B1 FD FF FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 80ch
        ; Exact mapped bytes E8 7A 70 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x70
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 0D: je 0x584a9faa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BB 6D FF FF: call 0x584a0d60
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x584a9fb1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 34h], edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F4 D4 FD FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        movzx eax, byte ptr [ebp - 29h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 10 DF FF FF: call 0x584a7ef0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B7 6D FF FF: call 0x584a0da0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x584aa005
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 38h]
        add edx, 8
        mov dword ptr [ebp - 50h], edx
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 1E E2 FD FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x584aa02e
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 0F: je 0x584aa020
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 95 FE FF FF: call 0x584a9eb0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x584aa027
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes E9 01 FF FF FF: jmp 0x584a9f34
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 08 70 38 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x70
        __asm _emit 0x38
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
