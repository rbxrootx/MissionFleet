// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B85B0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_585b85b0_585B85B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 8E 1C 00: call 0x587814c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 18 57 90 58 00: cmp dword ptr [0x58905718], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 7B: je 0x585b864d
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 10 F3 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x10
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x585b85ed
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 3A ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 43: je 0x585b8636
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 38 ED FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x38
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 76 EF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x76
        __asm _emit 0xef
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        cmp ecx, 0ch
        ; Exact mapped bytes 7C 27: jl 0x585b8634
        __asm _emit 0x7c
        __asm _emit 0x27
        ; Exact mapped bytes 83 3D 38 D2 8F 58 00: cmp dword ptr [0x588fd238], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x585b8626
        __asm _emit 0x75
        __asm _emit 0x10
        push 0ch
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 59 FE FF: call 0x5859e010
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x585b8634
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0ch
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 59 FE FF: call 0x5859e010
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AC: jmp 0x585b85e2
        __asm _emit 0xeb
        __asm _emit 0xac
        push 1
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D FD FF FF: call 0x585b83a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 18 57 90 58 00 00 00 00: mov dword ptr [0x58905718], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 D1 ED FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd1
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 60 FC FF: call 0x5857e720
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
