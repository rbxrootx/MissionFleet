// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831E64 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_58831e64_58831E64() {
    __asm {
        push 10h
        push 588ec600h
        ; Exact mapped bytes E8 F0 08 00 00: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 A8 F9 FF FF: call 0x5883181f
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test al, al
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x58831f54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F F8 FF FF: call 0x58831724
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 1dh], al
        mov bl, 1
        mov byte ptr [ebp - 19h], bl
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D E4 66 96 58 00: cmp dword ptr [0x589666e4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x58831f66
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 E4 66 96 58 01 00 00 00: mov dword ptr [0x589666e4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D1 F8 FF FF: call 0x58831781
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 4D: je 0x58831f01
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes E8 DE 09 00 00: call 0x58832897
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9E 09 00 00: call 0x5883285c
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B1 09 00 00: call 0x58832874
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 58894650h
        push 58894638h
        ; Exact mapped bytes E8 BC 3F 03 00: call 0x58865e8e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x58831f01
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes E8 79 F8 FF FF: call 0x58831756
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 20: je 0x58831f01
        __asm _emit 0x74
        __asm _emit 0x20
        push 58894634h
        push 588945a4h
        ; Exact mapped bytes E8 73 3F 03 00: call 0x58865e63
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes C7 05 E4 66 96 58 02 00 00 00: mov dword ptr [0x589666e4], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor bl, bl
        mov byte ptr [ebp - 19h], bl
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 3D 00 00 00: call 0x58831f4a
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test bl, bl
        ; Exact mapped bytes 75 43: jne 0x58831f54
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes E8 7B 09 00 00: call 0x58832891
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 1F: je 0x58831f3c
        __asm _emit 0x74
        __asm _emit 0x1f
        push esi
        ; Exact mapped bytes E8 BC F9 FF FF: call 0x588318df
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test al, al
        ; Exact mapped bytes 74 14: je 0x58831f3c
        __asm _emit 0x74
        __asm _emit 0x14
        push dword ptr [ebp + 0ch]
        push 2
        push dword ptr [ebp + 8]
        mov esi, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF 05 14 67 96 58: inc dword ptr [0x58966714]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 0F: jmp 0x58831f56
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov bl, byte ptr [ebp - 19h]
        push dword ptr [ebp - 1dh]
        ; Exact mapped bytes E8 24 FA FF FF: call 0x58831976
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ret
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
