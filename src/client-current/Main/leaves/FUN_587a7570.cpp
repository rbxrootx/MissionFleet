// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7570 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_587a7570() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        push esi
        xor esi, esi
        cmp dword ptr [edx + 141ch], esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 7E 46: jle 0x587a75cc
        __asm _emit 0x7e
        __asm _emit 0x46
        xor eax, eax
        mov ecx, dword ptr [edi + eax*4 + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x587a75b7
        __asm _emit 0x74
        __asm _emit 0x27
        cmp byte ptr [eax + edx + 1fch], 0
        ; Exact mapped bytes 75 1D: jne 0x587a75b7
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [edx + eax*4 + 0e8ch]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x587a75b7
        __asm _emit 0x74
        __asm _emit 0x12
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 09: jne 0x587a75b7
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes E8 3D 96 00 00: call 0x587b0bf0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x587a75ce
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        inc esi
        movzx eax, si
        cmp eax, dword ptr [edx + 141ch]
        ; Exact mapped bytes 7C BC: jl 0x587a7588
        __asm _emit 0x7c
        __asm _emit 0xbc
        xor eax, eax
        pop edi
        pop esi
        ret
    }
}
