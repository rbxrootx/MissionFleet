// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109040 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_10109040_10109040() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0f0h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x10109060
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 31 37 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0f0h], 0
        mov eax, dword ptr [esi + 0ach]
        imul eax, dword ptr [esi + 0a8h]
        lea eax, [eax + eax*4]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 27 37 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0f0h], eax
        pop esi
        ret
    }
}
