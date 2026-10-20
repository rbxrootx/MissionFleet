// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFD30 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_588cfd30() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 50h]
        ; Exact mapped bytes 66 83 BE 84 00 00 00 0B: cmp word ptr [esi + 0x84], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes 75 0C: jne 0x588cfd4b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 7E 38 02: cmp word ptr [esi + 0x38], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x38
        __asm _emit 0x02
        mov edi, 1
        ; Exact mapped bytes 74 05: je 0x588cfd50
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, 20h
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 7E 30: jle 0x588cfd86
        __asm _emit 0x7e
        __asm _emit 0x30
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 30h]
        add edx, 9a4h
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x588cfd7e
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, byte ptr [esi + 46h]
        ; Exact mapped bytes 72 15: jb 0x588cfd8e
        __asm _emit 0x72
        __asm _emit 0x15
        cmp al, byte ptr [esi + 47h]
        ; Exact mapped bytes 77 10: ja 0x588cfd8e
        __asm _emit 0x77
        __asm _emit 0x10
        inc ecx
        add edx, 4
        cmp ecx, edi
        ; Exact mapped bytes 7C DE: jl 0x588cfd64
        __asm _emit 0x7c
        __asm _emit 0xde
        pop edi
        mov eax, 1
        pop esi
        ret
        push 0
        push 0
        push 0
        push 3b8h
        ; Exact mapped bytes E8 52 BD E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B 4F E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}
