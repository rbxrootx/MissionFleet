// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029F60 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_10029f60_10029F60() {
    __asm {
        push -1
        push 1016db33h
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
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 28h]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push edi
        push edi
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes E8 13 4A 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esi], 1017523ch
        cmp eax, edi
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x10029fd7
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
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
        push 68h
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esi], 101756d4h
        ; Exact mapped bytes E8 B8 27 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, edi
        mov byte ptr [esp + 14h], 1
        ; Exact mapped bytes 74 0E: je 0x1002a006
        __asm _emit 0x74
        __asm _emit 0x0e
        push 40h
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5C A0 0C 00: call 0x100f4060
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1002a008
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 1ch]
        xor edx, edx
        cmp ecx, edi
        mov dword ptr [esi + 70h], eax
        setl dl
        dec edx
        and ecx, edx
        mov dword ptr [eax + 58h], ecx
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [eax + 5ch], ecx
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [eax + 60h], 40000000h
        mov eax, dword ptr [esp + 24h]
        cmp eax, 1
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 54h], ecx
        ; Exact mapped bytes 75 0D: jne 0x1002a049
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 20h]
        mov edx, dword ptr [esi + 18h]
        sub eax, edx
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes EB 0B: jmp 0x1002a054
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 1ch]
        mov eax, dword ptr [esi + 14h]
        sub edx, eax
        mov dword ptr [esi + 68h], edx
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 5ch], edi
        mov eax, dword ptr [eax + 58h]
        mov dword ptr [esi + 6ch], edi
        imul eax, dword ptr [esi + 68h]
        cdq
        idiv ecx
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        mov dword ptr [esi + 60h], eax
        mov eax, esi
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
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
