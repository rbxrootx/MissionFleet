// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BE160 .. +0x28A bytes.
extern "C" __declspec(naked) void FUN_584be160_584BE160() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e92eh
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
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E7 67 2F 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x67
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58895a1ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D 7C FC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        push 8
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        push ecx
        ; Exact mapped bytes E8 3D EC 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 2A EC 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xec
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 64h
        push eax
        ; Exact mapped bytes E8 17 EC 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xec
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        push ecx
        ; Exact mapped bytes E8 04 EC 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xec
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 74h
        push edx
        ; Exact mapped bytes E8 F1 EB 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xeb
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 9ch
        push eax
        ; Exact mapped bytes E8 DC EB 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        push ecx
        ; Exact mapped bytes E8 C9 EB 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 8ch
        push edx
        ; Exact mapped bytes E8 B3 EB 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xeb
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584be272
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x584be31f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 81 2D 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2d
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2E: je 0x584be2c1
        __asm _emit 0x74
        __asm _emit 0x2e
        push 15h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 68 FC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 190h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 64 40 FC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584be2c8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + ecx*4 + 0b0h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0b0h]
        mov dword ptr [ebp - 30h], eax
        push 101h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B1 72 2F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x72
        __asm _emit 0x2f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0b0h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C7 7B FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x584be269
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 DB 2C 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x2c
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3E: je 0x584be377
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 67 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 86 FC FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 7d0h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9E 8D 02 00: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x584be37e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 3b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3b4h]
        mov dword ptr [ebp - 44h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 03 72 2F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x72
        __asm _emit 0x2f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3b4h]
        mov dword ptr [ebp - 48h], eax
        push 101h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 4A 09 00 00: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 02 08 00 00: call 0x584bebd0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
