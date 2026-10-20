// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416EE6 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_00416ee6_00416EE6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 14h], ecx
        push ebx
        mov ecx, dword ptr [ebp + 10h]
        xor ebx, ebx
        mov eax, dword ptr [ecx]
        cmp eax, ebx
        ; Exact mapped bytes 75 08: jne 0x416f03
        __asm _emit 0x75
        __asm _emit 0x08
        push 1
        pop eax
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x41703c
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp esi, ebx
        push edi
        ; Exact mapped bytes 75 05: jne 0x416f11
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes EB 06: jmp 0x416f17
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [esi + 1ch]
        mov dword ptr [ebp - 8], edx
        mov edi, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 81 78 02 FF FF: cmp word ptr [eax + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        sete dl
        cmp edi, ebx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x417021
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp + 0ch], ebx
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes EB 03: jmp 0x416f48
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 39 1F: cmp word ptr [edi], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x417019
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        inc edi
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        inc edi
        inc edi
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 3D 76 03: cmp ax, 0x376
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x76
        __asm _emit 0x03
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 74 1C: je 0x416f85
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 3D 7A 03: cmp ax, 0x37a
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x7a
        __asm _emit 0x03
        ; Exact mapped bytes 74 16: je 0x416f85
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 66 3D 77 03: cmp ax, 0x377
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x77
        __asm _emit 0x03
        ; Exact mapped bytes 74 10: je 0x416f85
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3D 7B 03: cmp ax, 0x37b
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x7b
        __asm _emit 0x03
        ; Exact mapped bytes 74 0A: je 0x416f85
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 78 03: cmp ax, 0x378
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x41700b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ecx + edx*4]
        inc edx
        cmp esi, ebx
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 75 32: jne 0x416fc5
        __asm _emit 0x75
        __asm _emit 0x32
        lea ebx, [ecx + edx*4]
        cmp esi, -1
        ; Exact mapped bytes 74 6C: je 0x417007
        __asm _emit 0x74
        __asm _emit 0x6c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x416fa8
        __asm _emit 0x75
        __asm _emit 0x07
        push 5
        push dword ptr [ebp - 8]
        ; Exact mapped bytes EB 05: jmp 0x416fad
        __asm _emit 0xeb
        __asm _emit 0x05
        push 2
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 15 78 C4 43 00: call dword ptr [0x43c478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [ebx]
        inc dword ptr [ebp + 0ch]
        add ebx, 4
        mov dword ptr [ebp + 10h], eax
        test esi, esi
        ; Exact mapped bytes 74 D4: je 0x416f96
        __asm _emit 0x74
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 1ch]
        cmp esi, -1
        ; Exact mapped bytes 74 3D: je 0x417007
        __asm _emit 0x74
        __asm _emit 0x3d
        push dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        push edi
        push eax
        push esi
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 01 00 00: call 0x41715c
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 20: je 0x417007
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 09: je 0x416ff6
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi]
        push ebx
        ; Exact mapped bytes FF 15 CC C3 43 00: call dword ptr [0x43c3cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 09: jne 0x41700b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes EB 04: jmp 0x41700b
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ebp - 4], 0
        add edi, dword ptr [ebp - 10h]
        xor ebx, ebx
        cmp dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 85 2C FF FF FF: jne 0x416f45
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 19: je 0x417037
        __asm _emit 0x74
        __asm _emit 0x19
        mov esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 34h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x41702e
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 84 15 00 00: call 0x4185b2
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push esi
        ; Exact mapped bytes E8 0A 00 00 00: call 0x417041
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
