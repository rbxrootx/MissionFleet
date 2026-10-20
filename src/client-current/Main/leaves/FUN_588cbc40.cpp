// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CBC40 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_588cbc40() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 38 49 00 00: call 0x588d0580
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588cbc85
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, esi
        ; Exact mapped bytes E8 5D 41 00 00: call 0x588cfdb0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x588cbc85
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx + 0cc0h]
        cmp byte ptr [edx + 35ch], 0
        ; Exact mapped bytes 75 1B: jne 0x588cbc89
        __asm _emit 0x75
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 2715h
        ; Exact mapped bytes E8 72 FE E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB 90 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x90
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ret
        mov eax, 1
        pop esi
        ret
    }
}
