// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10001490 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_10001490_10001490() {
    __asm {
        push -1
        push 1016ce0bh
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
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 10175210h
        mov edi, dword ptr [esi + 10h]
        mov eax, dword ptr [esi + 14h]
        xor ebx, ebx
        cmp edi, eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 74 16: je 0x100014db
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100014d1
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [esi + 14h]
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 EA: jne 0x100014c5
        __asm _emit 0x75
        __asm _emit 0xea
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 10h]
        mov eax, edx
        cmp eax, edx
        ; Exact mapped bytes 74 0E: je 0x100014f5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edi, dword ptr [eax]
        add eax, 4
        mov dword ptr [ecx], edi
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 75 F2: jne 0x100014e7
        __asm _emit 0x75
        __asm _emit 0xf2
        mov edx, dword ptr [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [esp + 0ch], edx
        push eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes E8 78 B2 16 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb2
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        add esp, 4
        mov dword ptr [esi + 10h], ebx
        mov dword ptr [esi + 14h], ebx
        mov dword ptr [esi + 18h], ebx
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
        add esp, 10h
        ret
    }
}
