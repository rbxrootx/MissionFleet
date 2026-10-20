// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501790 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58501790_58501790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 3ffffffh
        cmp dword ptr [ebp + 8], 3ffffffh
        ; Exact mapped bytes 76 06: jbe 0x585017b0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 C1 67 F8 FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        shl eax, 6
        mov esp, ebp
        pop ebp
        ret
    }
}
