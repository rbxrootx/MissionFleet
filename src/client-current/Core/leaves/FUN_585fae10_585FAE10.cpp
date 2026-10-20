// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FAE10 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_585fae10_585FAE10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 8], ecx
        push 588ade80h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6E B2 E8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb2
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
