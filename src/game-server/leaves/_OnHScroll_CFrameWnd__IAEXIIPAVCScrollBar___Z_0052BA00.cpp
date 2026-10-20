// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052BA00 .. +0x43 bytes.
extern "C" __declspec(naked) void _OnHScroll_CFrameWnd__IAEXIIPAVCScrollBar___Z_0052BA00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 82 09 00 00: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x52ba3d
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes E8 0D 5E FC FF: call 0x4f182c
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 114h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C 01 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
