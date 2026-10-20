// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E5EF .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5883e5ef_5883E5EF() {
    __asm {
        xor edx, edx
        push esi
        push 8
        mov eax, edx
        pop esi
        test al, 1
        ; Exact mapped bytes 74 09: je 0x5883e604
        __asm _emit 0x74
        __asm _emit 0x09
        shr eax, 1
        xor eax, 0edb88320h
        ; Exact mapped bytes EB 02: jmp 0x5883e606
        __asm _emit 0xeb
        __asm _emit 0x02
        shr eax, 1
        dec esi
        test esi, esi
        ; Exact mapped bytes 7F EC: jg 0x5883e5f7
        __asm _emit 0x7f
        __asm _emit 0xec
        mov dword ptr [ecx + edx*4], eax
        inc edx
        cmp edx, 100h
        ; Exact mapped bytes 7C DB: jl 0x5883e5f2
        __asm _emit 0x7c
        __asm _emit 0xdb
        mov eax, ecx
        pop esi
        ret
    }
}
