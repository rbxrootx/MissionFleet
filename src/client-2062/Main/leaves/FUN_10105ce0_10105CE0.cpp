// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10105CE0 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_10105ce0_10105CE0() {
    __asm {
        push -1
        push 101749f8h
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
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 20h
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes E8 9A 6A 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x6a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr [esp + 34h]
        push 40h
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 83 8C FF FF: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 3ch]
        xor ebx, ebx
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], ecx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], ebx
        cmp edi, ebx
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes 75 14: jne 0x10105d7a
        __asm _emit 0x75
        __asm _emit 0x14
        push 80h
        ; Exact mapped bytes E8 30 6A 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6a
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 03: jmp 0x10105d7d
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 6ch], edi
        mov edx, dword ptr [esi + 6ch]
        push ebx
        push 101acddch
        push edx
        mov dword ptr [esi], 101768e0h
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], 7fffffffh
        mov dword ptr [esi + 54h], 2
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 80h], ebx
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 84h], 1
        mov dword ptr [esi + 88h], ebx
        mov dword ptr [esi + 8ch], ebx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 1ch]
        add esp, 0ch
        mov eax, esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
