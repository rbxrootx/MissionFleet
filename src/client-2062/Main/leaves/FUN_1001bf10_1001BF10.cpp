// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001BF10 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_1001bf10_1001BF10() {
    __asm {
        push -1
        push 1016d7dbh
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
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        mov ebp, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push esi
        push edi
        mov edi, ecx
        lea eax, [ebp + 1eh]
        push 40h
        lea ecx, [ebx + 64h]
        push eax
        push ecx
        push ebp
        push ebx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 60 2A 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2a
        __asm _emit 0x0e
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        mov dword ptr [edi + 58h], 100h
        mov dword ptr [edi + 5ch], eax
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        push 70h
        and ecx, 0fff0h
        mov dword ptr [esp + 20h], eax
        or ecx, 20h
        mov dword ptr [edi], 1017557ch
        mov dword ptr [edi + 60h], eax
        ; Exact mapped bytes 66 89 4F 24: mov word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x24
        mov dword ptr [edi + 68h], eax
        ; Exact mapped bytes E8 16 08 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x15
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 6E: je 0x1001c00a
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 15 BC 56 1C 10: mov edx, dword ptr [0x101c56bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + 18h]
        push 40h
        lea ecx, [ebx + 4b0h]
        push eax
        add ebp, 3
        push ecx
        add ebx, 0ah
        push ebp
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 44h], edx
        ; Exact mapped bytes E8 ED 29 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x29
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        xor eax, eax
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 60h], 0ffffffh
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 A1 07 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x1001c00c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edi + 64h], esi
        mov dword ptr [esi + 60h], 0ffffffh
        mov dword ptr [edi + 6ch], 1
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
