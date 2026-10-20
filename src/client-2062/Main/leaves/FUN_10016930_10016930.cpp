// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016930 .. +0x216 bytes.
extern "C" __declspec(naked) void FUN_10016930_10016930() {
    __asm {
        push -1
        push 1016d489h
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
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 9B 78 FF FF: call 0x1000e210
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 32h
        xor ebx, ebx
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 50h], eax
        mov eax, 1
        push 6ch
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175470h
        mov dword ptr [esi + 94h], 3e8h
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0b4h], 5dch
        mov dword ptr [esi + 0ach], eax
        mov dword ptr [esi + 88h], ebx
        mov dword ptr [esi + 0d4h], ebx
        mov dword ptr [esi + 0c4h], ebx
        mov dword ptr [esi + 0c8h], 0fah
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0d0h], 5ah
        mov dword ptr [esi + 0d8h], ebx
        ; Exact mapped bytes E8 AA 5D 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5d
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 29: je 0x10016a2f
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 54 57 1C 10: mov ecx, dword ptr [0x101c5754]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x10016a1e
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 75 02: jne 0x10016a20
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 33 B9 01 00: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10016a31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 5E 5D 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5d
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 74: je 0x10016ac8
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 54 57 1C 10: mov eax, dword ptr [0x101c5754]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 24h
        ; Exact mapped bytes 7E 12: jle 0x10016a74
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10016a74
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 900h]
        ; Exact mapped bytes EB 02: jmp 0x10016a76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 24 7F 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x10016aca
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x10016aca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0e0h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e0h]
        push 20h
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 B3 5C 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5c
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 2C: je 0x10016b29
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 0ch
        ; Exact mapped bytes 7E 0D: jle 0x10016b19
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 03: je 0x10016b19
        __asm _emit 0x74
        __asm _emit 0x03
        mov ebx, dword ptr [ecx + 30h]
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 DF 1D 03 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes EB 06: jmp 0x10016b2f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 0e4h], ebx
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
