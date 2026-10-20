// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045EE74 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_0045ee74_0045EE74() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        push 10h
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 D4 A4 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 C4 A4 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], 10h
        lea edx, [ebp - 30h]
        push edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 04 FF FF: call 0x44f380
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1A: je 0x45eee9
        __asm _emit 0x74
        __asm _emit 0x1a
        mov cl, byte ptr [ebp - 1ch]
        mov byte ptr [ebp - 10h], cl
        mov dl, byte ptr [ebp - 1bh]
        mov byte ptr [ebp - 0fh], dl
        mov al, byte ptr [ebp - 1ah]
        mov byte ptr [ebp - 0eh], al
        mov cl, byte ptr [ebp - 19h]
        mov byte ptr [ebp - 0dh], cl
        ; Exact mapped bytes EB 0D: jmp 0x45eef6
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5ba514h
        ; Exact mapped bytes E8 22 0D 07 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes A0 79 CB 5D 00: mov al, byte ptr [0x5dcb79]
        __asm _emit 0xa0
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], al
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x45ef29
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 60: jne 0x45ef8f
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40cd8h]
        ; Exact mapped bytes E8 40 7B FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1B: je 0x45ef64
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        push 10h
        lea eax, [ebp - 10h]
        push eax
        push 0
        push 0
        push 80017002h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D0 82 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x45ef8d
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40cd8h]
        ; Exact mapped bytes E8 72 01 FF FF: call 0x44f0e7
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 5ba548h
        ; Exact mapped bytes E8 8B 0C 07 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 91: jmp 0x45ef20
        __asm _emit 0xeb
        __asm _emit 0x91
        xor eax, eax
        pop edi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 44 98 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
