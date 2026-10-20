// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BA9B0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_584ba9b0_584BA9B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 1fe01fh
        cmp dword ptr [ebp + 8], 1fe01fh
        ; Exact mapped bytes 76 06: jbe 0x584ba9d0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 A1 D5 FC FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 808h
        mov esp, ebp
        pop ebp
        ret
    }
}
