// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867020 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_58867020_58867020() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 10h]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x58867030
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        push esi
        sub edx, 1
        ; Exact mapped bytes 74 1C: je 0x58867058
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        movzx esi, word ptr [eax]
        ; Exact mapped bytes 66 85 F6: test si, si
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 10: je 0x58867058
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 31: cmp si, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x31
        ; Exact mapped bytes 75 0B: jne 0x58867058
        __asm _emit 0x75
        __asm _emit 0x0b
        add eax, 2
        add ecx, 2
        sub edx, 1
        ; Exact mapped bytes 75 E8: jne 0x58867040
        __asm _emit 0x75
        __asm _emit 0xe8
        movzx eax, word ptr [eax]
        movzx ecx, word ptr [ecx]
        sub eax, ecx
        pop esi
        pop ebp
        ret
    }
}
