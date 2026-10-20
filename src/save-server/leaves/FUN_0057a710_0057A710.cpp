// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057A710 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0057a710_0057A710() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 30bh
        push 67d108h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 36 FB F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xf5
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
