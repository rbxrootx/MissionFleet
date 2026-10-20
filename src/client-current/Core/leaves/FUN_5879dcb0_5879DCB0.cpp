// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879DCB0 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_5879dcb0_5879DCB0() {
    __asm {
        push esi
        push 0
        push 0
        push 0
        push dword ptr [esp + 20h]
        push dword ptr [esp + 20h]
        push dword ptr [esp + 20h]
        push dword ptr [esp + 20h]
        ; Exact mapped bytes E8 D4 1E 00 00: call 0x5879fba0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        add esp, 1ch
        test esi, esi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5879dd5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 78h], 200000h
        push 0
        push 0
        push 0
        push esi
        mov dword ptr [esi + 0c0h], 2000h
        mov dword ptr [esi + 0d4h], 1
        mov dword ptr [esi + 0c4h], 0ffffffffh
        mov dword ptr [esi + 0d0h], 8
        mov dword ptr [esi + 0cch], 0fh
        mov dword ptr [esi + 0c8h], 8
        mov dword ptr [esi + 0e8h], 0
        mov dword ptr [esi + 0d8h], 0ffffffffh
        mov dword ptr [esi + 0e4h], 8
        mov dword ptr [esi + 0e0h], 0fh
        mov dword ptr [esi + 0dch], 8
        ; Exact mapped bytes E8 16 8B 00 00: call 0x587a6870
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, esi
        pop esi
        ret
    }
}
