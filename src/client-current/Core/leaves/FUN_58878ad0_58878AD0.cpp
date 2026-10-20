// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878AD0 .. +0x1B5 bytes.
extern "C" __declspec(naked) void FUN_58878ad0_58878AD0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x58878afa
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 8A 99 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 BB 84 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 7fffffffh
        pop esi
        mov esp, ebp
        pop ebp
        ret
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 75 1B: jne 0x58878b1d
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 68 99 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 99 84 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        pop ebx
        mov eax, 7fffffffh
        pop esi
        mov esp, ebp
        pop ebp
        ret
        mov edx, dword ptr [ebp + 10h]
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x58878b2c
        __asm _emit 0x75
        __asm _emit 0x08
        pop ebx
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 14h]
        mov byte ptr [ebp - 8], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x58878b44
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 66: jmp 0x58878baa
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x58878b60
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes A1 18 75 90 58: mov eax, dword ptr [0x58907518]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 75 90 58: mov ecx, dword ptr [0x5890751c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 4A: jmp 0x58878baa
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes E8 3B 00 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 0ch], ecx
        lea ecx, [ebp - 10h]
        push ecx
        push eax
        ; Exact mapped bytes E8 A3 43 FF FF: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 0ch]
        push eax
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F5 43 FF FF: call 0x5886cf7f
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        add esp, 10h
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx + 350h]
        test al, 2
        ; Exact mapped bytes 75 0D: jne 0x58878baa
        __asm _emit 0x75
        __asm _emit 0x0d
        or eax, 2
        mov dword ptr [ecx + 350h], eax
        mov byte ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 10h]
        push edi
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 75 12: jne 0x58878bc9
        __asm _emit 0x75
        __asm _emit 0x12
        push edx
        push ebx
        push esi
        ; Exact mapped bytes E8 51 FE FF FF: call 0x58878a10
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edi, eax
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x58878c6c
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 100h
        mov edi, edi
        movzx eax, word ptr [esi]
        lea esi, [esi + 2]
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 73 1E: jae 0x58878bf9
        __asm _emit 0x73
        __asm _emit 0x1e
        movzx ecx, al
        test byte ptr [ecx*2 + 588c482ah], 1
        ; Exact mapped bytes 74 0C: je 0x58878bf4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 94h]
        mov al, byte ptr [ecx + eax]
        movzx eax, al
        ; Exact mapped bytes EB 10: jmp 0x58878c09
        __asm _emit 0xeb
        __asm _emit 0x10
        lea ecx, [ebp - 10h]
        push ecx
        push eax
        ; Exact mapped bytes E8 FB 28 00 00: call 0x5887b4fe
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        movzx eax, ax
        movzx edx, ax
        mov ecx, 100h
        movzx eax, word ptr [ebx]
        mov edi, edx
        add ebx, 2
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 73 1E: jae 0x58878c3f
        __asm _emit 0x73
        __asm _emit 0x1e
        movzx ecx, al
        test byte ptr [ecx*2 + 588c482ah], 1
        ; Exact mapped bytes 74 0C: je 0x58878c3a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 94h]
        mov al, byte ptr [ecx + eax]
        movzx eax, al
        ; Exact mapped bytes EB 13: jmp 0x58878c52
        __asm _emit 0xeb
        __asm _emit 0x13
        lea ecx, [ebp - 10h]
        push ecx
        push eax
        ; Exact mapped bytes E8 B5 28 00 00: call 0x5887b4fe
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add esp, 8
        movzx eax, ax
        movzx eax, ax
        sub edi, eax
        ; Exact mapped bytes 75 13: jne 0x58878c6c
        __asm _emit 0x75
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x58878c6c
        __asm _emit 0x74
        __asm _emit 0x0f
        sub dword ptr [ebp + 10h], 1
        mov ecx, 100h
        ; Exact mapped bytes 0F 85 64 FF FF FF: jne 0x58878bd0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x58878c7c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 14h]
        and dword ptr [eax + 350h], 0fffffffdh
        mov eax, edi
        pop edi
        pop ebx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
