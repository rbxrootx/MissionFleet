// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052CDC2 .. +0x2F bytes.
extern "C" __declspec(naked) void _GetCaretPos_CWnd__SG_AVCPoint__XZ_0052CDC2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 7E 50 00 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 70 BD 68 00: call dword ptr [0x68bd70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbd
        __asm _emit 0x68
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
