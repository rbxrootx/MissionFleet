// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C792 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0056c792_0056C792() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 14bh
        push 67d450h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B4 DA F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xda
        __asm _emit 0xf6
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
