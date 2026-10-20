// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104680 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_10104680_10104680() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx + 14h]
        add esi, eax
        push edi
        cmp edx, esi
        ; Exact mapped bytes 7C 6A: jl 0x101046fc
        __asm _emit 0x7c
        __asm _emit 0x6a
        mov esi, dword ptr [ecx + 1ch]
        add esi, eax
        cmp edx, esi
        ; Exact mapped bytes 7D 61: jge 0x101046fc
        __asm _emit 0x7d
        __asm _emit 0x61
        mov edx, dword ptr [ecx + 8]
        mov esi, dword ptr [ecx + 18h]
        mov eax, dword ptr [esp + 10h]
        add esi, edx
        cmp eax, esi
        ; Exact mapped bytes 7C 51: jl 0x101046fc
        __asm _emit 0x7c
        __asm _emit 0x51
        mov esi, dword ptr [ecx + 20h]
        add esi, edx
        cmp eax, esi
        ; Exact mapped bytes 7D 48: jge 0x101046fc
        __asm _emit 0x7d
        __asm _emit 0x48
        sub eax, edx
        mov esi, dword ptr [ecx + 80h]
        cdq
        idiv dword ptr [ecx + 5ch]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 0C: jle 0x101046d2
        __asm _emit 0x7e
        __asm _emit 0x0c
        test esi, esi
        ; Exact mapped bytes 74 32: je 0x101046fc
        __asm _emit 0x74
        __asm _emit 0x32
        mov esi, dword ptr [esi + 14h]
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 7C F4: jl 0x101046c6
        __asm _emit 0x7c
        __asm _emit 0xf4
        test esi, esi
        ; Exact mapped bytes 74 26: je 0x101046fc
        __asm _emit 0x74
        __asm _emit 0x26
        cmp esi, dword ptr [ecx + 84h]
        ; Exact mapped bytes 74 12: je 0x101046f0
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov dword ptr [ecx + 84h], esi
        ; Exact mapped bytes FF 50 3C: call dword ptr [eax + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x3c
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        or eax, 0ffffffffh
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
