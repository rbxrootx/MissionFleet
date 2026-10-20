// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C8360 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_100c8360_100C8360() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 C5 C1 03 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 BA C1 03 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 AF C1 03 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes E8 A4 C1 03 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes E8 99 C1 03 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [ecx + 84h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100c83ab
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [eax + 8]
        test edx, edx
        ; Exact mapped bytes 74 3D: je 0x100c83e8
        __asm _emit 0x74
        __asm _emit 0x3d
        push ebx
        push edi
        mov edi, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 8B BA 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        mov ebx, eax
        ; Exact mapped bytes E8 D1 BA 03 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        sub eax, ebx
        mov ecx, dword ptr [esi + 8]
        imul eax, edi
        lea edx, [eax + ecx + 0b2h]
        mov ecx, dword ptr [esi + 90h]
        push edx
        ; Exact mapped bytes E8 E6 69 03 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, dword ptr [esi + 90h]
        pop edi
        pop ebx
        or byte ptr [esi + 24h], 1
        pop esi
        ret
        mov esi, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ret
    }
}
