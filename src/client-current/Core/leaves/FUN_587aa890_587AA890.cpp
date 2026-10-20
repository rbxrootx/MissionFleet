// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA890 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_587aa890_587AA890() {
    __asm {
        push esi
        xor esi, esi
        ; Exact mapped bytes E8 78 FB FF FF: call 0x587aa410
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 35 C8 5E 96 58: cmp dword ptr [0x58965ec8], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x587aa8c0
        __asm _emit 0x75
        __asm _emit 0x20
        push esi
        push esi
        push esi
        ; Exact mapped bytes FF 15 54 43 89 58: call dword ptr [0x58894354]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A3 C8 5E 96 58: mov dword ptr [0x58965ec8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x587aa8b9
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 09 03 00 00: call 0x587aabc0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587aa8c5
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov esi, 9
        ; Exact mapped bytes EB 05: jmp 0x587aa8c5
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 1
        xor ecx, ecx
        mov eax, 58965ec4h
        xchg dword ptr [eax], ecx
        mov eax, esi
        pop esi
        ret
    }
}
