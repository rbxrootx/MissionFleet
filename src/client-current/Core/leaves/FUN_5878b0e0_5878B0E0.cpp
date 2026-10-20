// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B0E0 .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_5878b0e0_5878B0E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890e97h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
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
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 98 CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x98
        __asm _emit 0xcf
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 A8 CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa8
        __asm _emit 0xcf
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5878b125
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x5878b25f
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 98 CF FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x98
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 92 CC F9 FF: call 0x58727de0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, 82h
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        add edx, 0d5h
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AA A4 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 37: je 0x5878b1b7
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5878b1a6
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878b1ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], 0
        push 0d74h
        ; Exact mapped bytes E8 43 5E 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 15: je 0x5878b1e9
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5C 3D FC FF: call 0x5874ef40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878b1f0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 02: jne 0x5878b211
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x5878b25f
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 34h], edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 70 02 FA FF: call 0x5872b4a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 9ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB F7 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 82 01 00 00: call 0x5878b3e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
