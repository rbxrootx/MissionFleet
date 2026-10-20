// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C50E .. +0x3D bytes.
extern "C" __declspec(naked) void _GetActiveDocument_CFrameWnd__UAEPAVCDocument__XZ_0052C50E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 4bch
        push 5c8fcch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 36 EC FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 FE FF FF: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x52c545
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 54 01 00: call 0x5419c5
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x52c547
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
