// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054603A .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_0054603a_0054603A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB C5 FA FF: call 0x4f260a
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc5
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x54605a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x546124
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 20h]
        or edx, 4000000h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 20h], edx
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x54611f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x54611f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 0ff00h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 4100h
        ; Exact mapped bytes 77 1D: ja 0x5460c9
        __asm _emit 0x77
        __asm _emit 0x1d
        cmp dword ptr [ebp - 0ch], 4100h
        ; Exact mapped bytes 74 31: je 0x5460e6
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 0ch], 1400h
        ; Exact mapped bytes 74 16: je 0x5460d4
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 0ch], 2800h
        ; Exact mapped bytes 74 16: je 0x5460dd
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes EB 2D: jmp 0x5460f6
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [ebp - 0ch], 8200h
        ; Exact mapped bytes 74 1D: je 0x5460ef
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes EB 22: jmp 0x5460f6
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 0a00h
        ; Exact mapped bytes EB 19: jmp 0x5460f6
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 200h
        ; Exact mapped bytes EB 10: jmp 0x5460f6
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 0a00h
        ; Exact mapped bytes EB 07: jmp 0x5460f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 800h
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x54611f
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and ah, 0f0h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 4]
        or dl, 80h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        or ecx, edx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 64h], ecx
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
