// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10010B60 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_10010b60_10010B60() {
    __asm {
        push -1
        push 1016d1f8h
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
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 10175378h
        mov ecx, dword ptr [esi + 58h]
        mov dword ptr [esp + 10h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x10010b9f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 58h], 0
        mov ecx, dword ptr [esi + 5ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x10010bb3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5ch], 0
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 CE DF 0E 00: call 0x100feb90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
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
