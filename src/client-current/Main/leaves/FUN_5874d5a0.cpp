// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874D5A0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5874d5a0() {
    __asm {
        push esi
        push 2
        push 3
        push 0ah
        mov esi, ecx
        ; Exact mapped bytes E8 62 E1 FF FF: call 0x5874b710
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5874d5b6
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 53 E2 FF FF: call 0x5874b810
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 F1: je 0x5874d5b2
        __asm _emit 0x74
        __asm _emit 0xf1
        mov ecx, esi
        ; Exact mapped bytes E8 08 FB 17 00: call 0x588cd0d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0x17
        __asm _emit 0x00
        test eax, eax
        setne al
        pop esi
        ret
    }
}
