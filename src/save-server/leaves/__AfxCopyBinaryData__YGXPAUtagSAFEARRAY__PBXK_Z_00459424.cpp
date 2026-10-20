// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00459424 .. +0x42 bytes.
extern "C" __declspec(naked) void __AfxCopyBinaryData__YGXPAUtagSAFEARRAY__PBXK_Z_00459424() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 64 BB 68 00: call dword ptr [0x68bb64]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 44 FA FF FF: call 0x458e80
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
        ; Exact mapped bytes E8 B3 BE 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 60 BB 68 00: call dword ptr [0x68bb60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 20 FA FF FF: call 0x458e80
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
