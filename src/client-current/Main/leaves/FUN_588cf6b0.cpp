// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CF6B0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_588cf6b0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 C8 0E 00 00: call 0x588d0580
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x588cf6f0
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588cf6f0
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 0cc0h]
        mov dl, byte ptr [ecx + 4]
        and dl, 1fh
        cmp dl, 9
        ; Exact mapped bytes 75 1B: jne 0x588cf6f4
        __asm _emit 0x75
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 7d2h
        ; Exact mapped bytes E8 07 C4 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 56 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x56
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 B5 06 00 00: call 0x588cfdb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        ret
    }
}
