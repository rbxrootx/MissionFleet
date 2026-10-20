// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EE4F0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_584ee4f0_584EE4F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 0dd67c8h
        cmp dword ptr [ebp + 8], 0dd67c8h
        ; Exact mapped bytes 76 06: jbe 0x584ee510
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 61 9A F9 FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 128h
        mov esp, ebp
        pop ebp
        ret
    }
}
