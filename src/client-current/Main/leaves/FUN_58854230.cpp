// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58854230 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_58854230() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [esp + 4]
        push esi
        movzx esi, byte ptr [eax + edx + 1fch]
        push edi
        movzx edi, byte ptr [eax + edx + 21ch]
        mov eax, dword ptr [eax + edx*4 + 0e8ch]
        lea esi, [edi + esi*2]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x5885427e
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 66 0F B6 10: movzx dx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x10
        movzx eax, dx
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 17: jne 0x58854280
        __asm _emit 0x75
        __asm _emit 0x17
        xor eax, eax
        lea eax, [eax + esi*2]
        mov ecx, dword ptr [ecx + eax*4 + 7ch]
        movzx eax, word ptr [ecx + 0a4h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        setne dl
        pop edi
        inc edx
        mov eax, edx
        lea eax, [eax + esi*2]
        mov ecx, dword ptr [ecx + eax*4 + 7ch]
        movzx eax, word ptr [ecx + 0a4h]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
