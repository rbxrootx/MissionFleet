// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CC00 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0041cc00_0041CC00() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x41cc10
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A7 07 0D 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 BD BB 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        pop ebp
        ret
    }
}
