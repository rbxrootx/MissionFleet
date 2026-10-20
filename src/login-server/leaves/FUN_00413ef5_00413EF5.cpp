// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413EF5 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_00413ef5_00413EF5() {
    __asm {
        mov eax, 43a6c8h
        ; Exact mapped bytes E8 09 B7 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        push ebx
        push esi
        push edi
        xor esi, esi
        push dword ptr [ebp + 8]
        lea ecx, [ebp - 18h]
        mov dword ptr [ebp - 20h], esi
        ; Exact mapped bytes E8 04 9D 01 00: call 0x42dc19
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 39 A1 01 00: call 0x42e059
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        push esi
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4C A0 01 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], eax
        push eax
        ; Exact mapped bytes E8 2F BA 00 00: call 0x41f964
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        cmp edi, esi
        pop ecx
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x413ff0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 24h]
        xor ebx, ebx
        cmp esi, edi
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 10h], ebx
        ; Exact mapped bytes 73 72: jae 0x413fc5
        __asm _emit 0x73
        __asm _emit 0x72
        mov al, byte ptr [esi]
        cmp al, 27h
        ; Exact mapped bytes 75 19: jne 0x413f72
        __asm _emit 0x75
        __asm _emit 0x19
        push esi
        ; Exact mapped bytes E8 8E B8 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 27h
        pop ecx
        ; Exact mapped bytes 74 23: je 0x413f88
        __asm _emit 0x74
        __asm _emit 0x23
        xor eax, eax
        cmp dword ptr [ebp - 14h], eax
        sete al
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 46: jmp 0x413fb8
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 40: jne 0x413fb8
        __asm _emit 0x75
        __asm _emit 0x40
        cmp al, 5bh
        ; Exact mapped bytes 75 1C: jne 0x413f98
        __asm _emit 0x75
        __asm _emit 0x1c
        push esi
        ; Exact mapped bytes E8 6B B8 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 5bh
        pop ecx
        ; Exact mapped bytes 75 0B: jne 0x413f93
        __asm _emit 0x75
        __asm _emit 0x0b
        push esi
        ; Exact mapped bytes E8 5F B8 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esi, eax
        ; Exact mapped bytes EB 25: jmp 0x413fb8
        __asm _emit 0xeb
        __asm _emit 0x25
        inc dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 11: jmp 0x413fa9
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp al, 5dh
        ; Exact mapped bytes 75 1C: jne 0x413fb8
        __asm _emit 0x75
        __asm _emit 0x1c
        push esi
        ; Exact mapped bytes E8 4B B8 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 5dh
        pop ecx
        ; Exact mapped bytes 74 E0: je 0x413f88
        __asm _emit 0x74
        __asm _emit 0xe0
        inc ebx
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        sub eax, ebx
        test eax, eax
        setg cl
        mov dword ptr [ebp - 1ch], ecx
        push esi
        ; Exact mapped bytes E8 2F B8 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        cmp esi, edi
        ; Exact mapped bytes 72 8E: jb 0x413f53
        __asm _emit 0x72
        __asm _emit 0x8e
        xor esi, esi
        cmp dword ptr [ebp - 20h], esi
        ; Exact mapped bytes 75 0C: jne 0x413fd8
        __asm _emit 0x75
        __asm _emit 0x0c
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 14h], esi
        ; Exact mapped bytes 75 05: jne 0x413fe2
        __asm _emit 0x75
        __asm _emit 0x05
        cmp dword ptr [ebp - 1ch], esi
        ; Exact mapped bytes 74 12: je 0x413ff4
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 20h]
        push dword ptr [ebp + 0ch]
        add edi, eax
        push edi
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x413f30
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        ; Exact mapped bytes EB 08: jmp 0x413ffc
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp - 24h]
        add edi, eax
        push -1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 BE 9F 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 99 9B 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
