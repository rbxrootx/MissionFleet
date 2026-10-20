// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D0EB7 .. +0x36 bytes.
extern "C" __declspec(naked) void _PreTranslateMessage_CWnd__UAEHPAUtagMSG___Z_004D0EB7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 9E F7 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1034h], 0
        ; Exact mapped bytes 74 11: je 0x4d0ee5
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 34 10 00 00: call dword ptr [eax + 0x1034]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
