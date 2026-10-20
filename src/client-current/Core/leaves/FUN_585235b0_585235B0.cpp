// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585235B0 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_585235b0_585235B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x5852367c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 21 F7 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x5852366c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB FE FF FF: call 0x585234b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 5F: jne 0x58523648
        __asm _emit 0x75
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F FF FF FF: call 0x58523550
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 23 F7 FF: call 0x58495910
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        and eax, 1
        ; Exact mapped bytes 74 37: je 0x58523639
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 09 00 00: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 28 8E F6 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 14 F6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 0F: jne 0x58523637
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x58523648
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 12: jne 0x58523663
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 64: mov dx, word ptr [ecx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 64: mov word ptr [eax + 0x64], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 0B: jmp 0x58523677
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BC 43 F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x43
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x585235c2
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
