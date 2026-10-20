// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DD16 .. +0x21 bytes.
extern "C" __declspec(naked) void _GetDefBtnCode_COccManager__SAKPAVCWnd___Z_0041DD16() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 75 01: jne 0x41dd1f
        __asm _emit 0x75
        __asm _emit 0x01
        ret
        mov ecx, dword ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x41dd2b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A4 B9 FF FF: jmp 0x4196cf
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push eax
        ; Exact mapped bytes E8 9F FB FF FF: call 0x41d8d2
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 30h
        ret
    }
}
