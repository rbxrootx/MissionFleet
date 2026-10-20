// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B2C8 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5883b2c8_5883B2C8() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        test edx, edx
        ; Exact mapped bytes 74 2B: je 0x5883b2fd
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ecx + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883b2dc
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x5883b2de
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 72 1B: jb 0x5883b2fd
        __asm _emit 0x72
        __asm _emit 0x1b
        cmp dword ptr [ecx + 14h], 10h
        push esi
        ; Exact mapped bytes 72 04: jb 0x5883b2ed
        __asm _emit 0x72
        __asm _emit 0x04
        mov esi, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x5883b2ef
        __asm _emit 0xeb
        __asm _emit 0x02
        mov esi, ecx
        mov eax, dword ptr [ecx + 10h]
        add eax, esi
        pop esi
        cmp eax, edx
        ; Exact mapped bytes 76 04: jbe 0x5883b2fd
        __asm _emit 0x76
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x5883b2ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
