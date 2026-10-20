// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411840 .. +0x2F bytes.
extern "C" __declspec(naked) void ___G_AFX_THREAD_STATE__UAEPAXI_Z_00411840() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 43d47ch
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x411859
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 BF C0 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x411869
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 AF C0 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc0
        __asm _emit 0x01
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
