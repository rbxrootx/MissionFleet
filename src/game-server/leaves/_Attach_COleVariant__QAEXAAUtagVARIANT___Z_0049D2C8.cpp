// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D2C8 .. +0x2F bytes.
extern "C" __declspec(naked) void _Attach_COleVariant__QAEXAAUtagVARIANT___Z_0049D2C8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 F3 0A 00: call 0x54c5e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 3A BD 00 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 02 00 00: mov word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
