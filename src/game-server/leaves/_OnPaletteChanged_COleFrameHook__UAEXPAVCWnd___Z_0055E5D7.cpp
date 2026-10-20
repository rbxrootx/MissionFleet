// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E5D7 .. +0x3B bytes.
extern "C" __declspec(naked) void _OnPaletteChanged_COleFrameHook__UAEXPAVCWnd___Z_0055E5D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 1E 15 00 00: call 0x55fb09
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x55e60c
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E D5 FD FF: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 311h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD D5 FD FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
