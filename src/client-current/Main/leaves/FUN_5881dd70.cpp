// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881DD70 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_5881dd70() {
    __asm {
        push esi
        mov esi, ecx
        inc dword ptr [esi + 12d0h]
        cmp dword ptr [esi + 12d0h], 1
        ; Exact mapped bytes 75 3A: jne 0x5881ddbc
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 12d4h]
        mov dword ptr [esi + 12c8h], 0
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5881dda9
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 8A F0 15 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf0
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 12d4h], 0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 18h]
        push 2
        push 0ee49h
        push esi
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ret
        mov byte ptr [esi + 12d8h], 0
        pop esi
        ret
    }
}
