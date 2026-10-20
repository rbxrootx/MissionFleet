// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A3A6 .. +0x40 bytes.
extern "C" __declspec(naked) void _CanCloseFrame_COleServerDoc__UAEHPAVCFrameWnd___Z_0056A3A6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b8h], 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 13 FA FF: call 0x50b77e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x13
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x56a3db
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b8h], 0
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x56a3e0
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
