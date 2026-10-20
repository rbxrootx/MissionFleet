// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58820440 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_58820440() {
    __asm {
        sub esp, 408h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 404h], eax
        push ebx
        mov ebx, dword ptr [esp + 410h]
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor eax, eax
        xor edi, edi
        ; Exact mapped bytes 66 3B 86 9A 0C 00 00: cmp ax, word ptr [esi + 0xc9a]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1E: jge 0x5882048c
        __asm _emit 0x7d
        __asm _emit 0x1e
        lea ebp, [esi + 64h]
        push ebx
        push ebp
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x588204a9
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 0F BF 8E 9A 0C 00 00: movsx ecx, word ptr [esi + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        add ebp, 18h
        cmp edi, ecx
        ; Exact mapped bytes 7C E5: jl 0x58820471
        __asm _emit 0x7c
        __asm _emit 0xe5
        xor eax, eax
        mov ecx, dword ptr [esp + 414h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 3A C7 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc7
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 408h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push 5899db1ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 30h]
        add esp, 0ch
        push ebx
        ; Exact mapped bytes E8 B0 7E 02 00: call 0x58848380
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 75 0D: jne 0x588204e3
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 30h]
        push ebx
        ; Exact mapped bytes E8 F1 7E 02 00: call 0x588483d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x588204e9
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [eax + 0a4h], ebp
        push 0ffd997h
        lea eax, [edi + edi*2]
        mov byte ptr [esi + eax*8 + 64h], 0
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes 66 FF 8E 98 0C 00 00: dec word ptr [esi + 0xc98]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 5898c922h
        ; Exact mapped bytes E8 C1 83 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0ffffffh
        push -1
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 AA 83 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 3F 83 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 34 83 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0c9ah]
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        dec edx
        cmp edi, edx
        ; Exact mapped bytes 75 08: jne 0x58820553
        __asm _emit 0x75
        __asm _emit 0x08
        dec eax
        ; Exact mapped bytes 66 89 86 9A 0C 00 00: mov word ptr [esi + 0xc9a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x5882048e
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
