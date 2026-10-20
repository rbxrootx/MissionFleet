// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860A500 .. +0x221 bytes.
extern "C" __declspec(naked) void FUN_5860a500_5860A500() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886760h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 40h
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
        ; Exact mapped bytes E8 87 7D E7 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x7d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588adfd4h
        push 54h
        ; Exact mapped bytes E8 A4 6A 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6a
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2F: je 0x5860a59f
        __asm _emit 0x74
        __asm _emit 0x2f
        push 38h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 A5 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 86 7D E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860a5a6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 30h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 50h], ecx
        push 0ach
        ; Exact mapped bytes E8 41 6A 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6a
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 51: je 0x5860a624
        __asm _emit 0x74
        __asm _emit 0x51
        push 9
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 A4 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c4h
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C1 16 EC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x16
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860a62b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 40h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 54h], eax
        push 10ch
        ; Exact mapped bytes E8 BC 69 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x69
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 45: je 0x5860a69d
        __asm _emit 0x74
        __asm _emit 0x45
        push 646464h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 31h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0bch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 21h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3ah
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F8 56 EC FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860a6a4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 44h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 48h], edx
        push 15h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 26 1A EA FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 4ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 03 B7 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B B8 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0xe7
        __asm _emit 0xff
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
