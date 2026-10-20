// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520010 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_58520010_58520010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 0B: je 0x58520037
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        movzx edx, byte ptr [ecx + 3dh]
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x5852003e
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, 1
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x58520129
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes E8 A2 A7 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E8 8D A7 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 3D AF FE FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58520084
        __asm _emit 0x74
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x58520129
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 20h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 4ch], edx
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 11 19 00 00: call 0x585219c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0E: je 0x585200c6
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 30h], 1
        ; Exact mapped bytes 74 0F: je 0x585200cd
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 30h], 3
        ; Exact mapped bytes 74 58: je 0x5852011c
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes EB 61: jmp 0x58520127
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 3dh], 0
        mov edx, dword ptr [ebp - 50h]
        lea eax, [ebp - 28h]
        sub edx, eax
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes 74 22: je 0x585200fc
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        push 1
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 3C A9 33 00: call 0x5885aa2c
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa9
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 74 04: je 0x585200fc
        __asm _emit 0x74
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 2D: jmp 0x58520129
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 2ch]
        movzx eax, byte ptr [edx + 3dh]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58520110
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes EB 07: jmp 0x58520117
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov al, byte ptr [ebp - 38h]
        ; Exact mapped bytes EB 0D: jmp 0x58520129
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 3dh], 0
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58520129
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 1D 0F 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0f
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
