// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561657 .. +0x3B bytes.
extern "C" __declspec(naked) void _OnPaletteChanged_COleFrameHook__UAEXPAVCWnd___Z_00561657() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 1E 15 00 00: call 0x562b89
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x56168c
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E 9F FC FF: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 311h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 9F FC FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
