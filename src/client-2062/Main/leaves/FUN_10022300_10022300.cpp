// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022300 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_10022300_10022300() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0ch]
        push ebx
        cdq
        push ebp
        push esi
        sub eax, edx
        push edi
        mov edi, eax
        mov eax, dword ptr [esp + 20h]
        cdq
        sub eax, edx
        mov ebx, eax
        mov eax, 101ad160h
        sar edi, 1
        sar ebx, 1
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes EB 04: jmp 0x1002232e
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [eax + 3840h]
        mov eax, dword ptr [eax]
        imul eax, ebx
        imul ecx, ebx
        mov edx, eax
        mov eax, 0ef9db22dh
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov esi, edx
        imul ecx
        sar edx, 6
        mov ecx, edx
        lea eax, [esi + edi]
        shr ecx, 1fh
        add edx, ecx
        mov ecx, edi
        sub ecx, esi
        mov ebp, edx
        cmp eax, ecx
        ; Exact mapped bytes 7D 38: jge 0x100223a7
        __asm _emit 0x7d
        __asm _emit 0x38
        mov edx, 1
        sub edx, ebx
        mov dword ptr [esp + 10h], edx
        cmp ebp, edx
        ; Exact mapped bytes 7C 24: jl 0x100223a2
        __asm _emit 0x7c
        __asm _emit 0x24
        lea esi, [ebx - 1]
        cmp ebp, esi
        ; Exact mapped bytes 7F 1D: jg 0x100223a2
        __asm _emit 0x7f
        __asm _emit 0x1d
        mov edx, edi
        mov esi, dword ptr [esp + 18h]
        sub edx, ebp
        mov bl, byte ptr [esp + 24h]
        imul edx, edi
        lea edx, [eax + edx*2]
        mov byte ptr [edx + esi], bl
        mov edx, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 20h]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C D3: jl 0x1002237a
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov eax, dword ptr [esp + 1ch]
        add eax, 28h
        cmp eax, 101aed80h
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 8C 6D FF FF FF: jl 0x1002232a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
