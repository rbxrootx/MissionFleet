// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423229 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_00423229_00423229() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1a4h
        mov edx, dword ptr [ebp + 8]
        xor ecx, ecx
        mov eax, 44af88h
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 74 0B: je 0x42324b
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 8
        inc ecx
        cmp eax, 44b018h
        ; Exact mapped bytes 7C F1: jl 0x42323c
        __asm _emit 0x7c
        __asm _emit 0xf1
        push esi
        mov esi, ecx
        shl esi, 3
        cmp edx, dword ptr [esi + 44af88h]
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x423379
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 6C FC 44 00: mov eax, dword ptr [0x44fc6c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x423353
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x42327c
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 83 3D 94 A8 44 00 01: cmp dword ptr [0x44a894], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x423353
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0fch
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x423379
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1a4h]
        push 104h
        push eax
        push 0
        ; Exact mapped bytes FF 15 74 C2 43 00: call dword ptr [0x43c274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x4232b3
        __asm _emit 0x75
        __asm _emit 0x13
        lea eax, [ebp - 1a4h]
        push 43ff70h
        push eax
        ; Exact mapped bytes E8 CF 2E 00 00: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        lea eax, [ebp - 1a4h]
        push edi
        push eax
        lea edi, [ebp - 1a4h]
        ; Exact mapped bytes E8 7A B8 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        pop ecx
        cmp eax, 3ch
        ; Exact mapped bytes 76 29: jbe 0x4232f6
        __asm _emit 0x76
        __asm _emit 0x29
        lea eax, [ebp - 1a4h]
        push eax
        ; Exact mapped bytes E8 67 B8 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        lea eax, [ebp - 1a4h]
        sub eax, 3bh
        push 3
        add edi, eax
        push 43ff6ch
        push edi
        ; Exact mapped bytes E8 FD 33 00 00: call 0x4266f0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        lea eax, [ebp - 0a0h]
        push 43ff50h
        push eax
        ; Exact mapped bytes E8 79 2E 00 00: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0a0h]
        push edi
        push eax
        ; Exact mapped bytes E8 7C 2E 00 00: call 0x426190
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0a0h]
        push 43ff4ch
        push eax
        ; Exact mapped bytes E8 6B 2E 00 00: call 0x426190
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 44af8ch]
        lea eax, [ebp - 0a0h]
        push eax
        ; Exact mapped bytes E8 59 2E 00 00: call 0x426190
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 12010h
        lea eax, [ebp - 0a0h]
        push 43ff24h
        push eax
        ; Exact mapped bytes E8 14 33 00 00: call 0x426661
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        pop edi
        ; Exact mapped bytes EB 26: jmp 0x423379
        __asm _emit 0xeb
        __asm _emit 0x26
        lea eax, [ebp + 8]
        lea esi, [esi + 44af8ch]
        push 0
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes E8 DA B7 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi]
        push -0ch
        ; Exact mapped bytes FF 15 64 C1 43 00: call dword ptr [0x43c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        leave
        ret
    }
}
