// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859CF10 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_5859cf10_5859CF10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5859cf2b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 19h
        ; Exact mapped bytes 0F 8D 29 01 00 00: jge 0x5859d05e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [edx + eax + 0fch]
        test ecx, ecx
        ; Exact mapped bytes 74 50: je 0x5859cf9e
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD 28 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 28 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x5859d059
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x5859cfc1
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 23 B6 FF FF: call 0x585985e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x5859d00e
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 14h], eax
        push 2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5A 28 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 18h], edx
        push 2
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 28 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4B: jmp 0x5859d059
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0D 28 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E8 27 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C4 FE FF FF: jmp 0x5859cf22
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
