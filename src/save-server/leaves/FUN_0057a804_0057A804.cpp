// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057A804 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0057a804_0057A804() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 32ch
        push 67d108h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 42 FA F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
