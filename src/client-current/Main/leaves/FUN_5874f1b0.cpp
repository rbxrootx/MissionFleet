// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874F1B0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5874f1b0() {
    __asm {
        push esi
        push 2
        push 3
        push 0ah
        mov esi, ecx
        ; Exact mapped bytes E8 52 C5 FF FF: call 0x5874b710
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874f1ea
        __asm _emit 0x74
        __asm _emit 0x28
        push 2
        push 5
        mov ecx, esi
        ; Exact mapped bytes E8 E3 C5 FF FF: call 0x5874b7b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x5874f1ea
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, esi
        ; Exact mapped bytes E8 38 C6 FF FF: call 0x5874b810
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 0E: je 0x5874f1ea
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, esi
        ; Exact mapped bytes E8 7D FF FF FF: call 0x5874f160
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        setne al
        pop esi
        ret
        xor al, al
        pop esi
        ret
    }
}
