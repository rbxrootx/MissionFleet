// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AEC0 .. +0x2B bytes.
extern "C" __declspec(naked) void _ProcessWndProcException_CWinThread__UAEJPAVCException__PBUtagMSG___Z_0041AEC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AD 63 11 00: call 0x531288
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x63
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 FB D8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
