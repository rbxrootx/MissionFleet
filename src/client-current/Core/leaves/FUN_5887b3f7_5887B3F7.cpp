// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B3F7 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_5887b3f7_5887B3F7() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 18h], edx
        push ebx
        mov ebx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 20h], ebx
        push esi
        push edi
        mov edi, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x5887b4bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov esi, ecx
        mov dword ptr [ebp - 10h], edi
        push edx
        cmp eax, 4
        lea ecx, [ebp - 0ch]
        movzx eax, word ptr [edi]
        push ebx
        cmovae ecx, esi
        push eax
        push ecx
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E8 84 2B FF FF: call 0x5886dfd2
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        add esp, 10h
        cmp ebx, -1
        ; Exact mapped bytes 74 57: je 0x5887b4af
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, esi
        ; Exact mapped bytes 74 10: je 0x5887b46f
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes 72 35: jb 0x5887b499
        __asm _emit 0x72
        __asm _emit 0x35
        push ebx
        push eax
        push esi
        ; Exact mapped bytes E8 24 14 FD FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test ebx, ebx
        ; Exact mapped bytes 74 11: je 0x5887b484
        __asm _emit 0x74
        __asm _emit 0x11
        lea ecx, [ebx + esi]
        cmp byte ptr [ecx - 1], 0
        ; Exact mapped bytes 74 22: je 0x5887b49e
        __asm _emit 0x74
        __asm _emit 0x22
        add edi, 2
        mov dword ptr [ebp - 10h], edi
        ; Exact mapped bytes EB 03: jmp 0x5887b487
        __asm _emit 0xeb
        __asm _emit 0x03
        add edi, 2
        mov eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 18h]
        sub eax, ebx
        add esi, ebx
        mov dword ptr [ebp + 10h], eax
        mov ebx, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 9D: jmp 0x5887b436
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 05: jmp 0x5887b4a3
        __asm _emit 0xeb
        __asm _emit 0x05
        xor eax, eax
        lea esi, [ecx - 1]
        mov ecx, dword ptr [ebp - 14h]
        sub esi, dword ptr [ebp - 24h]
        mov dword ptr [ecx], eax
        mov eax, esi
        ; Exact mapped bytes EB 40: jmp 0x5887b4ef
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx], eax
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 33: jmp 0x5887b4ef
        __asm _emit 0xeb
        __asm _emit 0x33
        xor esi, esi
        push edx
        ; Exact mapped bytes EB 13: jmp 0x5887b4d4
        __asm _emit 0xeb
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5887b4cc
        __asm _emit 0x74
        __asm _emit 0x07
        cmp byte ptr [ebp + eax - 0dh], 0
        ; Exact mapped bytes 74 20: je 0x5887b4ec
        __asm _emit 0x74
        __asm _emit 0x20
        push dword ptr [ebp - 18h]
        add esi, eax
        add edi, 2
        movzx eax, word ptr [edi]
        push ebx
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F0 2A FF FF: call 0x5886dfd2
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 75 D7: jne 0x5887b4c1
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes EB 03: jmp 0x5887b4ef
        __asm _emit 0xeb
        __asm _emit 0x03
        dec eax
        add eax, esi
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 54 5B FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
