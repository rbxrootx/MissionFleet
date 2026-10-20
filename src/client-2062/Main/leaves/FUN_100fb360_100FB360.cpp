// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB360 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_100fb360_100FB360() {
    __asm {
        push -1
        push 10174558h
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
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push ebx
        push esi
        mov esi, ecx
        push 40h
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes E8 10 36 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 3ch]
        mov dword ptr [esi + 50h], edx
        mov edx, dword ptr [esp + 40h]
        xor ebx, ebx
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], ecx
        mov dword ptr [esi + 68h], edx
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], ebx
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 14h], ebx
        cmp eax, ebx
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes 75 14: jne 0x100fb3f5
        __asm _emit 0x75
        __asm _emit 0x14
        push 80h
        ; Exact mapped bytes E8 B5 13 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x13
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 03: jmp 0x100fb3f8
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 6ch], eax
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi], 10176688h
        mov dword ptr [esi + 70h], 4bh
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [esi + 78h], 2
        mov dword ptr [esi + 7ch], ebx
        mov eax, esi
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
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
