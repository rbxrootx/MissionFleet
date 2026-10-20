// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500F70 .. +0x27 bytes.
extern "C" __declspec(naked) void _DeleteDC_CDC__QAEHXZ_00500F70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 04: jne 0x500f84
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0F: jmp 0x500f93
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 FF FF FF: call 0x500f1d
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 60 20 5E 00: call dword ptr [0x5e2060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
