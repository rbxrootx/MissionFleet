// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D730 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_1005d730_1005D730() {
    __asm {
        push esi
        push 0
        mov esi, ecx
        push 0
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 3
        ; Exact mapped bytes E8 6A 03 FC FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 80h]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop esi
        ret
    }
}
