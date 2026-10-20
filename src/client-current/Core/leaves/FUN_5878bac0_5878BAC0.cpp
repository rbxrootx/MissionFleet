// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878BAC0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5878bac0_5878BAC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 0fffffffh
        cmp dword ptr [ebp + 8], 0fffffffh
        ; Exact mapped bytes 76 06: jbe 0x5878bae0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 91 C4 CF FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        shl eax, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
