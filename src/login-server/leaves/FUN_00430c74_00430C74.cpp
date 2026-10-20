// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430C74 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_00430c74_00430C74() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 37 50 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x430c92
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [eax + 1ch], esi
        ; Exact mapped bytes 75 0A: jne 0x430c92
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, 44fb88h
        ; Exact mapped bytes E8 09 22 00 00: call 0x432e9b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1C 50 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 2B: jne 0x430cc8
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes E8 29 13 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x430cc8
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 20 13 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 1ch], esi
        ; Exact mapped bytes 75 18: jne 0x430cc8
        __asm _emit 0x75
        __asm _emit 0x18
        push 435eb6h
        mov ecx, 44fb80h
        ; Exact mapped bytes E8 89 61 00 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x430cc8
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        ; Exact mapped bytes E8 23 D5 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 40000000h
        ; Exact mapped bytes 75 12: jne 0x430ce8
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        push 1
        push 0
        push 0
        push 15h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 3A FC FF FF: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 50 E5 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
