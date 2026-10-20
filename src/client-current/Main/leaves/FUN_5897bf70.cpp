// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897BF70 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_5897bf70() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, edi
        ; Exact mapped bytes 74 75: je 0x5897bff9
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 13ch]
        mov eax, dword ptr [eax + 1ch]
        lea edx, [eax + eax*8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [esi + 0e4h], eax
        mov eax, dword ptr [ecx + edx*4]
        lea edx, [ecx + edx*4]
        cmp eax, edi
        ; Exact mapped bytes 7E 2D: jle 0x5897bfd0
        __asm _emit 0x7e
        __asm _emit 0x2d
        lea ebp, [esi + 0e8h]
        lea ebx, [edx + 4]
        mov ecx, dword ptr [ebx]
        add ebx, 4
        add ebp, 4
        lea eax, [ecx*8]
        sub eax, ecx
        inc edi
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [esi + 44h]
        lea ecx, [eax + ecx*4]
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [edx]
        cmp edi, eax
        ; Exact mapped bytes 7C DC: jl 0x5897bfac
        __asm _emit 0x7c
        __asm _emit 0xdc
        mov eax, dword ptr [edx + 14h]
        pop edi
        mov dword ptr [esi + 12ch], eax
        mov ecx, dword ptr [edx + 18h]
        mov dword ptr [esi + 130h], ecx
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [esi + 134h], eax
        mov ecx, dword ptr [edx + 20h]
        mov dword ptr [esi + 138h], ecx
        pop esi
        pop ebp
        pop ebx
        ret
        mov eax, dword ptr [esi + 3ch]
        mov ebx, 4
        cmp eax, ebx
        ; Exact mapped bytes 7E 1E: jle 0x5897c023
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [esi]
        push esi
        mov dword ptr [edx + 14h], 1ah
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 3ch]
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 1ch], ebx
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        add esp, 4
        mov eax, dword ptr [esi + 3ch]
        xor edx, edx
        cmp eax, edi
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes 7E 1C: jle 0x5897c04e
        __asm _emit 0x7e
        __asm _emit 0x1c
        xor ecx, ecx
        lea eax, [esi + 0e8h]
        mov ebp, dword ptr [esi + 44h]
        add ebp, ecx
        inc edx
        mov dword ptr [eax], ebp
        mov ebp, dword ptr [esi + 3ch]
        add eax, ebx
        add ecx, 54h
        cmp edx, ebp
        ; Exact mapped bytes 7C EC: jl 0x5897c03a
        __asm _emit 0x7c
        __asm _emit 0xec
        mov dword ptr [esi + 12ch], edi
        mov dword ptr [esi + 134h], edi
        mov dword ptr [esi + 138h], edi
        mov dword ptr [esi + 130h], 3fh
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
