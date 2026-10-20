// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041366D .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_0041366d_0041366D() {
    __asm {
        mov eax, 43a670h
        ; Exact mapped bytes E8 91 BF 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        xor ebx, ebx
        cmp dword ptr [ebp + 8], ebx
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 75 2A: jne 0x4136ad
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi]
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        lea edi, [esi + 0d4h]
        push eax
        mov ecx, edi
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes E8 45 A6 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 00 A5 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x4136bd
        __asm _emit 0xeb
        __asm _emit 0x10
        push dword ptr [ebp + 8]
        lea edi, [esi + 0d4h]
        mov ecx, edi
        ; Exact mapped bytes E8 77 A6 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [esi + 18h], ebx
        ; Exact mapped bytes 74 0A: je 0x4136cc
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [esi + 4]
        mov ecx, esi
        ; Exact mapped bytes E8 B7 16 00 00: call 0x414d83
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 8B 0D 00 00: call 0x41445e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A1 0E 00 00: call 0x41457b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0cch], ebx
        ; Exact mapped bytes 75 08: jne 0x4136ea
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [esi + 0d0h], ebx
        ; Exact mapped bytes 74 17: je 0x413701
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, esi
        ; Exact mapped bytes E8 DF 0E 00 00: call 0x4145d0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x413701
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 0d0h], ebx
        mov dword ptr [esi + 0cch], ebx
        cmp dword ptr [esi + 0cch], ebx
        ; Exact mapped bytes 74 19: je 0x413722
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [esi + 28h], ebx
        ; Exact mapped bytes 74 14: je 0x413722
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [esi + 8]
        cmp dword ptr [eax + 10h], ebx
        ; Exact mapped bytes 74 0C: je 0x413722
        __asm _emit 0x74
        __asm _emit 0x0c
        push 43d530h
        mov ecx, edi
        ; Exact mapped bytes E8 FF A7 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 4B A8 01 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push eax
        ; Exact mapped bytes E8 E9 E9 FF FF: call 0x41211c
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        mov ecx, edi
        ; Exact mapped bytes E8 88 A8 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa8
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
