// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004EE10 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_1004ee10_1004EE10() {
    __asm {
        push -1
        push 1016eab3h
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
        push ebp
        push esi
        mov esi, dword ptr [esp + 24h]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push eax
        push esi
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 5B FB 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0x0a
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [edi], 10175ba0h
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [edi + 0bch], ebx
        mov dword ptr [edi + 0c8h], ebx
        mov dword ptr [edi + 0c0h], ebx
        mov dword ptr [edi + 0c4h], 1
        mov dword ptr [edi + 8ch], ebx
        mov dword ptr [esp + 38h], esi
        lea ebp, [edi + 0ach]
        mov dword ptr [esp + 34h], 4
        push 58h
        ; Exact mapped bytes E8 04 D9 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 30h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 27: je 0x1004eed5
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 38h]
        push 3e8h
        push ebx
        push ebx
        push edx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 E9 FA 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1004eed7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [ebp], esi
        ; Exact mapped bytes 66 81 66 24 FB FF: and word ptr [esi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        add ebp, 4
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [ecx + 50h], ebx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 0eh
        dec eax
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 75 92: jne 0x1004ee95
        __asm _emit 0x75
        __asm _emit 0x92
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edi + 54h], ebx
        mov eax, edi
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
