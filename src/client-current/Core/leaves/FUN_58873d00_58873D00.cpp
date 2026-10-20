// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873D00 .. +0x1A9 bytes.
extern "C" __declspec(naked) void FUN_58873d00_58873D00() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x58873d2a
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 5A E7 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 8B D2 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 7fffffffh
        pop edi
        mov esp, ebp
        pop ebp
        ret
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 1B: jne 0x58873d4d
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 38 E7 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 69 D2 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        mov eax, 7fffffffh
        pop edi
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ebp - 8], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x58873d65
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 63: jmp 0x58873dc8
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x58873d81
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
        ; Exact mapped bytes EB 47: jmp 0x58873dc8
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes E8 1A 4E FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4e
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
        ; Exact mapped bytes E8 82 91 FF FF: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 0ch]
        push eax
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D4 91 FF FF: call 0x5886cf7f
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        add esp, 10h
        mov eax, dword ptr [ecx + 350h]
        test al, 2
        ; Exact mapped bytes 75 0D: jne 0x58873dc8
        __asm _emit 0x75
        __asm _emit 0x0d
        or eax, 2
        mov dword ptr [ecx + 350h], eax
        mov byte ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 75 11: jne 0x58873de5
        __asm _emit 0x75
        __asm _emit 0x11
        push esi
        push edi
        ; Exact mapped bytes E8 85 FE FF FF: call 0x58873c60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edx, eax
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x58873e91
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        movzx eax, word ptr [edi]
        lea edi, [edi + 2]
        add dword ptr [ebp + 0ch], 2
        mov ebx, eax
        mov edx, eax
        movzx eax, word ptr [esi]
        mov ecx, eax
        mov esi, eax
        mov dword ptr [ebp - 4], ecx
        cmp ebx, ecx
        ; Exact mapped bytes 74 7D: je 0x58873e7f
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, 100h
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 73 1E: jae 0x58873e2a
        __asm _emit 0x73
        __asm _emit 0x1e
        movzx edx, bl
        test byte ptr [edx*2 + 588c482ah], 1
        ; Exact mapped bytes 74 0C: je 0x58873e25
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 94h]
        mov bl, byte ptr [edx + eax]
        movzx eax, bl
        ; Exact mapped bytes EB 13: jmp 0x58873e3d
        __asm _emit 0xeb
        __asm _emit 0x13
        lea eax, [ebp - 10h]
        push eax
        push edx
        ; Exact mapped bytes E8 CA 76 00 00: call 0x5887b4fe
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add esp, 8
        movzx eax, ax
        movzx ebx, ax
        cmp ebx, ecx
        ; Exact mapped bytes 74 3B: je 0x58873e7f
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, 100h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 1E: jae 0x58873e6c
        __asm _emit 0x73
        __asm _emit 0x1e
        movzx edx, cl
        test byte ptr [edx*2 + 588c482ah], 1
        ; Exact mapped bytes 74 0C: je 0x58873e67
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 94h]
        mov cl, byte ptr [edx + eax]
        movzx eax, cl
        ; Exact mapped bytes EB 10: jmp 0x58873e7c
        __asm _emit 0xeb
        __asm _emit 0x10
        lea eax, [ebp - 10h]
        push eax
        push esi
        ; Exact mapped bytes E8 88 76 00 00: call 0x5887b4fe
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        movzx eax, ax
        movzx ecx, ax
        mov edx, ebx
        sub edx, ecx
        ; Exact mapped bytes 75 0B: jne 0x58873e90
        __asm _emit 0x75
        __asm _emit 0x0b
        mov esi, dword ptr [ebp + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 0F 85 56 FF FF FF: jne 0x58873de6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        cmp byte ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x58873ea1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 14h]
        and dword ptr [eax + 350h], 0fffffffdh
        pop esi
        mov eax, edx
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}
