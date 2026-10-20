// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875EA4 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_58875ea4_58875EA4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 13: jne 0x58875ec7
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 B6 C5 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 E8 B0 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 7A: jmp 0x58875f41
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov esi, dword ptr [ebp + 10h]
        xor eax, eax
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [edi], eax
        test ebx, ebx
        ; Exact mapped bytes 74 3F: je 0x58875f18
        __asm _emit 0x74
        __asm _emit 0x3f
        test esi, esi
        ; Exact mapped bytes 74 3F: je 0x58875f1c
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 D9 FE FF FF: call 0x58875dc1
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        pop ecx
        test edx, edx
        ; Exact mapped bytes 74 4F: je 0x58875f3e
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, edx
        lea eax, [ecx + 2]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 45 FC: cmp ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 75 F4: jne 0x58875ef7
        __asm _emit 0x75
        __asm _emit 0xf4
        sub ecx, dword ptr [ebp - 8]
        sar ecx, 1
        inc ecx
        mov dword ptr [edi], ecx
        test esi, esi
        ; Exact mapped bytes 74 2F: je 0x58875f3e
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp ecx, esi
        ; Exact mapped bytes 76 1C: jbe 0x58875f2f
        __asm _emit 0x76
        __asm _emit 0x1c
        push 22h
        pop eax
        ; Exact mapped bytes EB 28: jmp 0x58875f40
        __asm _emit 0xeb
        __asm _emit 0x28
        test esi, esi
        ; Exact mapped bytes 74 C4: je 0x58875ee0
        __asm _emit 0x74
        __asm _emit 0xc4
        ; Exact mapped bytes E8 4E C5 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 80 B0 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 11: jmp 0x58875f40
        __asm _emit 0xeb
        __asm _emit 0x11
        push edx
        push esi
        push ebx
        ; Exact mapped bytes E8 49 10 FF FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58875f45
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        pop ebx
        pop edi
        pop esi
        leave
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 88 B0 FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
