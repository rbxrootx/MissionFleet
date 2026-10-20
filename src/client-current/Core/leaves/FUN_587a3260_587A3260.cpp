// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3260 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_587a3260_587A3260() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 4C: je 0x587a32b5
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        push 49454e44h
        push esi
        ; Exact mapped bytes E8 EA 0A 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 14h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 15h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 16h], al
        lea eax, [esp + 14h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 23h], cl
        ; Exact mapped bytes E8 0E 36 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        or dword ptr [esi + 74h], 10h
        pop esi
        ret
    }
}
