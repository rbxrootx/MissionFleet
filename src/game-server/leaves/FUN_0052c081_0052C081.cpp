// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C081 .. +0x1C1 bytes.
extern "C" __declspec(naked) void FUN_0052c081_0052C081() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10ch], ecx
        ; Exact mapped bytes E8 68 94 00 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 92 01 00 00: je 0x52c237
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x52c237
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 0F 84 68 01 00 00: je 0x52c237
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 B4 00 00 00: mov cx, word ptr [eax + 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x52c237
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 B6 00 00 00: mov cx, word ptr [eax + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 25 01 00 00: jne 0x52c237
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 103h
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 B4 00 00 00: mov cx, word ptr [eax + 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 98 23 5E 00: call dword ptr [0x5e2398]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52c147
        __asm _emit 0x75
        __asm _emit 0x14
        push 451h
        push 5c8fcch
        ; Exact mapped bytes E8 BE 88 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c147
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C5: jne 0x52c112
        __asm _emit 0x75
        __asm _emit 0xc5
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 9C 23 5E 00: call dword ptr [0x5e239c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 B4 00 00 00: mov dx, word ptr [ecx + 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edx
        ; Exact mapped bytes 74 14: je 0x52c183
        __asm _emit 0x74
        __asm _emit 0x14
        push 452h
        push 5c8fcch
        ; Exact mapped bytes E8 82 88 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c183
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C4: jne 0x52c14d
        __asm _emit 0x75
        __asm _emit 0xc4
        push 103h
        lea ecx, [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 B6 00 00 00: mov ax, word ptr [edx + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 98 23 5E 00: call dword ptr [0x5e2398]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52c1be
        __asm _emit 0x75
        __asm _emit 0x14
        push 454h
        push 5c8fcch
        ; Exact mapped bytes E8 47 88 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c1be
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C5: jne 0x52c189
        __asm _emit 0x75
        __asm _emit 0xc5
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes FF 15 9C 23 5E 00: call dword ptr [0x5e239c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 B6 00 00 00: mov dx, word ptr [ecx + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edx
        ; Exact mapped bytes 74 14: je 0x52c1fa
        __asm _emit 0x74
        __asm _emit 0x14
        push 455h
        push 5c8fcch
        ; Exact mapped bytes E8 0B 88 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c1fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C4: jne 0x52c1c4
        __asm _emit 0x75
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 B4 00 00 00: mov dx, word ptr [ecx + 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 B6 00 00 00: mov cx, word ptr [eax + 0xb6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl ecx, 10h
        or edx, ecx
        push edx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 3e4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
