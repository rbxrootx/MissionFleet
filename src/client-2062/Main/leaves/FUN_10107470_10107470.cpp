// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10107470 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_10107470_10107470() {
    __asm {
        push -1
        push 10174adbh
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
        push esi
        push edi
        push 78h
        ; Exact mapped bytes E8 11 53 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 8], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x10107534
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 1ch]
        push 40h
        push edi
        push edi
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 F0 74 FF FF: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov ecx, 3
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 50h], eax
        mov eax, dword ptr [esp + 24h]
        cmp eax, edi
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi + 68h], ecx
        mov dword ptr [esi + 6ch], ecx
        mov dword ptr [esi], 101769e8h
        mov dword ptr [esi + 70h], edi
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes 74 29: je 0x1010751f
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
        mov eax, esi
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        xor eax, eax
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
