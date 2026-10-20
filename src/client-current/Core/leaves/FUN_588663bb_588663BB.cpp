// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588663BB .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_588663bb_588663BB() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 20h
        lea ecx, [ebp - 20h]
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 06 19 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 8]
        test ebx, ebx
        ; Exact mapped bytes 74 07: je 0x588663df
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 15: jne 0x588663f4
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 8B C0 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 BC AB FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x58866539
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        xor esi, esi
        cmp dword ptr [ecx + 8], esi
        ; Exact mapped bytes 75 15: jne 0x58866413
        __asm _emit 0x75
        __asm _emit 0x15
        lea eax, [ebp - 1ch]
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 37 B7 FF FF: call 0x58861b40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov esi, eax
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x58866546
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebx]
        mov dword ptr [ebp - 8], edx
        movzx edx, dx
        mov dword ptr [ebp - 0ch], ebx
        inc ebx
        mov dword ptr [ebp - 10h], edi
        mov al, byte ptr [edx + ecx + 19h]
        test al, 4
        ; Exact mapped bytes 74 62: je 0x5886648d
        __asm _emit 0x74
        __asm _emit 0x62
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 75 05: jne 0x58866435
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes EB 67: jmp 0x5886649c
        __asm _emit 0xeb
        __asm _emit 0x67
        push 1
        push dword ptr [ecx + 4]
        lea eax, [ebp - 4]
        push 2
        push eax
        push 2
        push dword ptr [ebp - 0ch]
        lea eax, [ebp - 1ch]
        push 200h
        push dword ptr [ecx + 21ch]
        push eax
        ; Exact mapped bytes E8 83 BF 00 00: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        cmp eax, 1
        ; Exact mapped bytes 75 06: jne 0x58866467
        __asm _emit 0x75
        __asm _emit 0x06
        movzx eax, byte ptr [ebp - 4]
        ; Exact mapped bytes EB 20: jmp 0x58866487
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp eax, 2
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x5886652e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, 100h
        movzx edx, al
        imul edx, ecx
        movzx eax, ah
        ; Exact mapped bytes 66 03 D0: add dx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd0
        movzx eax, dx
        mov ecx, dword ptr [ebp - 18h]
        inc ebx
        ; Exact mapped bytes EB 0C: jmp 0x58866499
        __asm _emit 0xeb
        __asm _emit 0x0c
        test al, 10h
        ; Exact mapped bytes 74 0B: je 0x5886649c
        __asm _emit 0x74
        __asm _emit 0x0b
        movzx eax, byte ptr [edx + ecx + 119h]
        mov dword ptr [ebp - 8], eax
        movzx eax, byte ptr [edi]
        inc edi
        mov edx, eax
        mov dword ptr [ebp - 0ch], edx
        mov dl, byte ptr [edx + ecx + 19h]
        test dl, 4
        ; Exact mapped bytes 74 5D: je 0x5886650b
        __asm _emit 0x74
        __asm _emit 0x5d
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 75 04: jne 0x588664b7
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, esi
        ; Exact mapped bytes EB 64: jmp 0x5886651b
        __asm _emit 0xeb
        __asm _emit 0x64
        push 1
        push dword ptr [ecx + 4]
        lea eax, [ebp - 4]
        push 2
        push eax
        push 2
        push dword ptr [ebp - 10h]
        lea eax, [ebp - 1ch]
        push 200h
        push dword ptr [ecx + 21ch]
        push eax
        ; Exact mapped bytes E8 01 BF 00 00: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        cmp eax, 1
        ; Exact mapped bytes 75 06: jne 0x588664e9
        __asm _emit 0x75
        __asm _emit 0x06
        movzx eax, byte ptr [ebp - 4]
        ; Exact mapped bytes EB 1C: jmp 0x58866505
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp eax, 2
        ; Exact mapped bytes 75 40: jne 0x5886652e
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, 100h
        movzx edx, al
        imul edx, ecx
        movzx eax, ah
        ; Exact mapped bytes 66 03 D0: add dx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd0
        movzx eax, dx
        mov ecx, dword ptr [ebp - 18h]
        inc edi
        ; Exact mapped bytes EB 10: jmp 0x5886651b
        __asm _emit 0xeb
        __asm _emit 0x10
        test dl, 10h
        ; Exact mapped bytes 74 0B: je 0x5886651b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [eax + ecx + 119h]
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 1D: jne 0x58866540
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 E7 FE FF FF: jne 0x58866413
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 18: jmp 0x58866546
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes E8 3C BF FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        mov esi, 7fffffffh
        ; Exact mapped bytes EB 06: jmp 0x58866546
        __asm _emit 0xeb
        __asm _emit 0x06
        sbb esi, esi
        and esi, 2
        dec esi
        cmp byte ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0A: je 0x58866556
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 20h]
        and dword ptr [ecx + 350h], 0fffffffdh
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
