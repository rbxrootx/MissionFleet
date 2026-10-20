// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866A66 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_58866a66_58866A66() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        test ebx, ebx
        ; Exact mapped bytes 75 08: jne 0x58866a7e
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x58866b8d
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 17: jne 0x58866a9d
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 E4 B9 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 15 A5 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x58866b8c
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 17: jne 0x58866abc
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 C5 B9 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 F6 A4 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x58866b8b
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 10 12 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 12: jne 0x58866ae2
        __asm _emit 0x75
        __asm _emit 0x12
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 B8 F0 00 00: call 0x58875b90
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ebx, eax
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x58866b79
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, edi
        mov al, byte ptr [edi]
        mov esi, edi
        inc edi
        test al, al
        ; Exact mapped bytes 75 F7: jne 0x58866ae4
        __asm _emit 0x75
        __asm _emit 0xf7
        cmp esi, ebx
        ; Exact mapped bytes 74 19: je 0x58866b0a
        __asm _emit 0x74
        __asm _emit 0x19
        lea eax, [ebp - 18h]
        push eax
        mov eax, esi
        sub eax, ebx
        dec eax
        push eax
        push ebx
        ; Exact mapped bytes E8 C4 F1 00 00: call 0x58875cc5
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x58866b0a
        __asm _emit 0x75
        __asm _emit 0x01
        dec esi
        mov edx, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp + 10h]
        mov al, byte ptr [edx]
        lea ecx, [esi + 1]
        mov dword ptr [ebp - 8], ecx
        dec edi
        movzx ecx, al
        inc edx
        mov byte ptr [ebp - 1], al
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], esi
        test byte ptr [ecx + eax + 19h], 4
        mov al, byte ptr [ebp - 1]
        mov byte ptr [esi], al
        mov esi, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 37: je 0x58866b6c
        __asm _emit 0x74
        __asm _emit 0x37
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x58866b44
        __asm _emit 0x74
        __asm _emit 0x0b
        mov al, byte ptr [edx]
        dec edi
        inc edx
        mov byte ptr [esi], al
        inc esi
        test al, al
        ; Exact mapped bytes 75 2C: jne 0x58866b70
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], 0
        cmp esi, ebx
        ; Exact mapped bytes 74 28: je 0x58866b76
        __asm _emit 0x74
        __asm _emit 0x28
        lea eax, [ebp - 18h]
        push eax
        mov eax, esi
        sub eax, ebx
        dec eax
        push eax
        push ebx
        ; Exact mapped bytes E8 67 F1 00 00: call 0x58875cc5
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp eax, 1
        ; Exact mapped bytes 75 10: jne 0x58866b76
        __asm _emit 0x75
        __asm _emit 0x10
        mov byte ptr [esi - 1], 0
        ; Exact mapped bytes EB 0D: jmp 0x58866b79
        __asm _emit 0xeb
        __asm _emit 0x0d
        test al, al
        ; Exact mapped bytes 74 DA: je 0x58866b4a
        __asm _emit 0x74
        __asm _emit 0xda
        test edi, edi
        ; Exact mapped bytes 75 9C: jne 0x58866b10
        __asm _emit 0x75
        __asm _emit 0x9c
        ; Exact mapped bytes EB D4: jmp 0x58866b4a
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov byte ptr [esi], 0
        cmp byte ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0A: je 0x58866b89
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 1ch]
        and dword ptr [eax + 350h], 0fffffffdh
        mov eax, ebx
        pop esi
        pop edi
        pop ebx
        leave
        ret
    }
}
