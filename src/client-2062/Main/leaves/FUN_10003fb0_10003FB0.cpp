// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10003FB0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_10003fb0_10003FB0() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0d4h]
        push edi
        test esi, esi
        ; Exact mapped bytes 74 38: je 0x10003ff4
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 33: je 0x10003ff4
        __asm _emit 0x74
        __asm _emit 0x33
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 8B 81 E0 00 00 00: mov ax, word ptr [ecx + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 24: jle 0x10003ff4
        __asm _emit 0x7e
        __asm _emit 0x24
        mov edi, dword ptr [esp + 0ch]
        cmp dword ptr [esi], edi
        ; Exact mapped bytes 74 0D: je 0x10003fe5
        __asm _emit 0x74
        __asm _emit 0x0d
        inc edx
        add esi, 4
        cmp edx, eax
        ; Exact mapped bytes 7C F4: jl 0x10003fd4
        __asm _emit 0x7c
        __asm _emit 0xf4
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0d8h]
        mov ecx, dword ptr [esp + 10h]
        lea eax, [eax + edx*4]
        add dword ptr [eax], ecx
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
