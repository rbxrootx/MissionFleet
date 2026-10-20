// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029E20 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_10029e20_10029E20() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 74 63: je 0x10029e8d
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [esi + 78h]
        mov eax, dword ptr [esi + 6ch]
        imul ecx, dword ptr [esi + 74h]
        lea edx, [eax + 1]
        cmp edx, ecx
        ; Exact mapped bytes 7D 04: jge 0x10029e3f
        __asm _emit 0x7d
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 7F 10: jg 0x10029e4f
        __asm _emit 0x7f
        __asm _emit 0x10
        mov eax, dword ptr [esi + 68h]
        mov ecx, dword ptr [esi + 70h]
        neg eax
        neg ecx
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 70h], ecx
        mov edx, dword ptr [esi + 70h]
        mov eax, dword ptr [esi + 68h]
        mov edi, dword ptr [esi + 6ch]
        mov ecx, dword ptr [esi + 58h]
        add edx, eax
        add edi, edx
        mov eax, edi
        mov dword ptr [esi + 6ch], edi
        add ecx, eax
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10029e8d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10029e88
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10029e70
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
