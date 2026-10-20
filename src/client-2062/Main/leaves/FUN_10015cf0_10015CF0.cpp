// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015CF0 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_10015cf0_10015CF0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 74 66: je 0x10015d60
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 74 38: je 0x10015d3c
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 7E 0A: jle 0x10015d10
        __asm _emit 0x7e
        __asm _emit 0x0a
        sub ecx, eax
        cmp ecx, 12h
        ; Exact mapped bytes 7F 0F: jg 0x10015d1c
        __asm _emit 0x7f
        __asm _emit 0x0f
        inc eax
        ; Exact mapped bytes EB 0D: jmp 0x10015d1d
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, eax
        sub edx, ecx
        cmp edx, 12h
        ; Exact mapped bytes 7E 03: jle 0x10015d1c
        __asm _emit 0x7e
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 01: jmp 0x10015d1d
        __asm _emit 0xeb
        __asm _emit 0x01
        dec eax
        test eax, eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 7D 08: jge 0x10015d2c
        __asm _emit 0x7d
        __asm _emit 0x08
        add eax, 24h
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes EB 10: jmp 0x10015d3c
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp eax, 24h
        ; Exact mapped bytes 7C 0B: jl 0x10015d3c
        __asm _emit 0x7c
        __asm _emit 0x0b
        cdq
        mov ecx, 24h
        idiv ecx
        mov dword ptr [esi + 50h], edx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10015d60
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10015d5b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10015d43
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
