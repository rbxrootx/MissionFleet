// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414B09 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_00414b09_00414B09() {
    __asm {
        mov eax, 43a704h
        ; Exact mapped bytes E8 F5 AA 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr [ebp - 14h], esi
        mov eax, dword ptr [esi + 14h]
        mov dword ptr [ebp - 10h], esp
        cmp eax, ebx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 49: je 0x414b76
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [esi + 3ch], ebx
        ; Exact mapped bytes 75 1E: jne 0x414b50
        __asm _emit 0x75
        __asm _emit 0x1e
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 B1 8D 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 3ch], eax
        mov ecx, dword ptr [esi + 14h]
        shl ecx, 4
        push ecx
        push ebx
        push eax
        ; Exact mapped bytes E8 93 9F 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [esi + 0ech], ebx
        lea edi, [esi + 0ech]
        ; Exact mapped bytes 75 18: jne 0x414b76
        __asm _emit 0x75
        __asm _emit 0x18
        push dword ptr [esi + 14h]
        ; Exact mapped bytes E8 86 8D 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [edi], eax
        push dword ptr [esi + 14h]
        push ebx
        push eax
        ; Exact mapped bytes E8 6D 9F 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [esi + 18h]
        cmp eax, ebx
        ; Exact mapped bytes 74 52: je 0x414bcf
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [esi + 0f0h], ebx
        lea edi, [esi + 0f0h]
        ; Exact mapped bytes 75 16: jne 0x414ba1
        __asm _emit 0x75
        __asm _emit 0x16
        push eax
        ; Exact mapped bytes E8 5B 8D 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [edi], eax
        push dword ptr [esi + 18h]
        push ebx
        push eax
        ; Exact mapped bytes E8 42 9F 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [esi + 0f4h], ebx
        lea edi, [esi + 0f4h]
        ; Exact mapped bytes 75 20: jne 0x414bcf
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 18h]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 31 8D 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [edi], eax
        mov ecx, dword ptr [esi + 18h]
        shl ecx, 2
        push ecx
        push ebx
        push eax
        ; Exact mapped bytes E8 14 9F 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
    }
}
