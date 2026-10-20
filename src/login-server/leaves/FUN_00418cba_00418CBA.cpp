// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418CBA .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00418cba_00418CBA() {
    __asm {
        mov eax, 43ad95h
        ; Exact mapped bytes E8 44 69 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43ed6ch
        mov edi, dword ptr [esi + 88h]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes 74 0E: je 0x418cf4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes E8 71 1E 00 00: call 0x41ab5e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 22 4C 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, esi
        ; Exact mapped bytes E8 28 0E 00 00: call 0x419b23
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 60h]
        lea eax, [esi + 3ch]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 96 0A 00 00: call 0x41979f
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 64h]
        mov ecx, esi
        push 440378h
        ; Exact mapped bytes E8 87 0A 00 00: call 0x41979f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 84h]
        mov ecx, esi
        push 440328h
        ; Exact mapped bytes E8 75 0A 00 00: call 0x41979f
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x418d43
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov eax, dword ptr [esi + 50h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [esi + 50h], ebx
        mov eax, dword ptr [esi + 54h]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x418d53
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [esi + 54h], ebx
        mov eax, dword ptr [esi + 4ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 1E: je 0x418d78
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [eax]
        push ebx
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 4ch]
        push 1
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, dword ptr [esi + 4ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [esi + 4ch], ebx
        lea eax, [esi + 0a8h]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        push -1
        mov ecx, esi
        ; Exact mapped bytes E8 1B 16 00 00: call 0x41a3aa
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 94h], ebx
        ; Exact mapped bytes 74 1B: je 0x418db2
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 90h]
        cmp eax, ebx
        ; Exact mapped bytes 74 11: je 0x418db2
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [eax + 88h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x418db2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push ebx
        push esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        lea ecx, [esi + 9ch]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 EA 4D 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [esi + 58h]
        mov byte ptr [ebp - 4], bl
        ; Exact mapped bytes E8 E9 FD 01 00: call 0x438bb5
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 6F 8B 01 00: call 0x431946
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
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
        leave
        ret
    }
}
