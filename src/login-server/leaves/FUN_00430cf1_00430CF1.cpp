// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430CF1 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00430cf1_00430CF1() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes E8 B9 4F 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 2D: jne 0x430d2d
        __asm _emit 0x75
        __asm _emit 0x2d
        push 435eb6h
        mov ecx, 44fb80h
        ; Exact mapped bytes E8 39 61 00 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 B5 12 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x430d2d
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes E8 AC 12 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 1ch], edi
        ; Exact mapped bytes 75 09: jne 0x430d2d
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x430d2d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 83 25 CC DC 44 00 00: and dword ptr [0x44dccc], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0xcc
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 B4 00 00 00: call 0x430df3
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
