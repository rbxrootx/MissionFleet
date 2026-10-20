// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786390 .. +0x34B bytes.
extern "C" __declspec(naked) void FUN_58786390_58786390() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890ae5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 68h
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
        ; Exact mapped bytes E8 97 BE CF FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xbe
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b6784h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ech], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0f4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0f8h], 0
        push 80h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 64h
        push edx
        ; Exact mapped bytes E8 BC 69 0C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x69
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        push 0ach
        ; Exact mapped bytes E8 A3 AB 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 51: je 0x587864c2
        __asm _emit 0x74
        __asm _emit 0x51
        push 0ch
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 E6 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe6
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3ch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 5
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 48h
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 23 58 D4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x58
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587864c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 0f4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 44h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B8 F0 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 32 F9 CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 EB AA 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 52: je 0x5878657b
        __asm _emit 0x74
        __asm _emit 0x52
        push 0dh
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A E5 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe5
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 48h
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6A 57 D4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x57
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58786582
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 58h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [edx + 0f8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 5ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 FF EF 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 79 F8 CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 32 AA 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2F: je 0x58786611
        __asm _emit 0x74
        __asm _emit 0x2f
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 E4 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 64 43 03 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58786618
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 0e8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 36 F8 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 30 4B 03 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        push 0bch
        ; Exact mapped bytes E8 99 A9 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 28: je 0x587866a3
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 1f4h
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B2 0F E0 FF: call 0x58587650
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x587866aa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ecx + 0ech], edx
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
