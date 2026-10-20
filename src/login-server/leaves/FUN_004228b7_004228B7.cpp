// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004228B7 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_004228b7_004228B7() {
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
        cmp dword ptr [edx], esi
        push edi
        mov eax, edx
        ; Exact mapped bytes 74 11: je 0x4228de
        __asm _emit 0x74
        __asm _emit 0x11
        lea edi, [ecx + ecx*2]
        lea edi, [edx + edi*4]
        add eax, 0ch
        cmp eax, edi
        ; Exact mapped bytes 73 04: jae 0x4228de
        __asm _emit 0x73
        __asm _emit 0x04
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 75 F5: jne 0x4228d3
        __asm _emit 0x75
        __asm _emit 0xf5
        lea ecx, [ecx + ecx*2]
        lea ecx, [edx + ecx*4]
        cmp eax, ecx
        ; Exact mapped bytes 73 04: jae 0x4228ec
        __asm _emit 0x73
        __asm _emit 0x04
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 74 02: je 0x4228ee
        __asm _emit 0x74
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ret
    }
}
