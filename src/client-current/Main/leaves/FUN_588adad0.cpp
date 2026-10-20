// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588ADAD0 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_588adad0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        cmp eax, 2
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x588adbbb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x588adba9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 20f4h]
        cmp eax, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x588adc12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x588adc12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ecx + 20f6h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        movzx esi, ax
        ; Exact mapped bytes E8 B5 AF EC FF: call 0x58778ad0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xaf
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x588adb8f
        __asm _emit 0x74
        __asm _emit 0x70
        movzx ecx, si
        cmp ecx, 0fb1h
        ; Exact mapped bytes 7F 1A: jg 0x588adb44
        __asm _emit 0x7f
        __asm _emit 0x1a
        ; Exact mapped bytes 74 43: je 0x588adb6f
        __asm _emit 0x74
        __asm _emit 0x43
        cmp ecx, 403h
        ; Exact mapped bytes 74 3B: je 0x588adb6f
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp ecx, 7d8h
        ; Exact mapped bytes 74 33: je 0x588adb6f
        __asm _emit 0x74
        __asm _emit 0x33
        cmp ecx, 0bd2h
        ; Exact mapped bytes EB 16: jmp 0x588adb5a
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp ecx, 139fh
        ; Exact mapped bytes 74 23: je 0x588adb6f
        __asm _emit 0x74
        __asm _emit 0x23
        cmp ecx, 1787h
        ; Exact mapped bytes 74 1B: je 0x588adb6f
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ecx, 1b71h
        ; Exact mapped bytes 74 13: je 0x588adb6f
        __asm _emit 0x74
        __asm _emit 0x13
        lea esi, [eax + 33ch]
        push 0
        push esi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        push esi
        ; Exact mapped bytes EB 09: jmp 0x588adb78
        __asm _emit 0xeb
        __asm _emit 0x09
        push 0
        push 3e8h
        push 0
        push 133h
        ; Exact mapped bytes E8 6E DF EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 C9 EB FF: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 72h
        ; Exact mapped bytes E8 54 DF EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdf
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D 71 EB FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 78h]
        ; Exact mapped bytes 75 64: jne 0x588adc12
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 3D: jne 0x588adbfd
        __asm _emit 0x75
        __asm _emit 0x3d
        mov esi, dword ptr [esp + 8]
        cmp esi, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 07: jne 0x588adbd0
        __asm _emit 0x75
        __asm _emit 0x07
        push 589a0870h
        ; Exact mapped bytes EB 0A: jmp 0x588adbda
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp esi, dword ptr [ecx + 78h]
        ; Exact mapped bytes 75 3D: jne 0x588adc12
        __asm _emit 0x75
        __asm _emit 0x3d
        push 589a0844h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        push 32h
        push 0c8h
        push esi
        ; Exact mapped bytes E8 C9 4A EB FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x4a
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 10: jne 0x588adc12
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esp + 8]
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 FE 49 EB FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x49
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
