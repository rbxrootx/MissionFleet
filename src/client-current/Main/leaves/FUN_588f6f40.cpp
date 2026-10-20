// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F6F40 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_588f6f40() {
    __asm {
        sub esp, 5ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 58h], eax
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0c8h]
        push edi
        mov ecx, 16h
        lea esi, [esp + 6ch]
        lea edi, [esp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp eax, 14h
        ; Exact mapped bytes 72 16: jb 0x588f6f83
        __asm _emit 0x72
        __asm _emit 0x16
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr [esp + 58h]
        xor ecx, esp
        ; Exact mapped bytes E8 5D 5C 08 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 5ch
        ; Exact mapped bytes C2 58 00: ret 0x58
        __asm _emit 0xc2
        __asm _emit 0x58
        __asm _emit 0x00
        lea ecx, [esp + 0ch]
        push ecx
        mov ecx, dword ptr [ebx + eax*4 + 60h]
        ; Exact mapped bytes E8 8F 00 00 00: call 0x588f7020
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 D8: je 0x588f6f6d
        __asm _emit 0x74
        __asm _emit 0xd8
        mov ecx, dword ptr [esp + 64h]
        pop edi
        mov eax, 1
        add dword ptr [ebx + 0c8h], eax
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 2C 5C 08 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 5ch
        ; Exact mapped bytes C2 58 00: ret 0x58
        __asm _emit 0xc2
        __asm _emit 0x58
        __asm _emit 0x00
    }
}
