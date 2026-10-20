// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042FA0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_10042fa0_10042FA0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 74 2B: je 0x10042fd5
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x10042fd5
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10042fce
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x10042fd5
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x10042fb8
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
