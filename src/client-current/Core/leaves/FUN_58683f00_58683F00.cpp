// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58683F00 .. +0x342 bytes.
extern "C" __declspec(naked) void FUN_58683f00_58683F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        sub edx, 1
        ; Exact mapped bytes 78 50: js 0x58683f77
        __asm _emit 0x78
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*8 + 158h]
        mov eax, dword ptr [edx + ecx]
        sub eax, 1
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 158h]
        mov dword ptr [ecx + edx], eax
        ; Exact mapped bytes EB 07: jmp 0x58683f7e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 158h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 158h]
        mov esi, 4
        shl esi, 0
        mov eax, dword ptr [ecx + eax]
        mov dword ptr [edx + esi], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 198h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 3a9e2b0dh
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 3a9e2b0dh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        sub edx, 1
        ; Exact mapped bytes 78 50: js 0x58684085
        __asm _emit 0x78
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*8 + 198h]
        mov eax, dword ptr [edx + ecx]
        sub eax, 1
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + edx], eax
        ; Exact mapped bytes EB 07: jmp 0x5868408c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov esi, 4
        shl esi, 0
        mov eax, dword ptr [ecx + eax]
        mov dword ptr [edx + esi], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 198h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 3a9e2b0dh
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 3a9e2b0dh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a48h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 158h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3D 70 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a48h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 40 97 E2 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x97
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 158h]
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 75 1C: jne 0x586841b8
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 138h], 10h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 0B 00 00: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586841d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 20: jge 0x586841f7
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB D1: jmp 0x586841c8
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a60h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 27 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x27
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B 82 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 07 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 50 10: and dx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x10
        movzx eax, dx
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 56 6F 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6f
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
