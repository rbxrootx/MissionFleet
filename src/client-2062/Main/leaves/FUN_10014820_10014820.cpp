// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014820 .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_10014820_10014820() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 9ch]
        cmp eax, 64h
        ; Exact mapped bytes 0F 8D 8A 00 00 00: jge 0x100148bf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 0F 8E 78 01 00 00: jle 0x100149bd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1b4h]
        mov eax, dword ptr [esi + 8ch]
        mov ebp, dword ptr [esi + 6ch]
        mov ebx, dword ptr [esi + 0a4h]
        add ebp, eax
        mov eax, dword ptr [esi + 90h]
        mov edx, ebp
        add ebx, eax
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [esi + 6ch], ebp
        mov dword ptr [esi + 0a4h], ebx
        lea eax, [eax + eax*4]
        add ecx, 8
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [ebx + eax*8]
        mov dword ptr [esi + 70h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [ecx - 0ch], edx
        mov edx, dword ptr [esi + 70h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        inc edi
        mov dword ptr [ecx - 8], edx
        mov eax, dword ptr [esi + 0a8h]
        cmp edi, eax
        ; Exact mapped bytes 7C 91: jl 0x1001484b
        __asm _emit 0x7c
        __asm _emit 0x91
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x100149bd
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 72: jne 0x10014933
        __asm _emit 0x75
        __asm _emit 0x72
        mov eax, dword ptr [esi + 0a8h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 0F 8E EC 00 00 00: jle 0x100149bd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1b4h]
        mov edx, dword ptr [esi + 8ch]
        mov ebp, dword ptr [esi + 6ch]
        mov eax, dword ptr [esi + 90h]
        mov ebx, dword ptr [esi + 70h]
        add ebp, edx
        add ebx, eax
        mov edx, ebp
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        mov dword ptr [esi + 6ch], ebp
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [ecx - 4], edx
        mov edx, dword ptr [esi + 70h]
        mov eax, 10624dd3h
        add ecx, 8
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        inc edi
        mov dword ptr [ecx - 8], edx
        mov eax, dword ptr [esi + 0a8h]
        cmp edi, eax
        ; Exact mapped bytes 7C A9: jl 0x100148d7
        __asm _emit 0x7c
        __asm _emit 0xa9
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x100149bd
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 64h
        ; Exact mapped bytes 0F 8E 81 00 00 00: jle 0x100149bd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 75: jle 0x100149bd
        __asm _emit 0x7e
        __asm _emit 0x75
        lea ecx, [esi + 1b4h]
        mov eax, dword ptr [esi + 90h]
        mov ebx, dword ptr [esi + 70h]
        mov edx, dword ptr [esi + 8ch]
        mov ebp, dword ptr [esi + 0a4h]
        add ebx, eax
        mov eax, dword ptr [esi + 5ch]
        add ebp, edx
        mov dword ptr [esi + 70h], ebx
        lea eax, [eax + eax*4]
        mov edx, ebp
        mov dword ptr [esi + 0a4h], ebp
        add ecx, 8
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea edx, [edx + eax*8]
        mov eax, 10624dd3h
        mov dword ptr [esi + 6ch], edx
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [ecx - 0ch], edx
        mov edx, dword ptr [esi + 70h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        inc edi
        mov dword ptr [ecx - 8], edx
        mov eax, dword ptr [esi + 0a8h]
        cmp edi, eax
        ; Exact mapped bytes 7C 91: jl 0x1001494e
        __asm _emit 0x7c
        __asm _emit 0x91
        mov eax, dword ptr [esi + 0a8h]
        xor ebp, ebp
        test eax, eax
        ; Exact mapped bytes 7E 2B: jle 0x100149f4
        __asm _emit 0x7e
        __asm _emit 0x2b
        lea ebx, [esi + 0b0h]
        lea edi, [esi + 1b0h]
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [ebx]
        push edx
        ; Exact mapped bytes E8 ED A2 0E 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        inc ebp
        add edi, 8
        add ebx, 4
        cmp ebp, eax
        ; Exact mapped bytes 7C E1: jl 0x100149d5
        __asm _emit 0x7c
        __asm _emit 0xe1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
