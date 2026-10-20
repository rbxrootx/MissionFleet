// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58658670 .. +0x2B5 bytes.
extern "C" __declspec(naked) void FUN_58658670_58658670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 75 42: jne 0x586586dc
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 1ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A1 D8 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 20h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8B D8 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 24h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 75 D8 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 28h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5F D8 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 49 D8 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 33 D8 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0f0h], 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 34h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 10 D8 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 FA D7 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E4 D7 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586587bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 7D 51: jge 0x58658816
        __asm _emit 0x7d
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        mov dword ptr [ebp - 40h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B1 D7 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 97 D7 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7D D7 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A0: jmp 0x586587b6
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 64 D7 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 9E D6 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 88 D6 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 72 D6 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 3
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0b8h
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 18 BC EC FF: call 0x585244b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        push 3
        mov edx, dword ptr [ebp - 14h]
        add edx, 0a0h
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 EE BB EC FF: call 0x585244b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbb
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 110h], 1
        push 0ch
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 34 45 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0ch
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 110h]
        sub eax, 1
        imul ecx, eax, 0ch
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 61 F2 FF: call 0x5857ea40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x61
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1A 0F 00 00: call 0x58659830
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2F 87 1D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x87
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
