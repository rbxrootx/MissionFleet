// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057963C .. +0x49 bytes.
extern "C" __declspec(naked) void _RevokeAll_COleObjectFactory__SGXXZ_0057963C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 FC BD FC FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 89 E6 FC FF: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        ; Exact mapped bytes E8 54 23 FD FF: call 0x54b9b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x57966a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x57967a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 73 FF FF FF: call 0x5795eb
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E7: jmp 0x579661
        __asm _emit 0xeb
        __asm _emit 0xe7
        push 0
        ; Exact mapped bytes E8 8B E7 FC FF: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
