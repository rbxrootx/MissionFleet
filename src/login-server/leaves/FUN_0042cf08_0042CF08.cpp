// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CF08 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0042cf08_0042CF08() {
    __asm {
        push esi
        mov esi, ecx
        push 0
        ; Exact mapped bytes E8 BD FF FF FF: call 0x42cecf
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 B4 FF FF FF: call 0x42cecf
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        mov ecx, esi
        ; Exact mapped bytes E8 AB FF FF FF: call 0x42cecf
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 B9 2A 00 00: call 0x42f9e4
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
