// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104B20 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_10104b20_10104B20() {
    __asm {
        push -1
        push 10174998h
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
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 10176890h
        mov eax, dword ptr [esi + 1ch]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 74 5A: je 0x10104bab
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [esi + 2ch]
        mov ecx, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov eax, dword ptr [esi + 2ch]
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x10104b6b
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [esi + 2ch], edi
        mov eax, dword ptr [esi + 28h]
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x10104b7b
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [esi + 28h], edi
        mov eax, dword ptr [esi + 24h]
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x10104b8b
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [esi + 24h], edi
        mov eax, dword ptr [esi + 20h]
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x10104b9b
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [esi + 20h], edi
        mov eax, dword ptr [esi + 1ch]
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x10104bab
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [esi + 1ch], edi
        mov eax, dword ptr [esi + 18h]
        cmp eax, edi
        ; Exact mapped bytes 74 12: je 0x10104bc4
        __asm _emit 0x74
        __asm _emit 0x12
        push edi
        push eax
        ; Exact mapped bytes FF 15 EC 50 17 10: call dword ptr [0x101750ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 18h]
        push edx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 DD 31 06 00: call 0x10167db0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
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
        ret
    }
}
