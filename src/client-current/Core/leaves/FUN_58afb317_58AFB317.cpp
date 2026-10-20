// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58AFB317 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58afb317_58AFB317() {
    __asm {
        ; Exact mapped bytes 0F 82 9D 4A 46 00: jb 0x58f5fdba
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x9d
        __asm _emit 0x4a
        __asm _emit 0x46
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, eax
        stc
        cmp dh, al
        cmp ecx, edx
        ; Exact mapped bytes 0F 83 8D 4A 46 00: jae 0x58f5fdba
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0x46
        __asm _emit 0x00
        lea eax, [ecx + edi]
        btr esi, ebp
        mov cl, byte ptr [eax]
        mov esi, eax
        stc
        ; Exact mapped bytes 66 85 FD: test bp, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xfd
        test cl, cl
        ; Exact mapped bytes E9 CD 6F 21 00: jmp 0x58d1230f
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x6f
        __asm _emit 0x21
        __asm _emit 0x00
    }
}
