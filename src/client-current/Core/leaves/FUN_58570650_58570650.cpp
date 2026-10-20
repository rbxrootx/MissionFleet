// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570650 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_58570650_58570650() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 9ch], ecx
        push 48h
        push 0
        lea eax, [ebp - 98h]
        push eax
        ; Exact mapped bytes E8 97 C7 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc7
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 58: je 0x585706da
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 18h
        lea edx, [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 EF 3A 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x3a
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        push 49h
        push 0
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 6F C7 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc7
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 48h
        lea ecx, [ebp - 98h]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 DA C1 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc1
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 48h
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 8001b111h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 B9 C2 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc2
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x585706f7
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 8001b111h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 9A C2 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc2
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4F 09 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x09
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
