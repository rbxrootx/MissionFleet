// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041288E .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_0041288e_0041288E() {
    __asm {
        mov eax, 43a5f8h
        ; Exact mapped bytes E8 70 CD 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esp
        push dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 0B 00 00: call 0x4133ec
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 DD 0B 00 00: call 0x413498
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4128d0
        __asm _emit 0x75
        __asm _emit 0x11
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push dword ptr [esi + 4]
        xor edi, edi
        mov ecx, esi
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes FF 50 3C: call dword ptr [eax + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x3c
        xor ebx, ebx
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 77 0A: ja 0x4128f0
        __asm _emit 0x77
        __asm _emit 0x0a
        cmp dword ptr [esi + 18h], edi
        ; Exact mapped bytes 77 05: ja 0x4128f0
        __asm _emit 0x77
        __asm _emit 0x05
        push 1
        pop ebx
        ; Exact mapped bytes EB 07: jmp 0x4128f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 12 22 00 00: call 0x414b09
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 6C 0D 00 00: call 0x41366d
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 45 0E 00 00: call 0x41374d
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 2C 11 00 00: call 0x413a3b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 5E 12 00 00: call 0x413b74
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, edi
        ; Exact mapped bytes 74 11: je 0x41292b
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 77 05: ja 0x412924
        __asm _emit 0x77
        __asm _emit 0x05
        cmp dword ptr [esi + 18h], edi
        ; Exact mapped bytes 76 07: jbe 0x41292b
        __asm _emit 0x76
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 DE 21 00 00: call 0x414b09
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov eax, dword ptr [esi]
        push 1
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov eax, dword ptr [esi + 0c8h]
        push 1
        mov dword ptr [esi + 0c4h], eax
        pop eax
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x4128bf
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
