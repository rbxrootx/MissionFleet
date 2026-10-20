// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10071000 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_10071000_10071000() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dl, byte ptr [eax + ecx + 420h]
        test dl, dl
        sete dl
        mov byte ptr [eax + ecx + 420h], dl
        mov ecx, dword ptr [ecx + eax*4 + 21744h]
        test dl, dl
        ; Exact mapped bytes 74 08: je 0x1007102a
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes E8 59 5A 06 00: call 0x100d6a80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 61 5A 06 00: call 0x100d6a90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
