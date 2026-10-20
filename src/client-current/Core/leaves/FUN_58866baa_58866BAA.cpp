// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866BAA .. +0x1CA bytes.
extern "C" __declspec(naked) void FUN_58866baa_58866BAA() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 24h
        lea ecx, [ebp - 24h]
        push esi
        push edi
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 18 11 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 10h]
        xor edx, edx
        test edi, edi
        ; Exact mapped bytes 0F 84 92 01 00 00: je 0x58866d5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 1ch]
        cmp dword ptr [esi + 8], edx
        ; Exact mapped bytes 75 16: jne 0x58866bea
        __asm _emit 0x75
        __asm _emit 0x16
        push edi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 01 00 00: call 0x58866dc0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, eax
        ; Exact mapped bytes E9 74 01 00 00: jmp 0x58866d5e
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x58866bfb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x58866c15
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 6F B8 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 A0 A3 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, 7fffffffh
        ; Exact mapped bytes E9 49 01 00 00: jmp 0x58866d5e
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        movzx ebx, byte ptr [ecx]
        dec edi
        inc ecx
        mov dword ptr [ebp - 0ch], ebx
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 66 8B CB: mov cx, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xcb
        movzx eax, cx
        mov dword ptr [ebp - 0ch], eax
        mov al, byte ptr [eax + esi + 19h]
        test al, 4
        ; Exact mapped bytes 74 6F: je 0x58866ca1
        __asm _emit 0x74
        __asm _emit 0x6f
        test edi, edi
        ; Exact mapped bytes 75 23: jne 0x58866c59
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 10h]
        push edi
        mov dword ptr [ebp - 0ch], edx
        mov cl, byte ptr [eax]
        movzx eax, cl
        test byte ptr [eax + esi + 19h], 4
        movzx eax, cl
        pop ecx
        cmove ecx, eax
        movzx eax, cx
        ; Exact mapped bytes 66 8B CA: mov cx, dx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x58866d39
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov al, byte ptr [ecx]
        test al, al
        ; Exact mapped bytes 75 05: jne 0x58866c67
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 4C: jmp 0x58866cb3
        __asm _emit 0xeb
        __asm _emit 0x4c
        shl ebx, 8
        movzx eax, al
        ; Exact mapped bytes 66 0B D8: or bx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd8
        inc ecx
        movzx eax, bx
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 66 8B C8: mov cx, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 66 3B 4E 0C: cmp cx, word ptr [esi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes 72 0C: jb 0x58866c8f
        __asm _emit 0x72
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3B 4E 0E: cmp cx, word ptr [esi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x0e
        ; Exact mapped bytes 77 06: ja 0x58866c8f
        __asm _emit 0x77
        __asm _emit 0x06
        ; Exact mapped bytes 66 03 4E 10: add cx, word ptr [esi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes EB 28: jmp 0x58866cb7
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 66 3B 4E 12: cmp cx, word ptr [esi + 0x12]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x12
        ; Exact mapped bytes 72 22: jb 0x58866cb7
        __asm _emit 0x72
        __asm _emit 0x22
        ; Exact mapped bytes 66 3B 4E 14: cmp cx, word ptr [esi + 0x14]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 77 1C: ja 0x58866cb7
        __asm _emit 0x77
        __asm _emit 0x1c
        ; Exact mapped bytes 66 03 4E 16: add cx, word ptr [esi + 0x16]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x16
        ; Exact mapped bytes EB 16: jmp 0x58866cb7
        __asm _emit 0xeb
        __asm _emit 0x16
        test al, 10h
        ; Exact mapped bytes 74 12: je 0x58866cb7
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [eax + esi + 119h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 66 8B 4D F4: mov cx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov ebx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [ebx]
        inc ebx
        mov dword ptr [ebp - 10h], ebx
        movzx ebx, ax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 8], ebx
        mov dword ptr [ebp - 0ch], eax
        mov bl, byte ptr [ebx + esi + 19h]
        mov byte ptr [ebp - 1], bl
        test bl, 4
        mov ebx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 4C: je 0x58866d28
        __asm _emit 0x74
        __asm _emit 0x4c
        test edi, edi
        ; Exact mapped bytes 75 05: jne 0x58866ce5
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 57: jmp 0x58866d3c
        __asm _emit 0xeb
        __asm _emit 0x57
        mov al, byte ptr [ebx]
        dec edi
        test al, al
        ; Exact mapped bytes 74 F4: je 0x58866ce0
        __asm _emit 0x74
        __asm _emit 0xf4
        shl dword ptr [ebp - 0ch], 8
        movzx eax, al
        ; Exact mapped bytes 66 09 45 F4: or word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x45
        __asm _emit 0xf4
        inc ebx
        mov eax, dword ptr [ebp - 0ch]
        movzx eax, ax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], ebx
        ; Exact mapped bytes 66 3B 46 0C: cmp ax, word ptr [esi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 72 0C: jb 0x58866d16
        __asm _emit 0x72
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3B 46 0E: cmp ax, word ptr [esi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x0e
        ; Exact mapped bytes 77 06: ja 0x58866d16
        __asm _emit 0x77
        __asm _emit 0x06
        ; Exact mapped bytes 66 03 46 10: add ax, word ptr [esi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes EB 2A: jmp 0x58866d40
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3B 46 12: cmp ax, word ptr [esi + 0x12]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x12
        ; Exact mapped bytes 72 24: jb 0x58866d40
        __asm _emit 0x72
        __asm _emit 0x24
        ; Exact mapped bytes 66 3B 46 14: cmp ax, word ptr [esi + 0x14]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes 77 1E: ja 0x58866d40
        __asm _emit 0x77
        __asm _emit 0x1e
        ; Exact mapped bytes 66 03 46 16: add ax, word ptr [esi + 0x16]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x16
        ; Exact mapped bytes EB 18: jmp 0x58866d40
        __asm _emit 0xeb
        __asm _emit 0x18
        test byte ptr [ebp - 1], 10h
        ; Exact mapped bytes 74 12: je 0x58866d40
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        movzx eax, byte ptr [eax + esi + 119h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 66 8B 45 F8: mov ax, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 12: jne 0x58866d57
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 13: je 0x58866d5d
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14h]
        test edi, edi
        ; Exact mapped bytes 0F 85 C1 FE FF FF: jne 0x58866c16
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x58866d5d
        __asm _emit 0xeb
        __asm _emit 0x06
        sbb edx, edx
        and edx, 2
        dec edx
        pop ebx
        cmp byte ptr [ebp - 18h], 0
        pop edi
        pop esi
        ; Exact mapped bytes 74 0A: je 0x58866d70
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 24h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edx
        leave
        ret
    }
}
