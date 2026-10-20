// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EEA50 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_100eea50_100EEA50() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 1058h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eea6c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1058h], edi
        mov ecx, dword ptr [esi + 1054h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eea82
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1054h], edi
        mov ecx, dword ptr [esi + 1050h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eea98
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1050h], edi
        mov ecx, dword ptr [esi + 5cdch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eeaae
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5cdch], edi
        mov ecx, dword ptr [esi + 0f1ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eeac4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f1ch], edi
        mov ecx, dword ptr [esi + 0f20h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eeada
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f20h], edi
        pop edi
        pop esi
        ret
    }
}
