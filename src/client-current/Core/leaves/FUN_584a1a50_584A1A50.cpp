// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1A50 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_584a1a50_584A1A50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 0aaaaaaah
        cmp dword ptr [ebp + 8], 0aaaaaaah
        ; Exact mapped bytes 76 06: jbe 0x584a1a70
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 01 65 FE FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 18h
        mov esp, ebp
        pop ebp
        ret
    }
}
