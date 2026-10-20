// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58524D00 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58524d00_58524D00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 0e6c2b4h
        cmp dword ptr [ebp + 8], 0e6c2b4h
        ; Exact mapped bytes 76 06: jbe 0x58524d20
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 51 32 F6 FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x32
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 11ch
        mov esp, ebp
        pop ebp
        ret
    }
}
