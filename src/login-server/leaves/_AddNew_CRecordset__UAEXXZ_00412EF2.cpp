// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412EF2 .. +0x5F bytes.
extern "C" __declspec(naked) void _AddNew_CRecordset__UAEXXZ_00412EF2() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        cmp dword ptr [esi + 0d0h], edi
        ; Exact mapped bytes 75 0B: jne 0x412f0b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [esi]
        push edi
        push 3f1h
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        test byte ptr [esi + 2dh], 2
        ; Exact mapped bytes 75 3D: jne 0x412f4e
        __asm _emit 0x75
        __asm _emit 0x3d
        cmp dword ptr [esi + 1ch], edi
        ; Exact mapped bytes 74 1B: je 0x412f31
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 76 16: jbe 0x412f31
        __asm _emit 0x76
        __asm _emit 0x16
        cmp dword ptr [esi + 94h], edi
        mov ecx, esi
        ; Exact mapped bytes 74 07: je 0x412f2c
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 6A 20 00 00: call 0x414f94
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 3F 20 00 00: call 0x414f70
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 3F 02 00 00: call 0x41317a
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 F0 01 00 00: call 0x413134
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 94h], 2
        pop edi
        pop esi
        ret
    }
}
