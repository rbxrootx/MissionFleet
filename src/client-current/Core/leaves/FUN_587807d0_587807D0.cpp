// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587807D0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_587807d0_587807D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 0a72f05h
        cmp dword ptr [ebp + 8], 0a72f05h
        ; Exact mapped bytes 76 06: jbe 0x587807f0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 81 77 D0 FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x77
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 188h
        mov esp, ebp
        pop ebp
        ret
    }
}
