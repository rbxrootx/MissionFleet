// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868F190 .. +0x33B bytes.
extern "C" __declspec(naked) void FUN_5868f190_5868F190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 15ch]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        sub edx, 1
        ; Exact mapped bytes 78 50: js 0x5868f207
        __asm _emit 0x78
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 15ch]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*8 + 15ch]
        mov eax, dword ptr [edx + ecx]
        sub eax, 1
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 15ch]
        mov dword ptr [ecx + edx], eax
        ; Exact mapped bytes EB 07: jmp 0x5868f20e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 15ch]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 15ch]
        mov esi, 4
        shl esi, 0
        mov eax, dword ptr [ecx + eax]
        mov dword ptr [edx + esi], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 184h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 184h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        sub edx, 1
        ; Exact mapped bytes 78 50: js 0x5868f315
        __asm _emit 0x78
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 184h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*8 + 184h]
        mov eax, dword ptr [edx + ecx]
        sub eax, 1
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 184h]
        mov dword ptr [ecx + edx], eax
        ; Exact mapped bytes EB 07: jmp 0x5868f31c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov esi, 4
        shl esi, 0
        mov eax, dword ptr [ecx + eax]
        mov dword ptr [edx + esi], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 184h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 704h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 15ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AD BD 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 704h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 15ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B0 E4 E1 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 15ch]
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5868f4c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 148h], 10h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 19 00 00: call 0x58690d70
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 11ch]
        ; Exact mapped bytes 75 6A: jne 0x5868f4c4
        __asm _emit 0x75
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 72ch]
        mov dword ptr [ebp - 1ch], eax
        push 1ah
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 56 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x56
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DE 77 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x77
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 75 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x75
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 58 C8 DF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 11 75 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x75
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A CA DF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xca
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4D 2A 00 00: call 0x58691f10
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2a
        __asm _emit 0x00
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
