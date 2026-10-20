// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570380 .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_58570380_58570380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ech
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ech], ecx
        mov dword ptr [ebp - 0e8h], 50000h
        push 48h
        push 0
        lea eax, [ebp - 0e4h]
        push eax
        ; Exact mapped bytes E8 5D CA 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 589604e0h
        push 18h
        lea ecx, [ebp - 0e4h]
        push ecx
        ; Exact mapped bytes E8 B7 3D 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        push 18h
        lea eax, [ebp - 0cch]
        push eax
        ; Exact mapped bytes E8 A2 3D 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 5E: je 0x58570445
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 18h
        lea edx, [ebp - 0b4h]
        push edx
        ; Exact mapped bytes E8 87 3D 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        push 49h
        push 0
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 07 CA 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 48h
        lea ecx, [ebp - 0e4h]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 72 C4 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 49h
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        push 0
        push 8001b111h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 4E C5 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc5
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 50: jmp 0x58570495
        __asm _emit 0xeb
        __asm _emit 0x50
        push 49h
        push 0
        lea edx, [ebp - 9ch]
        push edx
        ; Exact mapped bytes E8 BB C9 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc9
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 48h
        lea eax, [ebp - 0e4h]
        push eax
        lea ecx, [ebp - 9ch]
        push ecx
        ; Exact mapped bytes E8 23 C4 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 49h
        lea edx, [ebp - 9ch]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        push 0
        push 8001b111h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 FC C4 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc4
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B1 0B 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0b
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
