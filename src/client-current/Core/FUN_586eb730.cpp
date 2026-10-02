// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EB730 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_586eb730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 118h], 0
        ; Exact mapped bytes 0F 8E 8E 00 00 00: jle 0x586eb7d7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 118h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 118h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 128h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 11ch]
        sub ecx, 0fh
        mov dword ptr [ebp - 8], ecx
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
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 82 EC 00 00 00: movss xmm0, dword ptr [edx + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 5C C1: subss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 11 80 EC 00 00 00: movss dword ptr [eax + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2C 88 EC 00 00 00: cvttss2si ecx, dword ptr [eax + 0xec]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6E 9F 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C FD FF FF: call 0x586eb530
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586eb804
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 B0 31 8B 58: movss xmm0, dword ptr [0x588b31b0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 81 EC 00 00 00: movss dword ptr [ecx + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 10h], eax
        push 0feh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D 9F 0C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
