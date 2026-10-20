// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58494D40 .. +0x24F bytes.
extern "C" __declspec(naked) void FUN_58494d40_58494D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 28h
        mov dword ptr [ebp - 14h], 5ah
        mov dword ptr [ebp - 18h], 14h
        mov dword ptr [ebp - 1ch], 64h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 0B 00 00: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fh
        ; Exact mapped bytes 75 1C: jne 0x58494d91
        __asm _emit 0x75
        __asm _emit 0x1c
        mov dword ptr [ebp - 10h], 78h
        mov dword ptr [ebp - 14h], 23h
        mov dword ptr [ebp - 18h], 5ah
        mov dword ptr [ebp - 1ch], 23h
        mov byte ptr [ebp - 1], 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 2c8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 77 48: ja 0x58494df9
        __asm _emit 0x77
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 85 90 4F 49 58: jmp dword ptr [eax*4 + 0x58494f90]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x4f
        __asm _emit 0x49
        __asm _emit 0x58
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 38: jmp 0x58494df9
        __asm _emit 0xeb
        __asm _emit 0x38
        mov byte ptr [ebp - 1], 0
        ; Exact mapped bytes EB 32: jmp 0x58494df9
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 2d2h]
        test edx, edx
        ; Exact mapped bytes 7E 06: jle 0x58494ddb
        __asm _emit 0x7e
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x58494ddf
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        ; Exact mapped bytes EB 18: jmp 0x58494df9
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 2d2h]
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x58494df5
        __asm _emit 0x7e
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x58494df9
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        movzx edx, byte ptr [ebp - 1]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 85 01 00 00: jne 0x58494f8b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 8F 0C 00 00: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 72 01 00 00: je 0x58494f8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7C 49: jl 0x58494e6d
        __asm _emit 0x7c
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 1B FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A 09 00 00: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], eax
        ; Exact mapped bytes 7F 2C: jg 0x58494e6d
        __asm _emit 0x7f
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7C 21: jl 0x58494e6d
        __asm _emit 0x7c
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 1B FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 08 00 00: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], eax
        ; Exact mapped bytes 0F 8E 1E 01 00 00: jle 0x58494f8b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 45ch], 0
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x58494f8b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 01 00 00: call 0x58495070
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 81 D8 02 00 00: mov word ptr [ecx + 0x2d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 45ch], 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 318h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4c4h], 0ah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 320h], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 344h], 0
        ; Exact mapped bytes 7C 0D: jl 0x58494ee0
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 344h], 0ffffff6ah
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 51ch], 0
        ; Exact mapped bytes 74 1A: je 0x58494f06
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 51ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 51ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 1A FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 75 72: jne 0x58494f8b
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 6E 1E 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6e
        __asm _emit 0x1e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x58494f8b
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 6E 1E 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6e
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        push 58894d80h
        ; Exact mapped bytes E8 B0 D0 08 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        push 9fh
        push 0
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A7 99 06 00: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 6E 1E 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6e
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        push 58894da0h
        ; Exact mapped bytes E8 7F D0 08 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        push 10101h
        push 1
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 76 99 06 00: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
