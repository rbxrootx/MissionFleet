// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EB640 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_586eb640() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11ch]
        sub eax, 0fh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 118h], eax
        ; Exact mapped bytes 0F 8D 8A 00 00 00: jge 0x586eb6f8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 118h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 118h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 11ch]
        sub edx, 0fh
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes F3 0F 2A 45 F8: cvtsi2ss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes F3 0F 10 0D B4 31 8B 58: movss xmm1, dword ptr [0x588b31b4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 58 88 EC 00 00 00: addss xmm1, dword ptr [eax + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 11 89 EC 00 00 00: movss dword ptr [ecx + 0xec], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x89
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2C 91 EC 00 00 00: cvttss2si edx, dword ptr [ecx + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4D A0 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B FE FF FF: call 0x586eb530
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586eb725
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 B8 31 8B 58: movss xmm0, dword ptr [0x588b31b8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 82 EC 00 00 00: movss dword ptr [edx + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 10h], ecx
        push 213h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C A0 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
