// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586685C0 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_586685c0_586685C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 0
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x586686b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 32: jne 0x5866861e
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 0
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 D8 00 00 00: mov word ptr [eax + 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], 0
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x586686b6
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9A C3 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc3
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 31: je 0x58668660
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58668652
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58668659
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x58668684
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 D8 00 00 00: movsx eax, word ptr [edx + 0xd8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 2D: jne 0x586686b1
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A D8 00 00 00: mov word ptr [edx + 0xd8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x586685d9
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
