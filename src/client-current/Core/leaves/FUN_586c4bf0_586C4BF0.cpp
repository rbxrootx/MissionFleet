// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C4BF0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_586c4bf0_586C4BF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 9D EB FF: call 0x5857e970
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9d
        __asm _emit 0xeb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 08 00 00: call 0x586c5470
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
