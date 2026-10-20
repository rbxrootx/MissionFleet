// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DDE3 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0055dde3_0055DDE3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        push 1e6h
        push 67b3b8h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 60 C4 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0xf7
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
