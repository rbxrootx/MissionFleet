// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588357CF .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_588357cf_588357CF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 61ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        push esi
        push ebx
        ; Exact mapped bytes FF 15 E4 42 89 58: call dword ptr [0x588942e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5883580c
        __asm _emit 0x75
        __asm _emit 0x14
        push 588f0d44h
        push esi
        ; Exact mapped bytes E8 9D 42 02 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        xor al, al
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x588358fc
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        ; Exact mapped bytes E8 4E 11 03 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        pop ecx
        cmp eax, -1
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x588358db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 588f0d44h
        push esi
        ; Exact mapped bytes E8 76 42 02 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        lea eax, [ebp - 20ch]
        mov edi, 104h
        push eax
        push edi
        ; Exact mapped bytes FF 15 F4 41 89 58: call dword ptr [0x588941f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 61ch]
        push edi
        push eax
        ; Exact mapped bytes E8 C0 00 00 00: call 0x5883590c
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 61ch]
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 51 08 03 00: call 0x588660b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x588358d8
        __asm _emit 0x74
        __asm _emit 0x72
        lea eax, [ebp - 20ch]
        push eax
        lea eax, [ebp - 61ch]
        push eax
        ; Exact mapped bytes E8 D8 9A 01 00: call 0x5884f351
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 57: je 0x588358d8
        __asm _emit 0x74
        __asm _emit 0x57
        push 204h
        lea eax, [ebp - 410h]
        mov dword ptr [ebp - 414h], 2eh
        push ebx
        push eax
        ; Exact mapped bytes E8 73 75 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 E7 39 02 00: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [edi + eax*2]
        push eax
        lea eax, [ebp - 414h]
        push 104h
        push eax
        ; Exact mapped bytes E8 02 06 03 00: call 0x58865ec0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 1ch
        lea eax, [ebp - 414h]
        push ebx
        push ebx
        push dword ptr [ebp + 0ch]
        push esi
        push -1
        push eax
        push ebx
        push ebx
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        ; Exact mapped bytes EB 1F: jmp 0x588358fa
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 5ch
        push esi
        ; Exact mapped bytes E8 76 24 02 00: call 0x58857d59
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x588358ed
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 0D: jmp 0x588358fa
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 588f0d44h
        push esi
        ; Exact mapped bytes E8 A8 41 02 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov al, 1
        mov ecx, dword ptr [ebp - 4]
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 48 B7 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
