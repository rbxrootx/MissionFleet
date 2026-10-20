// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58596E10 .. +0x1EE bytes.
extern "C" __declspec(naked) void FUN_58596e10_58596E10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588845e7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 9e8h], 30h
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58596e57
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [edx + 9e8h]
        ; Exact mapped bytes 0F 8D 53 01 00 00: jge 0x58596fbc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FE 9D 2B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9d
        __asm _emit 0x2b
        __asm _emit 0x00
        cdq
        mov ecx, 6
        idiv ecx
        mov dword ptr [ebp - 24h], edx
        push 84h
        ; Exact mapped bytes E8 81 A1 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa1
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 74: je 0x58596f0a
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 898h
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes E8 C1 9D 2B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9d
        __asm _emit 0x2b
        __asm _emit 0x00
        cdq
        mov ecx, 7d0h
        idiv ecx
        mov eax, 300h
        sub eax, edx
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes E8 AA 9D 2B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9d
        __asm _emit 0x2b
        __asm _emit 0x00
        cdq
        mov ecx, 0fa0h
        idiv ecx
        mov eax, 834h
        sub eax, edx
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes 8B 0D A4 06 96 58: mov ecx, dword ptr [0x589606a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D DC EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        movzx edx, word ptr [ebp - 0eh]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 10h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4B 09 F5 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58596f11
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + edx*4 + 810h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 810h]
        mov dword ptr [ebp - 38h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 65 E6 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 810h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 DB EE EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xee
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 810h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 21 EE EE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xee
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 810h]
        mov dword ptr [ebp - 44h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 74 DB F2 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 810h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 9A 8C F6 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8c
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 92 FE FF FF: jmp 0x58596e4e
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 70h], 64h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0a4h]
        add ecx, 0d2h
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 74h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 78h], 384h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 7ch], 168h
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
        mov esp, ebp
        pop ebp
        ret
    }
}
