// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534760 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58534760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        cdq
        mov ecx, 11ch
        idiv ecx
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 77 06: ja 0x5853478d
        __asm _emit 0x77
        __asm _emit 0x06
        ; Exact mapped bytes E8 A4 05 FC FF: call 0x584f4d30
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 11ch
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx]
        mov esp, ebp
        pop ebp
        ret 4
    }
}
