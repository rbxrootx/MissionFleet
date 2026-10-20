// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FBC2E .. +0x346 bytes.
extern "C" __declspec(naked) void FUN_004fbc2e_004FBC2E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 10bh
        ; Exact mapped bytes 77 2C: ja 0x4fbc6d
        __asm _emit 0x77
        __asm _emit 0x2c
        cmp dword ptr [ebp - 4], 10bh
        ; Exact mapped bytes 0F 84 F8 02 00 00: je 0x4fbf46
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0d0h
        ; Exact mapped bytes 0F 87 0E 03 00 00: ja 0x4fbf69
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [edx + 4fc0a0h]
        ; Exact mapped bytes FF 24 8D 74 BF 4F 00: jmp dword ptr [ecx*4 + 0x4fbf74]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xbf
        __asm _emit 0x4f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, 3e3h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 0F 87 E7 02 00 00: ja 0x4fbf69
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 8D 71 C1 4F 00: jmp dword ptr [ecx*4 + 0x4fc171]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0xc1
        __asm _emit 0x4f
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 DB 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        ; Exact mapped bytes E9 D1 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 C7 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        ; Exact mapped bytes E9 BD 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 B3 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        ; Exact mapped bytes E9 A9 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6
        ; Exact mapped bytes E9 9F 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 95 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 8B 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 7
        ; Exact mapped bytes E9 81 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 77 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        ; Exact mapped bytes E9 6D 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 63 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ah
        ; Exact mapped bytes E9 59 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ah
        ; Exact mapped bytes E9 4F 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ah
        ; Exact mapped bytes E9 45 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ah
        ; Exact mapped bytes E9 3B 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 9
        ; Exact mapped bytes E9 31 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 9
        ; Exact mapped bytes E9 27 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 9
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 09 02 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 9
        ; Exact mapped bytes E9 FF 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0bh
        ; Exact mapped bytes E9 F5 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 E1 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0eh
        ; Exact mapped bytes E9 CD 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0dh
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 9B 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ah
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ah
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 5F 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        ; Exact mapped bytes E9 37 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ah
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ch
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0dh
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ah
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 9
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x4fbf6e
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 9
        ; Exact mapped bytes EB 7C: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov eax, 3
        ; Exact mapped bytes EB 75: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x75
        mov eax, 7
        ; Exact mapped bytes EB 6E: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, 3
        ; Exact mapped bytes EB 67: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x67
        mov eax, 3
        ; Exact mapped bytes EB 60: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, 0ch
        ; Exact mapped bytes EB 59: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x59
        mov eax, 5
        ; Exact mapped bytes EB 52: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x52
        mov eax, 6
        ; Exact mapped bytes EB 4B: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, 5
        ; Exact mapped bytes EB 44: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, 6
        ; Exact mapped bytes EB 3D: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, 6
        ; Exact mapped bytes EB 36: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, 3
        ; Exact mapped bytes EB 2F: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, 3
        ; Exact mapped bytes EB 28: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, 3
        ; Exact mapped bytes EB 21: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, 0ah
        ; Exact mapped bytes EB 1A: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, 0ah
        ; Exact mapped bytes EB 13: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, 0ah
        ; Exact mapped bytes EB 0C: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 5
        ; Exact mapped bytes EB 05: jmp 0x4fbf6e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
