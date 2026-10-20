// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10001000 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_10001000_10001000() {
    __asm {
        push -1
        push 1016cd88h
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
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov ecx, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 24h]
        push edi
        push edi
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes E8 73 D9 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esi], 101751f8h
        cmp eax, edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x1000107a
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 0fffffeffh
        mov ecx, esi
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esi], 101751e0h
        ; Exact mapped bytes E8 D0 E0 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 60h], ecx
        mov ecx, dword ptr [esp + 0ch]
        lea edx, [eax + eax*4]
        mov dword ptr [esi + 58h], edi
        shl edx, 2
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 5ch], edx
        mov eax, esi
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
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
