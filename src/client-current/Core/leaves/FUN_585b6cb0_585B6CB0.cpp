// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B6CB0 .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_585b6cb0_585B6CB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885387h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
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
        mov dword ptr [ebp - 18h], ecx
        push 0d4h
        ; Exact mapped bytes E8 22 A3 27 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa3
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 43: je 0x585b6d38
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 04 EA ED FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 5
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        movzx eax, word ptr [ebp - 0eh]
        push eax
        push 258h
        push 0fffffce0h
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3D E2 F7 FF: call 0x58534f70
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe2
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x585b6d3f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], eax
        push 16h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 DD EC FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 2
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 DD EC FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EE EE F7 FF: call 0x58535c70
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xee
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 56 EE F7 FF: call 0x58535be0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xee
        __asm _emit 0xf7
        __asm _emit 0xff
        push 1
        push 0
        push 7
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 DD EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4C EF F7 FF: call 0x58535cf0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xef
        __asm _emit 0xf7
        __asm _emit 0xff
        push 1
        push 0
        push 8
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B DD EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D2 EF F7 FF: call 0x58535d90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xef
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 9
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF DC EC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B6 EE F7 FF: call 0x58535c90
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F8 EF F7 FF: call 0x58535de0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xef
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DE 0F ED FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0xed
        __asm _emit 0xff
        push 101h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B1 E7 1F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe7
        __asm _emit 0x1f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 37 F0 EC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8D EF EC FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0xec
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 33 8E F4 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 DC E8 ED FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 9
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3D F0 EC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
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
