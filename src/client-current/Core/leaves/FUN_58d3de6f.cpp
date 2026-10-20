// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D3DE6F .. +0xC bytes.
extern "C" __declspec(naked) void FUN_58d3de6f() {
    __asm {
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 66 F7 D7: not di
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xd7
        ; Exact mapped bytes E9 02 9D DC FF: jmp 0x58b07b7d
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x9d
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
