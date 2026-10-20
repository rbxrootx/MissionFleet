// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F0DA0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_100f0da0_100F0DA0() {
    __asm {
        mov edx, dword ptr [ecx + 4]
        cmp edx, 40h
        ; Exact mapped bytes 7C 46: jl 0x100f0dee
        __asm _emit 0x7c
        __asm _emit 0x46
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov eax, dword ptr [eax + 104e0h]
        mov esi, dword ptr [eax + 0b0h]
        imul esi, dword ptr [eax + 0a8h]
        sub esi, 96h
        cmp edx, esi
        pop esi
        ; Exact mapped bytes 7F 22: jg 0x100f0dee
        __asm _emit 0x7f
        __asm _emit 0x22
        mov ecx, dword ptr [ecx + 8]
        cmp ecx, 40h
        ; Exact mapped bytes 7C 1A: jl 0x100f0dee
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov edx, dword ptr [eax + 0b4h]
        imul edx, dword ptr [eax + 0ach]
        sub edx, 96h
        cmp ecx, edx
        ; Exact mapped bytes 7F 03: jg 0x100f0dee
        __asm _emit 0x7f
        __asm _emit 0x03
        xor eax, eax
        ret
        mov eax, 1
        ret
    }
}
