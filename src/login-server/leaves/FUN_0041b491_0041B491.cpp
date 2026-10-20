// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B491 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_0041b491_0041B491() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor eax, eax
        xor edi, edi
        mov ecx, dword ptr [esi + 8]
        mov ebx, dword ptr [ecx + 4]
        test ebx, ebx
        ; Exact mapped bytes 76 1D: jbe 0x41b4c1
        __asm _emit 0x76
        __asm _emit 0x1d
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx]
        cmp byte ptr [ecx + edi*8 + 4], 0
        ; Exact mapped bytes 74 0C: je 0x41b4bc
        __asm _emit 0x74
        __asm _emit 0x0c
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 0D 00 00 00: call 0x41b4c5
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 05: jl 0x41b4c1
        __asm _emit 0x7c
        __asm _emit 0x05
        inc edi
        cmp edi, ebx
        ; Exact mapped bytes 72 E3: jb 0x41b4a4
        __asm _emit 0x72
        __asm _emit 0xe3
        pop edi
        pop esi
        pop ebx
        ret
    }
}
