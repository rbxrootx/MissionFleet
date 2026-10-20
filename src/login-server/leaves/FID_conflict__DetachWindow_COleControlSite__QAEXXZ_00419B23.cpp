// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419B23 .. +0x4E bytes.
extern "C" __declspec(naked) void FID_conflict__DetachWindow_COleControlSite__QAEXXZ_00419B23() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 24h]
        and dword ptr [esi + 20h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 3E: je 0x419b6f
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 31: je 0x419b68
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ecx]
        push edi
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi + 24h]
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 A4 C4 43 00: call dword ptr [0x43c4a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x419b5f
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 74 08: je 0x419b5f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 24h]
        ; Exact mapped bytes E8 96 7D 01 00: call 0x4318f5
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 24h]
        ; Exact mapped bytes E8 EF 57 01 00: call 0x42f356
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        mov eax, dword ptr [esi + 24h]
        and dword ptr [eax + 38h], 0
        pop esi
        ret
    }
}
