// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D8D2 .. +0x2E bytes.
extern "C" __declspec(naked) void __AfxGetDlgCode__YGKPAVCWnd__PAUtagMSG___Z_0041D8D2() {
    __asm {
        mov edx, dword ptr [esp + 4]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x41d8de
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1F: jmp 0x41d8fd
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x41d8ea
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x41d8ed
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ecx + 8]
        push ecx
        push eax
        push 87h
        push dword ptr [edx + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
