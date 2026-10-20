// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E6F0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_1004e6f0_1004E6F0() {
    __asm {
        push -1
        push 1016ea73h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        mov edx, dword ptr [esp + 2ch]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 5C 8E 0B 00: call 0x10107590
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 0ffffff38h
        mov ecx, 1dh
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], eax
        mov eax, 64h
        lea edi, [esi + 130h]
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        xor eax, eax
        xor ebx, ebx
        mov dword ptr [esi], 10175b80h
        mov dword ptr [esi + 128h], 1
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 10h
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esi + 1ach], ebx
        ; Exact mapped bytes E8 24 E0 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 17: je 0x1004e79a
        __asm _emit 0x74
        __asm _emit 0x17
        mov dword ptr [eax], 10175b7ch
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 4], ebx
        mov dword ptr [eax + 0ch], ebx
        mov dword ptr [esi + 1b0h], eax
        ; Exact mapped bytes EB 06: jmp 0x1004e7a0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 1b0h], ebx
        mov ecx, dword ptr [esp + 10h]
        mov eax, esi
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
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
