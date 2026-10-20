// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587563B0 .. +0x1A9 bytes.
extern "C" __declspec(naked) void FUN_587563b0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 9ch]
        cmp eax, 64h
        push edi
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x58756447
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp dword ptr [esi + 0a8h], edi
        ; Exact mapped bytes 0F 8E 4E 01 00 00: jle 0x58756521
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1b4h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 60h]
        mov eax, dword ptr [esi + 8ch]
        imul ebx, ebx, 3e8h
        add dword ptr [esi + 6ch], eax
        mov eax, dword ptr [esi + 90h]
        add dword ptr [esi + 0a4h], eax
        mov eax, dword ptr [esi + 0a4h]
        mov edx, dword ptr [esi + 6ch]
        add ebx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [ecx - 4], eax
        mov edx, dword ptr [esi + 70h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx], eax
        inc edi
        add ecx, 8
        cmp edi, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 7C 9E: jl 0x587563e0
        __asm _emit 0x7c
        __asm _emit 0x9e
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x58756521
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 64: jne 0x587564ad
        __asm _emit 0x75
        __asm _emit 0x64
        xor edi, edi
        cmp dword ptr [esi + 0a8h], edi
        ; Exact mapped bytes 0F 8E CA 00 00 00: jle 0x58756521
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1b4h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8ch]
        add dword ptr [esi + 6ch], edx
        mov eax, dword ptr [esi + 90h]
        add dword ptr [esi + 70h], eax
        mov edx, dword ptr [esi + 6ch]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx - 4], eax
        mov edx, dword ptr [esi + 70h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx], eax
        inc edi
        add ecx, 8
        cmp edi, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 7C B5: jl 0x58756460
        __asm _emit 0x7c
        __asm _emit 0xb5
        ; Exact mapped bytes EB 74: jmp 0x58756521
        __asm _emit 0xeb
        __asm _emit 0x74
        cmp eax, 64h
        ; Exact mapped bytes 7E 6F: jle 0x58756521
        __asm _emit 0x7e
        __asm _emit 0x6f
        xor edi, edi
        cmp dword ptr [esi + 0a8h], edi
        ; Exact mapped bytes 7E 65: jle 0x58756521
        __asm _emit 0x7e
        __asm _emit 0x65
        lea ecx, [esi + 1b4h]
        mov edx, dword ptr [esi + 8ch]
        add dword ptr [esi + 0a4h], edx
        mov edx, dword ptr [esi + 90h]
        add dword ptr [esi + 70h], edx
        mov edx, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 0a4h]
        imul edx, edx, 3e8h
        add edx, eax
        mov dword ptr [esi + 6ch], edx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx - 4], eax
        mov edx, dword ptr [esi + 70h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx], eax
        inc edi
        add ecx, 8
        cmp edi, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 7C A1: jl 0x587564c2
        __asm _emit 0x7c
        __asm _emit 0xa1
        xor ebp, ebp
        cmp dword ptr [esi + 0a8h], ebp
        ; Exact mapped bytes 7E 29: jle 0x58756554
        __asm _emit 0x7e
        __asm _emit 0x29
        lea ebx, [esi + 0b0h]
        lea edi, [esi + 1b0h]
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [ebx]
        push edx
        ; Exact mapped bytes E8 4B CD 1A 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x00
        inc ebp
        add edi, 8
        add ebx, 4
        cmp ebp, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 7C E3: jl 0x58756537
        __asm _emit 0x7c
        __asm _emit 0xe3
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
