// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876C840 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5876c840_5876C840() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 02: jge 0x5876c84f
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x5876c85c
        __asm _emit 0xeb
        __asm _emit 0x0d
        imul eax, dword ptr [ebp + 8], 64h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2a4h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
