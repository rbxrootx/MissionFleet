// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58491780 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58491780_58491780() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 1fffffffh
        cmp dword ptr [ebp + 8], 1fffffffh
        ; Exact mapped bytes 76 06: jbe 0x584917a0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 D1 67 FF FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        shl eax, 3
        mov esp, ebp
        pop ebp
        ret
    }
}
