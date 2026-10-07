// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 112 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749FA0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_58749fa0_segment_00() {
    __asm {
        mov edx, dword ptr [esp + 8]
        cmp edx, 8
        ; Exact mapped bytes 7D 64: jge 0x5874a00d
        __asm _emit 0x7d
        __asm _emit 0x64
        mov eax, dword ptr [ecx + edx*4 + 109f4h]
        xor eax, 0aaaaaaaah
        push esi
        mov esi, dword ptr [esp + 8]
        add eax, esi
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + edx*4 + 109f4h], eax
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 7D 0B: jge 0x58749fda
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov dword ptr [ecx + edx*4 + 109f4h], 0aaaaaaaah
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        movzx eax, byte ptr [eax + 354h]
        cmp edx, eax
        ; Exact mapped bytes 75 1F: jne 0x5874a00c
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ecx + 20df0h]
        mov edx, dword ptr [eax + 64h]
        add edx, esi
        test edx, edx
        ; Exact mapped bytes 7E 09: jle 0x5874a005
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, eax
        add dword ptr [ecx + 64h], esi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [eax + 64h], 0
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
