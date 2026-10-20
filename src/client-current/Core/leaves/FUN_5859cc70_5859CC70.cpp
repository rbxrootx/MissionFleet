// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859CC70 .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_5859cc70_5859CC70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5859cc8b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 19h
        ; Exact mapped bytes 0F 8D 20 01 00 00: jge 0x5859cdb5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [edx + eax + 0fch]
        test ecx, ecx
        ; Exact mapped bytes 74 50: je 0x5859ccfe
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
        ; Exact mapped bytes E8 6D 2B F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2b
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
        ; Exact mapped bytes E8 48 2B F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2b
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x5859cdb0
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7C 14: jl 0x5859cd18
        __asm _emit 0x7c
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC B8 FF FF: call 0x585985e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x5859cd65
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 14h], edx
        push 2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 03 2B F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x2b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 18h], ecx
        push 2
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DE 2A F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2a
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4B: jmp 0x5859cdb0
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B6 2A F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 91 2A F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2a
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CD FE FF FF: jmp 0x5859cc82
        __asm _emit 0xe9
        __asm _emit 0xcd
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
