// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB050 .. +0x30 bytes.
extern "C" __declspec(naked) void _AfxGetExceptionContext__YAPAUAFX_EXCEPTION_CONTEXT__XZ_004FB050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 27 74 04 00: call 0x542490
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 10h
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 7C 23 5E 00: call dword ptr [0x5e237c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
