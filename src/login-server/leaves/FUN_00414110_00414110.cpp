// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414110 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_00414110_00414110() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        cmp dword ptr [esi + 88h], 2
        ; Exact mapped bytes 75 29: jne 0x414146
        __asm _emit 0x75
        __asm _emit 0x29
        test byte ptr [esi + 2dh], 8
        ; Exact mapped bytes 75 23: jne 0x414146
        __asm _emit 0x75
        __asm _emit 0x23
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 C7 D7 FF FF: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 F0: je 0x414123
        __asm _emit 0x74
        __asm _emit 0xf0
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [eax], 1
        and dword ptr [esi + 0e4h], 0
        ; Exact mapped bytes EB 37: jmp 0x41417d
        __asm _emit 0xeb
        __asm _emit 0x37
        push dword ptr [esi + 0b4h]
        push dword ptr [esp + 18h]
        push dword ptr [esp + 18h]
        push dword ptr [esp + 18h]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 76 84 01 00: call 0x42c5d6
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 DE: je 0x414146
        __asm _emit 0x74
        __asm _emit 0xde
        mov eax, dword ptr [esi + 0b4h]
        xor ecx, ecx
        ; Exact mapped bytes 66 83 38 01: cmp word ptr [eax], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x01
        sete cl
        mov dword ptr [esi + 0e4h], ecx
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B C7: mov ax, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc7
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
