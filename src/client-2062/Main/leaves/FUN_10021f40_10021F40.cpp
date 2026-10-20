// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021F40 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_10021f40_10021F40() {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp + 0ch]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, dword ptr [esp + 20h]
        sub esi, eax
        mov eax, dword ptr [esp + 1ch]
        sub eax, ebp
        push edi
        mov edi, 1
        mov ebp, 0
        lea ecx, [eax + eax*2]
        mov dword ptr [esp + 10h], esi
        mov ebx, ebp
        lea eax, [eax + ecx*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ecx, edx
        mov edx, esi
        mov dword ptr [esp + 14h], ecx
        imul ecx, ecx
        imul edx, esi
        add ecx, edx
        mov esi, edi
        mov edx, ecx
        ; Exact mapped bytes 74 32: je 0x10021fcd
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 74 01: je 0x10021faf
        __asm _emit 0x74
        __asm _emit 0x01
        inc ebx
        cmp ebx, 1
        ; Exact mapped bytes 7E 15: jle 0x10021fc9
        __asm _emit 0x7e
        __asm _emit 0x15
        lea esi, [esi + esi*4]
        xor ebx, ebx
        shl esi, 1
        cmp esi, 64h
        ; Exact mapped bytes 7C 09: jl 0x10021fc9
        __asm _emit 0x7c
        __asm _emit 0x09
        lea eax, [edi + edi*4]
        lea edi, [eax + eax*4]
        shl edi, 2
        cmp edx, ebp
        ; Exact mapped bytes 75 CE: jne 0x10021f9b
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, ecx
        mov dword ptr [esp + 24h], ebp
        cdq
        idiv edi
        mov dword ptr [esp + 1ch], 5f5e100h
        mov ecx, dword ptr [eax*4 + 101ba90ch]
        mov eax, 10624dd3h
        imul ecx, esi
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, 101ad160h
        mov edi, edx
        xor edx, edx
        mov ebx, edi
        mov esi, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        sub esi, edx
        sub eax, ebx
        mov edx, esi
        imul eax, eax
        imul edx, esi
        add eax, edx
        mov edx, dword ptr [esp + 1ch]
        cmp edx, eax
        ; Exact mapped bytes 7E 08: jle 0x1002202a
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 24h], ebp
        mov eax, dword ptr [ecx + 3840h]
        mov esi, dword ptr [ecx]
        imul eax, edi
        imul esi, edi
        mov edx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        add ecx, 28h
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov ebx, edx
        imul esi
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        inc ebp
        cmp ecx, 101b09a0h
        ; Exact mapped bytes 7C 9A: jl 0x10022004
        __asm _emit 0x7c
        __asm _emit 0x9a
        mov eax, dword ptr [esp + 24h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
