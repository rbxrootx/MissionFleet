// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101050C0 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_101050c0_101050C0() {
    __asm {
        push -1
        push 101749d8h
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
        mov dword ptr [esi], 101768a8h
        mov ecx, dword ptr [esi + 98h]
        mov dword ptr [esp + 10h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10105105
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 98h], 0
        mov eax, dword ptr [esi + 80h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x10105122
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 6F 76 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 80h], 0
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 9F D6 FF FF: call 0x101027d0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
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
