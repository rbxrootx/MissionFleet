// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874E310 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5874e310() {
    __asm {
        push esi
        mov esi, ecx
        movzx eax, byte ptr [esi + 18bh]
        movzx ecx, byte ptr [esi + 18ah]
        push 2
        shr eax, 1
        shr ecx, 1
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E0 D3 FF FF: call 0x5874b710
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5874e338
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        pop esi
        ret
        movzx edx, byte ptr [esi + 18ch]
        push 2
        shr edx, 1
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 65 D4 FF FF: call 0x5874b7b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 E5: je 0x5874e334
        __asm _emit 0x74
        __asm _emit 0xe5
        mov ecx, esi
        ; Exact mapped bytes E8 BA D4 FF FF: call 0x5874b810
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        setne al
        pop esi
        ret
    }
}
