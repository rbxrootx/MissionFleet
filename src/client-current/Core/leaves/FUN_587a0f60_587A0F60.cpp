// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0F60 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_587a0f60_587A0F60() {
    __asm {
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 41: je 0x587a0fa8
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [esp + 8]
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x587a0fa8
        __asm _emit 0x74
        __asm _emit 0x39
        mov al, byte ptr [esp + 0ch]
        mov cl, byte ptr [esp + 14h]
        mov byte ptr [edx + 28h], al
        mov al, byte ptr [esp + 10h]
        mov byte ptr [edx + 29h], al
        mov al, byte ptr [esp + 18h]
        mov byte ptr [edx + 2ah], cl
        mov byte ptr [edx + 2bh], al
        test cl, cl
        ; Exact mapped bytes 74 12: je 0x587a0fa1
        __asm _emit 0x74
        __asm _emit 0x12
        push 588b85cch
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 93 E4 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ret
        or dword ptr [edx + 8], 20000h
        ret
    }
}
