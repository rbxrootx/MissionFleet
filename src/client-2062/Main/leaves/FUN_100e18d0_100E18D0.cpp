// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E18D0 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_100e18d0_100E18D0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor edx, edx
        push edi
        mov eax, dword ptr [esi + 13ch]
        mov ecx, dword ptr [eax + 88h]
        lea eax, [esi + 128h]
        cmp ecx, edx
        mov ecx, 4
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x100e1983
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edi + 50h], edx
        ; Exact mapped bytes 75 F5: jne 0x100e18f6
        __asm _emit 0x75
        __asm _emit 0xf5
        mov ecx, dword ptr [esi + 13ch]
        ; Exact mapped bytes E8 34 25 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        mov edi, eax
        ; Exact mapped bytes E8 27 25 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        add eax, 4
        cmp edi, eax
        ; Exact mapped bytes 7D 6E: jge 0x100e198e
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov ecx, dword ptr [esi + 13ch]
        cmp edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7D 60: jge 0x100e198e
        __asm _emit 0x7d
        __asm _emit 0x60
        push edi
        ; Exact mapped bytes E8 DC 24 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        push edi
        ; Exact mapped bytes E8 D0 24 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 140h]
        xor ebx, ebx
        mov edx, dword ptr [ecx + eax*4 + 9cch]
        mov ecx, dword ptr [esi + 13ch]
        ; Exact mapped bytes 66 8B 5A 06: mov bx, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0x06
        ; Exact mapped bytes E8 E2 24 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, edi
        sub ecx, eax
        inc edi
        mov edx, dword ptr [esi + ecx*4 + 128h]
        mov dword ptr [edx + 50h], ebx
        mov ecx, dword ptr [esi + 13ch]
        ; Exact mapped bytes E8 C8 24 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        add eax, 4
        cmp edi, eax
        ; Exact mapped bytes 7C A1: jl 0x100e1920
        __asm _emit 0x7c
        __asm _emit 0xa1
        pop edi
        pop esi
        pop ebx
        ret
        mov esi, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [esi + 50h], edx
        ; Exact mapped bytes 75 F5: jne 0x100e1983
        __asm _emit 0x75
        __asm _emit 0xf5
        pop edi
        pop esi
        pop ebx
        ret
    }
}
