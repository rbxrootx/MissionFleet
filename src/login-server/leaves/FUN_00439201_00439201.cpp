// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439201 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00439201_00439201() {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 42h], 0
        ; Exact mapped bytes 74 16: je 0x439220
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 20h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x43921c
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes FF 15 2C C6 43 00: call dword ptr [0x43c62c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [esi + 20h], 0
        and byte ptr [esi + 42h], 0
        pop esi
        ret
    }
}
