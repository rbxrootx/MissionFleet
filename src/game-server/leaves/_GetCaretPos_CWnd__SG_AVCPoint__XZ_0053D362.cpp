// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053D362 .. +0x2F bytes.
extern "C" __declspec(naked) void _GetCaretPos_CWnd__SG_AVCPoint__XZ_0053D362() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 EB 85 FF FF: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 A8 26 5E 00: call dword ptr [0x5e26a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
