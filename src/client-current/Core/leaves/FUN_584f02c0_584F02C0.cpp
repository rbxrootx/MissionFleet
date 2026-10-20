// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F02C0 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_584f02c0_584F02C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 98h], ecx
        mov eax, dword ptr [ebp - 98h]
        movzx ecx, byte ptr [eax + 16h]
        cmp ecx, 1
        ; Exact mapped bytes 75 0C: jne 0x584f02f4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 DD E9 FF FF: call 0x584eecd0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 15 C4 BF 90 58: mov edx, dword ptr [0x5890bfc4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        sub edx, 1
        ; Exact mapped bytes 89 15 C4 BF 90 58: mov dword ptr [0x5890bfc4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x584f03f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 94h]
        push eax
        ; Exact mapped bytes FF 15 3C 42 89 58: call dword ptr [0x5889423c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        movzx ecx, word ptr [ebp - 88h]
        push ecx
        movzx edx, word ptr [ebp - 8ah]
        push edx
        movzx eax, word ptr [ebp - 8ch]
        push eax
        movzx ecx, word ptr [ebp - 8eh]
        push ecx
        movzx edx, word ptr [ebp - 92h]
        push edx
        movzx eax, word ptr [ebp - 94h]
        push eax
        push 588a24e4h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        mov ecx, dword ptr [ebp - 98h]
        add ecx, 30h
        ; Exact mapped bytes E8 87 10 00 00: call 0x584f13f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 76 17: jbe 0x584f0384
        __asm _emit 0x76
        __asm _emit 0x17
        push 0
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 2F 0A 00 00: call 0x584f0db0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 15: jmp 0x584f0399
        __asm _emit 0xeb
        __asm _emit 0x15
        push 1
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 18 0A 00 00: call 0x584f0db0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D C0 BF 90 58 00: cmp dword ptr [0x5890bfc0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 50: je 0x584f03f2
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D C0 BF 90 58: mov ecx, dword ptr [0x5890bfc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 27: je 0x584f03de
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 0a0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 60 FF FF FF: call dword ptr [ebp - 0xa0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f03e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes C7 05 C0 BF 90 58 00 00 00 00: mov dword ptr [0x5890bfc0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 52 0C 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
