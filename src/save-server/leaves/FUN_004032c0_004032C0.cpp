// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004032C0 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_004032c0_004032C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a8h]
        mov ecx, 2ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 0c0000000h
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D6 1A 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x4033bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AE 1A 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 68h]
        push eax
        push 5ch
        lea ecx, [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8F 1A 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 36: jne 0x40339f
        __asm _emit 0x75
        __asm _emit 0x36
        mov esi, esp
        push 0
        lea ecx, [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 66 1A 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 53 1A 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x4033b6
        __asm _emit 0xeb
        __asm _emit 0x17
        mov esi, esp
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3E 1A 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x4033bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4033bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0a8h
        cmp ebp, esp
        ; Exact mapped bytes E8 21 1A 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
