// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A6630 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_588a6630() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 158h]
        mov dword ptr [eax + 50h], 0
        mov dword ptr [eax + 54h], 0ffffff38h
        mov ecx, dword ptr [esi + 158h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor ecx, ecx
        cmp dword ptr [esi + 98h], ecx
        ; Exact mapped bytes 7E 1F: jle 0x588a667d
        __asm _emit 0x7e
        __asm _emit 0x1f
        lea edx, [esi + 15ch]
        push edi
        mov eax, dword ptr [edx]
        mov edi, 0fff0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        inc ecx
        add edx, 4
        cmp ecx, dword ptr [esi + 98h]
        ; Exact mapped bytes 7C E9: jl 0x588a6665
        __asm _emit 0x7c
        __asm _emit 0xe9
        pop edi
        pop esi
        ret
    }
}
