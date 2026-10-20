// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049C860 .. +0x26 bytes.
extern "C" __declspec(naked) void _AfxCheckError__YGXJ_Z_0049C860() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 19: jge 0x49c882
        __asm _emit 0x7d
        __asm _emit 0x19
        cmp dword ptr [ebp + 8], 8007000eh
        ; Exact mapped bytes 75 07: jne 0x49c879
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 35 35 03 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x49c882
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 08 0C 0B 00: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x0b
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
