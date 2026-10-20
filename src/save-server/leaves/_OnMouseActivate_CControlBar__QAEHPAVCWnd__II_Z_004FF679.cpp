// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF679 .. +0x3C bytes.
extern "C" __declspec(naked) void _OnMouseActivate_CControlBar__QAEHPAVCWnd__II_Z_004FF679() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 61 01 00: call 0x51587a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4ff6a2
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA DF 02 00: call 0x52d69a
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4ff6af
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 36 FD FF: call 0x4d2cd1
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 3
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
