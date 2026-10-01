// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761090 .. +0x30C bytes.
extern "C" __declspec(naked) void FUN_58761090() {
    __asm {
        push -1
        push 5897e37eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov eax, dword ptr [esp + 4ch]
        mov edi, dword ptr [esp + 48h]
        mov ebp, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 3ch]
        push eax
        mov eax, dword ptr [esp + 3ch]
        push edi
        push ebp
        push ecx
        mov ecx, dword ptr [esp + 44h]
        push edx
        mov edx, dword ptr [esp + 44h]
        push eax
        mov eax, dword ptr [esp + 40h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 11 06 FD FF: call 0x58731700
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 5898dbb4h
        mov dword ptr [esi + 70h], ebp
        mov dword ptr [esi + 74h], edi
        mov dword ptr [esi + 90h], 100h
        mov dword ptr [esi + 88h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 75 17: jne 0x58761130
        __asm _emit 0x75
        __asm _emit 0x17
        push 101h
        ; Exact mapped bytes E8 0B 04 21 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x21
        __asm _emit 0x00
        mov dword ptr [esi + 80h], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 06: jmp 0x58761136
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 80h], eax
        mov edx, dword ptr [esi + 90h]
        inc edx
        xor ecx, ecx
        push edx
        mov dword ptr [esi + 84h], ebx
        mov dword ptr [esi + 8ch], ebx
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 98h], ebx
        ; Exact mapped bytes 66 89 8E 9C 00 00 00: mov word ptr [esi + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0e8h], ebx
        mov dword ptr [esi + 0ech], ebx
        mov dword ptr [esi + 0f0h], ebx
        mov dword ptr [esi + 0f4h], ebx
        mov dword ptr [esi + 0f8h], ebx
        mov dword ptr [esi + 0fch], ebx
        ; Exact mapped bytes E8 A3 03 21 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x21
        __asm _emit 0x00
        mov dword ptr [esi + 100h], eax
        mov eax, dword ptr [esi + 90h]
        inc eax
        push eax
        ; Exact mapped bytes E8 90 03 21 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        mov edx, dword ptr [esi + 100h]
        inc ecx
        push ecx
        push ebx
        push edx
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 8F BA 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xba
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [esi + 104h]
        inc eax
        push eax
        push ebx
        push ecx
        ; Exact mapped bytes E8 7A BA 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xba
        __asm _emit 0x21
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 79 BA 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xba
        __asm _emit 0x21
        __asm _emit 0x00
        mov edi, eax
        add esp, 24h
        mov dword ptr [esp + 4ch], edi
        mov byte ptr [esp + 20h], 1
        cmp edi, ebx
        ; Exact mapped bytes 74 26: je 0x5876120d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        push 40h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A3 1F 1A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x1f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x5876120f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0ffffff38h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0ach], ecx
        ; Exact mapped bytes E8 FD 1A 1A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov byte ptr [esi + 0a8h], bl
        ; Exact mapped bytes FF 15 9C C1 98 58: call dword ptr [0x5898c19c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 A3 50 FC 9C 58: mov word ptr [0x589cfc50], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        movzx eax, ax
        xor edi, edi
        cmp eax, 412h
        ; Exact mapped bytes 7F 47: jg 0x58761297
        __asm _emit 0x7f
        __asm _emit 0x47
        ; Exact mapped bytes 74 36: je 0x58761288
        __asm _emit 0x74
        __asm _emit 0x36
        sub eax, 404h
        cmp eax, 0dh
        ; Exact mapped bytes 0F 87 95 00 00 00: ja 0x587612f5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 587613ach]
        ; Exact mapped bytes FF 24 95 9C 13 76 58: jmp dword ptr [edx*4 + 0x5876139c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0x13
        __asm _emit 0x76
        __asm _emit 0x58
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 80h
        ; Exact mapped bytes EB 63: jmp 0x587612e0
        __asm _emit 0xeb
        __asm _emit 0x63
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push ebx
        ; Exact mapped bytes EB 58: jmp 0x587612e0
        __asm _emit 0xeb
        __asm _emit 0x58
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 81h
        ; Exact mapped bytes EB 49: jmp 0x587612e0
        __asm _emit 0xeb
        __asm _emit 0x49
        cmp eax, 1004h
        ; Exact mapped bytes 7F 2E: jg 0x587612cc
        __asm _emit 0x7f
        __asm _emit 0x2e
        ; Exact mapped bytes 74 0E: je 0x587612ae
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 804h
        ; Exact mapped bytes 74 16: je 0x587612bd
        __asm _emit 0x74
        __asm _emit 0x16
        cmp eax, 0c04h
        ; Exact mapped bytes 75 47: jne 0x587612f5
        __asm _emit 0x75
        __asm _emit 0x47
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 88h
        ; Exact mapped bytes EB 23: jmp 0x587612e0
        __asm _emit 0xeb
        __asm _emit 0x23
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 86h
        ; Exact mapped bytes EB 14: jmp 0x587612e0
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp eax, 1042h
        ; Exact mapped bytes 75 22: jne 0x587612f5
        __asm _emit 0x75
        __asm _emit 0x22
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 0cch
        push ebx
        push ebx
        push ebx
        push 190h
        push ebx
        push ebx
        push ebx
        push 10h
        ; Exact mapped bytes FF 15 8C C0 98 58: call dword ptr [0x5898c08c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov edi, eax
        mov dword ptr [esi + 0a4h], ebx
        cmp edi, ebx
        ; Exact mapped bytes 74 29: je 0x58761328
        __asm _emit 0x74
        __asm _emit 0x29
        push 10h
        ; Exact mapped bytes E8 48 B9 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb9
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 0A: je 0x58761320
        __asm _emit 0x74
        __asm _emit 0x0a
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 52 21 1A 00: call 0x58903470
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x21
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58761322
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a0h], eax
        xor eax, eax
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 0b8h], ebx
        mov dword ptr [esi + 0bch], eax
        mov dword ptr [esi + 0c0h], eax
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [esi + 0c8h], eax
        mov dword ptr [esi + 0cch], eax
        mov dword ptr [esi + 0d0h], eax
        mov dword ptr [esi + 0d4h], eax
        mov dword ptr [esi + 0d8h], eax
        mov dword ptr [esi + 0dch], eax
        mov dword ptr [esi + 0e0h], eax
        mov dword ptr [esi + 0e4h], ebx
        mov dword ptr [esi + 108h], ebx
        mov eax, esi
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret 28h
    }
}
