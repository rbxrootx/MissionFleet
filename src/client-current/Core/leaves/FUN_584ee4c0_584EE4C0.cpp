// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EE4C0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_584ee4c0_584EE4C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 0f83e0fh
        cmp dword ptr [ebp + 8], 0f83e0fh
        ; Exact mapped bytes 76 06: jbe 0x584ee4e0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 91 9A F9 FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 108h
        mov esp, ebp
        pop ebp
        ret
    }
}
