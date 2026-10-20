// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104790 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_10104790_10104790() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 7ch]
        test esi, esi
        ; Exact mapped bytes 74 27: je 0x101047bf
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ecx + 20h]
        mov edx, dword ptr [ecx + 18h]
        sub eax, edx
        cdq
        idiv dword ptr [ecx + 5ch]
        mov edx, esi
        dec eax
        test eax, eax
        ; Exact mapped bytes 7E 0E: jle 0x101047b9
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov esi, dword ptr [edx + 10h]
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x101047b9
        __asm _emit 0x74
        __asm _emit 0x07
        dec eax
        mov edx, esi
        test eax, eax
        ; Exact mapped bytes 7F F2: jg 0x101047ab
        __asm _emit 0x7f
        __asm _emit 0xf2
        mov dword ptr [ecx + 80h], edx
        pop esi
        ret
    }
}
