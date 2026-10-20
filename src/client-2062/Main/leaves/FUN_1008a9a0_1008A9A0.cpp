// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008A9A0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_1008a9a0_1008A9A0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 218h]
        ; Exact mapped bytes E8 91 94 07 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008a9c7
        __asm _emit 0x74
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7E 47: jle 0x1008aa02
        __asm _emit 0x7e
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 218h]
        lea edi, [eax - 1]
        push edi
        ; Exact mapped bytes EB 17: jmp 0x1008a9de
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 218h]
        mov edx, dword ptr [ecx + 88h]
        sub edx, 5
        cmp eax, edx
        ; Exact mapped bytes 7D 28: jge 0x1008aa02
        __asm _emit 0x7d
        __asm _emit 0x28
        lea edi, [eax + 1]
        push edi
        ; Exact mapped bytes E8 7D 94 07 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 21ch]
        push edi
        ; Exact mapped bytes E8 71 94 07 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 220h]
        push edi
        ; Exact mapped bytes E8 65 94 07 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 8E FE FF FF: call 0x1008a890
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
