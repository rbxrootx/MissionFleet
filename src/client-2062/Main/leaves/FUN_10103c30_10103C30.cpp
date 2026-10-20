// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103C30 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_10103c30_10103C30() {
    __asm {
        push -1
        push 10174958h
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
        mov ebx, ecx
        push edi
        mov dword ptr [esp + 8], ebx
        mov dword ptr [ebx], 10176818h
        mov edi, dword ptr [ebx + 78h]
        mov dword ptr [esp + 14h], 0
        test edi, edi
        ; Exact mapped bytes 74 23: je 0x10103c86
        __asm _emit 0x74
        __asm _emit 0x23
        push esi
        mov esi, edi
        mov edi, dword ptr [edi + 14h]
        mov eax, dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes E8 12 8B 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x10103c81
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test edi, edi
        ; Exact mapped bytes 75 DF: jne 0x10103c64
        __asm _emit 0x75
        __asm _emit 0xdf
        pop esi
        mov ecx, ebx
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 3B EB FF FF: call 0x101027d0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ch]
        pop edi
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
