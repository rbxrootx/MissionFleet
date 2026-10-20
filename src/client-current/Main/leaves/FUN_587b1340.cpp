// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B1340 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_587b1340() {
    __asm {
        push ecx
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 60h]
        mov dword ptr [esp + 4], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x587b1409
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 0f0h], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x587b1409
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 10ch], 0
        ; Exact mapped bytes 75 0D: jne 0x587b1376
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [edi + 108h], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x587b1409
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 134h]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x587b1388
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        ; Exact mapped bytes 75 79: jne 0x587b1403
        __asm _emit 0x75
        __asm _emit 0x79
        ; Exact mapped bytes 83 3D DC 8E 9C 58 00: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 70: je 0x587b1403
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [edi + 88h]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 5F: jne 0x587b1403
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        mov ebx, dword ptr [eax + 10524h]
        mov ecx, dword ptr [ebx + 114h]
        push ebp
        ; Exact mapped bytes 8B 2D 80 45 A2 58: mov ebp, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 1ch]
        sub eax, dword ptr [ebp + 14h]
        push esi
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ecx
        mov esi, dword ptr [edi + 4]
        sub esi, eax
        mov eax, dword ptr [ebp + 20h]
        sub eax, dword ptr [ebp + 18h]
        sub esi, dword ptr [ebx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ecx
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esp + 14h]
        sub eax, dword ptr [edi + 8]
        add eax, dword ptr [ebx + 54h]
        push eax
        push esi
        ; Exact mapped bytes E8 00 60 00 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebp
        pop ebx
        inc dword ptr [edi + 134h]
        pop edi
        pop ecx
        ret
    }
}
