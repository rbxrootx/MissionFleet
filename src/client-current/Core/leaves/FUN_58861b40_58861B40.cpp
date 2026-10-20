// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861B40 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_58861b40_58861B40() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x58861b6a
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 1A 09 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 4B F4 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 7fffffffh
        pop esi
        mov esp, ebp
        pop ebp
        ret
        push edi
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 1B: jne 0x58861b8d
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 F8 08 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 29 F4 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        mov eax, 7fffffffh
        pop esi
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 10h]
        push ebx
        xor bl, bl
        mov byte ptr [ebp - 8], bl
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x58861ba7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 69: jmp 0x58861c10
        __asm _emit 0xeb
        __asm _emit 0x69
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x58861bc3
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
        ; Exact mapped bytes EB 4D: jmp 0x58861c10
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes E8 D8 6F 00 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6f
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
        ; Exact mapped bytes E8 40 B3 00 00: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 92 B3 00 00: call 0x5886cf7f
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add esp, 10h
        mov eax, dword ptr [ecx + 350h]
        test al, 2
        ; Exact mapped bytes 75 10: jne 0x58861c0d
        __asm _emit 0x75
        __asm _emit 0x10
        or eax, 2
        mov bl, 1
        mov dword ptr [ecx + 350h], eax
        mov byte ptr [ebp - 8], bl
        ; Exact mapped bytes EB 03: jmp 0x58861c10
        __asm _emit 0xeb
        __asm _emit 0x03
        mov bl, byte ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov al, byte ptr [esi]
        lea esi, [esi + 1]
        mov edx, dword ptr [ebp - 4]
        lea edi, [edi + 1]
        movzx eax, al
        movzx ecx, byte ptr [eax + ecx]
        mov al, byte ptr [edi - 1]
        movzx eax, al
        movzx eax, byte ptr [eax + edx]
        mov edx, ecx
        sub edx, eax
        ; Exact mapped bytes 75 07: jne 0x58861c49
        __asm _emit 0x75
        __asm _emit 0x07
        test ecx, ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 D7: jne 0x58861c20
        __asm _emit 0x75
        __asm _emit 0xd7
        test bl, bl
        pop ebx
        ; Exact mapped bytes 74 0A: je 0x58861c58
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        and dword ptr [ecx + 350h], 0fffffffdh
        pop edi
        mov eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
