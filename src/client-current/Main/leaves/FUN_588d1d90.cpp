// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D1D90 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_588d1d90() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 E8 E7 FF FF: call 0x588d0580
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588d1ddb
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov eax, dword ptr [ecx + 9a4h]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x588d1ddf
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        mov edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, byte ptr [edx + 46h]
        ; Exact mapped bytes 72 04: jb 0x588d1dc4
        __asm _emit 0x72
        __asm _emit 0x04
        cmp al, 53h
        ; Exact mapped bytes 76 1B: jbe 0x588d1ddf
        __asm _emit 0x76
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 3bah
        ; Exact mapped bytes E8 1C 9D E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 2F E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2f
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 CA DF FF FF: call 0x588cfdb0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        ret
    }
}
