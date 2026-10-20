// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589717B0 .. +0x2C bytes.
extern "C" __declspec(naked) void tidy_global() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push 0
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 40 FF FF FF: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 58a285b0h
        ; Exact mapped bytes E8 C5 FF FF FF: call 0x5897178f
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 25 B0 85 A2 58 00: and dword ptr [0x58a285b0], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0xb0
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        pop ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4E FF FF FF: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
    }
}
