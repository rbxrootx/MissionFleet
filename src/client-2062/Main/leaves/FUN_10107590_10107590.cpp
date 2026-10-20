// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10107590 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_10107590_10107590() {
    __asm {
        push -1
        push 10174b0bh
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
        mov edx, dword ptr [esp + 18h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        push edi
        mov edi, dword ptr [esp + 34h]
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 28h]
        push edi
        push ebp
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 DB 73 FF FF: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 0ffffff9ch
        xor ebx, ebx
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], eax
        mov eax, 64h
        mov dword ptr [esi + 0ech], ebx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 0f0h], ebx
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 108h], ebx
        mov dword ptr [esi + 104h], ebx
        mov eax, dword ptr [esp + 28h]
        push 58h
        sub ebp, eax
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi + 120h], ebp
        mov ebp, dword ptr [esp + 30h]
        sub edi, ebp
        mov dword ptr [esi], 10176a18h
        mov dword ptr [esi + 118h], ebx
        mov dword ptr [esi + 11ch], ebx
        mov dword ptr [esi + 124h], edi
        mov dword ptr [esi + 110h], 3e8h
        ; Exact mapped bytes E8 56 51 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 50: je 0x101076ac
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [esi + 120h]
        mov ebp, dword ptr [esi + 124h]
        push 40h
        push ebx
        push ebx
        push ebx
        shl eax, 1
        push ebx
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 40h], eax
        shl ebp, 1
        ; Exact mapped bytes E8 32 73 FF FF: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        mov ecx, dword ptr [esp + 28h]
        push 840h
        push ebx
        push ebp
        push ecx
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr [esp + 34h], 2
        mov dword ptr [edi], 10176a00h
        ; Exact mapped bytes E8 DC ED FF FF: call 0x10106480
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 10ch], edi
        ; Exact mapped bytes EB 06: jmp 0x101076b2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 10ch], ebx
        mov ecx, dword ptr [esp + 14h]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
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
