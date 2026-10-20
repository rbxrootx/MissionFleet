// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CAC40 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_585cac40_585CAC40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2e4h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 A0 1E 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa0
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2e4h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5B B2 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
