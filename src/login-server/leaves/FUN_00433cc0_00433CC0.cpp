// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433CC0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00433cc0_00433CC0() {
    __asm {
        mov eax, 43aa8ch
        ; Exact mapped bytes E8 3E B9 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43e628h
        and dword ptr [ebp - 4], 0
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0C: je 0x433cea
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 AC FF FF FF: call 0x433c8f
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 40 C0 43 00: call dword ptr [0x43c040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
