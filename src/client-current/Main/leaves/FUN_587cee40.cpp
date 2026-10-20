// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CEE40 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_587cee40() {
    __asm {
        sub esp, 10h
        mov eax, dword ptr [esp + 1ch]
        push ebx
        mov ebx, dword ptr [eax]
        push esi
        or edx, 0ffffffffh
        push edi
        or esi, edx
        xor edi, edi
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 18h], esi
        test ebx, ebx
        ; Exact mapped bytes 0F 8E 8B 00 00 00: jle 0x587ceef2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [esp + 28h], eax
        push ebp
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 7E 56: jle 0x587ceecf
        __asm _emit 0x7e
        __asm _emit 0x56
        mov eax, dword ptr [edx + 4]
        mov ebp, dword ptr [edx]
        mov dword ptr [esp + 10h], eax
        mov edx, dword ptr [esp + 28h]
        mov ecx, ebx
        imul ecx, edi
        add ecx, esi
        lea eax, [edx + ecx*8]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        sub eax, dword ptr [esp + 10h]
        sub edx, ebp
        add eax, 300h
        mov ecx, eax
        imul ecx, eax
        mov eax, edx
        imul eax, edx
        add ecx, eax
        cmp ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        ; Exact mapped bytes 7D 0C: jge 0x587ceec2
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], esi
        mov edi, ebx
        mov esi, eax
        inc esi
        cmp esi, eax
        ; Exact mapped bytes 7C BB: jl 0x587cee82
        __asm _emit 0x7c
        __asm _emit 0xbb
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 24h]
        inc edi
        cmp edi, ebx
        ; Exact mapped bytes 7C 9F: jl 0x587cee73
        __asm _emit 0x7c
        __asm _emit 0x9f
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 1ch]
        pop ebp
        pop edi
        pop esi
        mov dword ptr [ecx + 9ch], eax
        mov dword ptr [ecx + 98h], edx
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        pop edi
        mov dword ptr [ecx + 9ch], esi
        pop esi
        mov dword ptr [ecx + 98h], edx
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
