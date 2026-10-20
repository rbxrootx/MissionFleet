// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485CE0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_00485ce0_00485CE0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes E8 05 E7 FF FF: call 0x4843f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x485cf6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        ; Exact mapped bytes 66 81 3D 60 90 68 00 5F 03: cmp word ptr [0x689060], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 11: jb 0x485d12
        __asm _emit 0x72
        __asm _emit 0x11
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test al, 4
        ; Exact mapped bytes 74 04: je 0x485d12
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, 1
        pop esi
        ret
    }
}
