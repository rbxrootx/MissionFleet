// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427762 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_00427762_00427762() {
    __asm {
        mov edx, dword ptr [esp + 8]
        ; Exact mapped bytes 8B 0D 5C AF 44 00: mov ecx, dword ptr [0x44af5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 8]
        cmp dword ptr [edx + 4], esi
        push edi
        mov eax, edx
        ; Exact mapped bytes 74 12: je 0x42778b
        __asm _emit 0x74
        __asm _emit 0x12
        lea edi, [ecx + ecx*2]
        lea edi, [edx + edi*4]
        add eax, 0ch
        cmp eax, edi
        ; Exact mapped bytes 73 05: jae 0x42778b
        __asm _emit 0x73
        __asm _emit 0x05
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 75 F4: jne 0x42777f
        __asm _emit 0x75
        __asm _emit 0xf4
        lea ecx, [ecx + ecx*2]
        lea ecx, [edx + ecx*4]
        cmp eax, ecx
        ; Exact mapped bytes 73 05: jae 0x42779a
        __asm _emit 0x73
        __asm _emit 0x05
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 74 02: je 0x42779c
        __asm _emit 0x74
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ret
    }
}
