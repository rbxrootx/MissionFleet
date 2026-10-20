// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DD570 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_100dd570_100DD570() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 14h]
        cmp cl, byte ptr [edi + 139dh]
        ; Exact mapped bytes 73 30: jae 0x100dd5b2
        __asm _emit 0x73
        __asm _emit 0x30
        xor edx, edx
        xor ebp, ebp
        mov dl, byte ptr [edi + 98h]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 7E 20: jle 0x100dd5b2
        __asm _emit 0x7e
        __asm _emit 0x20
        lea esi, [edi + 0f9ch]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 0D: je 0x100dd5aa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ebx, ecx
        and ebx, 0ffh
        cmp ebp, ebx
        ; Exact mapped bytes 74 12: je 0x100dd5bb
        __asm _emit 0x74
        __asm _emit 0x12
        inc ebp
        inc eax
        add esi, 4
        cmp eax, edx
        ; Exact mapped bytes 7C E6: jl 0x100dd598
        __asm _emit 0x7c
        __asm _emit 0xe6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + eax*4 + 0d9ch]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr [ecx + 60h]
        mov ecx, dword ptr [ecx + 0a4h]
        and eax, 0fh
        pop ebx
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add eax, ecx
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        lea eax, [eax + eax*4]
        lea eax, [eax*4 + 10181688h]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
