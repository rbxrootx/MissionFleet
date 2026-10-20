// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049CE04 .. +0x42 bytes.
extern "C" __declspec(naked) void __AfxCopyBinaryData__YGXPAUtagSAFEARRAY__PBXK_Z_0049CE04() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 98 24 5E 00: call dword ptr [0x5e2498]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 44 FA FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F3 C1 00 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 F4 24 5E 00: call dword ptr [0x5e24f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 20 FA FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
