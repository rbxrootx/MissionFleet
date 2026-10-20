// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C6980 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_588c6980() {
    __asm {
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp byte ptr [eax + 20d64h], 0
        mov esi, ecx
        mov ebx, 40000000h
        ; Exact mapped bytes 74 34: je 0x588c69ce
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [esi + 88h]
        xor edx, edx
        mov ecx, 3ch
        div ecx
        mov edi, 1
        push edx
        mov edx, dword ptr [esi + 0c4h]
        push eax
        mov eax, dword ptr [edx + 6ch]
        push 589a0c0ch
        push 80h
        push eax
        ; Exact mapped bytes E8 97 50 E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 32: jmp 0x588c6a00
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [esi + 0e4h]
        cmp dword ptr [eax + 60h], ebx
        ; Exact mapped bytes 75 22: jne 0x588c69fb
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [eax + 58h]
        mov edx, dword ptr [esi + 0c4h]
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 5898d18ch
        push 80h
        push eax
        ; Exact mapped bytes E8 6A 50 E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 05: jmp 0x588c6a00
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edi, 1
        mov eax, dword ptr [esi + 0e8h]
        cmp dword ptr [eax + 60h], ebx
        ; Exact mapped bytes 75 22: jne 0x588c6a2d
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [eax + 58h]
        mov edx, dword ptr [esi + 0c8h]
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 5898d18ch
        push 80h
        push eax
        ; Exact mapped bytes E8 38 50 E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 01: jmp 0x588c6a2e
        __asm _emit 0xeb
        __asm _emit 0x01
        inc edi
        mov eax, dword ptr [esi + 0ech]
        cmp dword ptr [eax + 60h], ebx
        ; Exact mapped bytes 75 1E: jne 0x588c6a57
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [eax + 58h]
        mov edx, dword ptr [esi + 0dch]
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes EB 01: jmp 0x588c6a58
        __asm _emit 0xeb
        __asm _emit 0x01
        inc edi
        mov eax, dword ptr [esi + 0f0h]
        cmp dword ptr [eax + 60h], ebx
        ; Exact mapped bytes 75 22: jne 0x588c6a85
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [eax + 58h]
        mov edx, dword ptr [esi + 0e0h]
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 5898d18ch
        push 80h
        push eax
        ; Exact mapped bytes E8 E0 4F E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 01: jmp 0x588c6a86
        __asm _emit 0xeb
        __asm _emit 0x01
        inc edi
        cmp edi, 4
        ; Exact mapped bytes 75 0A: jne 0x588c6a95
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi + 9ch], 0
        pop edi
        pop esi
        pop ebx
        ret
    }
}
