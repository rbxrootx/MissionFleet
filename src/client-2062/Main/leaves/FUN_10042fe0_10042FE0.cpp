// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042FE0 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_10042fe0_10042FE0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 74 76: je 0x10043060
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes E8 C1 00 00 00: call 0x100430b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 9A 01 00 00: call 0x10043190
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 93 02 00 00: call 0x10043290
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 BC 07 00 00: call 0x100437c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 130h]
        mov ecx, dword ptr [esi + 0a8h]
        lea eax, [eax + ecx + 32h]
        mov ecx, 0e10h
        cdq
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 7D 02: jge 0x10043022
        __asm _emit 0x7d
        __asm _emit 0x02
        add edx, ecx
        mov eax, 51eb851fh
        mov ecx, dword ptr [esi + 3ch]
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        test ecx, ecx
        mov dword ptr [esi + 0a0h], edx
        mov dword ptr [esi + 50h], edx
        ; Exact mapped bytes 74 1D: je 0x10043060
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x1004305b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10043043
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
