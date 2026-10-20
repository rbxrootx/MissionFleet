// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579A49 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_00579a49_00579A49() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1a0h
        push 67d108h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FD 07 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        push 80004001h
        ; Exact mapped bytes E8 8D 24 FD FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0xfd
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
