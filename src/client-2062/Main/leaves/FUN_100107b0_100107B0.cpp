// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100107B0 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_100107b0_100107B0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, 18h
        xor eax, eax
        lea edi, [esi + 0e4h]
        xor edx, edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea ecx, [esi + 0a0h]
        mov edi, 0fffeh
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esi + 0cch]
        mov dword ptr [esi + 0b0h], edx
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5f3h
        ; Exact mapped bytes 7E 12: jle 0x1001081d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edx
        ; Exact mapped bytes 74 08: je 0x1001081d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 17cch]
        ; Exact mapped bytes EB 02: jmp 0x1001081f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b8h]
        cmp eax, edx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10010854
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 0c0h]
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0c7h
        ; Exact mapped bytes 7E 11: jle 0x1001087f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edx
        ; Exact mapped bytes 74 07: je 0x1001087f
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 31c0h
        ; Exact mapped bytes EB 02: jmp 0x10010881
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c4h]
        cmp eax, edx
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100108b6
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0c4h]
        push 60h
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes E8 4A E8 0E 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 60h
        ; Exact mapped bytes E8 3D E8 0E 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 60h
        ; Exact mapped bytes E8 30 E8 0E 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
