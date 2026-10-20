// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868776 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58868776_58868776() {
    __asm {
        push 8
        push 588ed410h
        ; Exact mapped bytes E8 DE 9F FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 90 B4 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 48h]
        ; Exact mapped bytes F0 FF 00: lock inc dword ptr [eax]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 12 00 00 00: call 0x588687bc
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
