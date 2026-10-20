// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055AD63 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0055ad63_0055AD63() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        push 1e6h
        push 5cebe0h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E0 03 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0xfa
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
