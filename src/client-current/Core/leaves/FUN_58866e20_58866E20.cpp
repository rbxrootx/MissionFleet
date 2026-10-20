// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866E20 .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_58866e20_58866E20() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x58866e4a
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 3A B6 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 6B A1 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 7fffffffh
        pop edi
        mov esp, ebp
        pop ebp
        ret
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 75 1B: jne 0x58866e6d
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 18 B6 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 49 A1 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ebx
        mov eax, 7fffffffh
        pop edi
        mov esp, ebp
        pop ebp
        ret
        push esi
        mov esi, dword ptr [ebp + 10h]
        cmp esi, 7fffffffh
        ; Exact mapped bytes 76 1C: jbe 0x58866e95
        __asm _emit 0x76
        __asm _emit 0x1c
        ; Exact mapped bytes E8 F1 B5 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 22 A1 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        pop ebx
        mov eax, 7fffffffh
        pop edi
        mov esp, ebp
        pop ebp
        ret
        test esi, esi
        ; Exact mapped bytes 75 09: jne 0x58866ea2
        __asm _emit 0x75
        __asm _emit 0x09
        pop esi
        pop ebx
        xor eax, eax
        pop edi
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 14h]
        mov byte ptr [ebp - 8], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x58866eba
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 63: jmp 0x58866f1d
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
        ; Exact mapped bytes 75 13: jne 0x58866ed6
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
        ; Exact mapped bytes EB 47: jmp 0x58866f1d
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes E8 C5 1C 00 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 0ch], ecx
        lea ecx, [ebp - 10h]
        push ecx
        push eax
        ; Exact mapped bytes E8 2D 60 00 00: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7F 60 00 00: call 0x5886cf7f
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add esp, 10h
        mov eax, dword ptr [ecx + 350h]
        test al, 2
        ; Exact mapped bytes 75 0D: jne 0x58866f1d
        __asm _emit 0x75
        __asm _emit 0x0d
        or eax, 2
        mov dword ptr [ecx + 350h], eax
        mov byte ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi]
        lea edi, [edi + 1]
        mov edx, dword ptr [ebp - 4]
        lea ebx, [ebx + 1]
        movzx eax, al
        movzx ecx, byte ptr [eax + ecx]
        mov al, byte ptr [ebx - 1]
        movzx eax, al
        movzx eax, byte ptr [eax + edx]
        mov edx, ecx
        sub edx, eax
        ; Exact mapped bytes 75 0C: jne 0x58866f5e
        __asm _emit 0x75
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58866f5e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        sub esi, 1
        ; Exact mapped bytes 75 D2: jne 0x58866f30
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp byte ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x58866f6e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        and dword ptr [ecx + 350h], 0fffffffdh
        pop esi
        pop ebx
        mov eax, edx
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}
