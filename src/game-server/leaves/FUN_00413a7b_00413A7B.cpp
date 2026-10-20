// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413A7B .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_00413a7b_00413A7B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 68h]
        mov ecx, 1ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 68h], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 0c0000000h
        mov eax, dword ptr [ebp - 68h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 21 4D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x413b6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F9 4C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        push 5ch
        lea ecx, [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DA 4C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 23: jne 0x413b31
        __asm _emit 0x75
        __asm _emit 0x23
        mov esi, esp
        push 0
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 4C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x413b52
        __asm _emit 0xeb
        __asm _emit 0x21
        mov esi, esp
        push 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8E 4C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7B 4C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x413b6e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 68h
        cmp ebp, esp
        ; Exact mapped bytes E8 66 4C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
