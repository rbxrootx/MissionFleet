// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570C00 .. +0x53 bytes.
extern "C" __declspec(naked) void __0_AFX_OLESYMBOLTABLE__QAE_H_Z_00570C00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 40h
        push 67bd60h
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 B7 B4 F5 FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 82 4C EF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x4c
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
