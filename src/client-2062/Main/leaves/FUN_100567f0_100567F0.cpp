// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100567F0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_100567f0_100567F0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [esi], 10175bf0h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x10056810
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 7E 5F 11 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 10h], 0
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x10056820
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 67 5F 11 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
