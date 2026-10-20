// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58755070 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_58755070() {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 10h]
        xor ecx, ecx
        mov eax, edi
        mov edx, 4
        mul edx
        seto cl
        mov dword ptr [esi + 8], edi
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 9A C4 21 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc4
        __asm _emit 0x21
        __asm _emit 0x00
        mov dword ptr [esi + 10h], eax
        xor ecx, ecx
        mov eax, edi
        mov edx, 10h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 7F C4 21 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc4
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        shl edi, 4
        push edi
        push ecx
        push eax
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes E8 8B 7C 22 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 14h
        xor ebp, ebp
        push ebp
        push 80h
        push 3
        push ebp
        push ebp
        push 80000000h
        push 5898d6a4h
        ; Exact mapped bytes FF 15 80 C1 98 58: call dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 75 12: jne 0x587550f9
        __asm _emit 0x75
        __asm _emit 0x12
        push eax
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 1ch], ebp
        mov dword ptr [esi + 18h], ebp
        mov dword ptr [esi + 0ch], ebp
        ; Exact mapped bytes EB 39: jmp 0x58755132
        __asm _emit 0xeb
        __asm _emit 0x39
        push ebp
        push edi
        ; Exact mapped bytes FF 15 8C C1 98 58: call dword ptr [0x5898c18c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        mov dword ptr [esi + 1ch], eax
        ; Exact mapped bytes E8 24 C4 21 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ch]
        add esp, 4
        push ebp
        lea edx, [esp + 14h]
        push edx
        push ecx
        push eax
        push edi
        mov dword ptr [esi + 18h], eax
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [esi + 18h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [esi + 0ch], eax
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [esi + 8]
        cmp eax, ecx
        ; Exact mapped bytes 77 02: ja 0x5875513e
        __asm _emit 0x77
        __asm _emit 0x02
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [esi + 24h], eax
        mov edx, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 D7 C3 21 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc3
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        pop edi
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 20h], eax
        mov dword ptr [esi + 28h], 1
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
