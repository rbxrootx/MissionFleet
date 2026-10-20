// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049BF0C .. +0x33 bytes.
extern "C" __declspec(naked) void _GetDefBtnCode_COccManager__SAKPAVCWnd___Z_0049BF0C() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x49bf19
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 24: jmp 0x49bf3d
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 0D: je 0x49bf2f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 38h]
        ; Exact mapped bytes E8 1D 68 FF FF: call 0x49274a
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x49bf3d
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 66 F9 FF FF: call 0x49b8a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 30h
        pop ebp
        ret
    }
}
