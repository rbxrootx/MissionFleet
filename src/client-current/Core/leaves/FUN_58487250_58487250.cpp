// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487250 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58487250_58487250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 3fffffffh
        cmp dword ptr [ebp + 8], 3fffffffh
        ; Exact mapped bytes 76 06: jbe 0x58487270
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 01 0D 00 00: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        mov esp, ebp
        pop ebp
        ret
    }
}
