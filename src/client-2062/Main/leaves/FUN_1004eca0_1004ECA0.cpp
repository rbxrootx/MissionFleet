// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004ECA0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_1004eca0_1004ECA0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 00 01: mov word ptr [esi + 0x26], 0x100
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x01
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1004ecbb
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 E5 02 0B 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1004ecc8
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 38 02 0B 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 1b0h]
        push esi
        ; Exact mapped bytes E8 4C 00 00 00: call 0x1004ed20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
