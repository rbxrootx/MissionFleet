// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA150 .. +0x30 bytes.
extern "C" __declspec(naked) void _AfxGetExceptionContext__YAPAUAFX_EXCEPTION_CONTEXT__XZ_004DA150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, 686d24h
        ; Exact mapped bytes E8 17 35 06 00: call 0x53d680
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        add eax, 10h
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B8 B9 68 00: call dword ptr [0x68b9b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
