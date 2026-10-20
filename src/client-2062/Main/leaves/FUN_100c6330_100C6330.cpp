// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C6330 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_100c6330_100C6330() {
    __asm {
        push -1
        push 101727b8h
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
        mov dword ptr [esi], 10176308h
        mov ecx, dword ptr [esi + 88h]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 74 0C: je 0x100c6370
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 88h], edi
        mov ecx, dword ptr [esi + 84h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100c6386
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 84h], edi
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100c639c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 98h], edi
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100c63b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 8ch], edi
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100c63c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 90h], edi
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100c63de
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 94h], edi
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 13 12 F8 FF: call 0x10047600
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
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
