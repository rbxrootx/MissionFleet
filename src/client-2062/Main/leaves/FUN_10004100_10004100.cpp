// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10004100 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_10004100_10004100() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        push ebp
        push esi
        lea esi, [edx + edx*2]
        push edi
        xor eax, eax
        lea esi, [edx + esi*4]
        mov edi, dword ptr [ecx + esi*4 + 64h]
        lea esi, [ecx + esi*4]
        test edi, edi
        ; Exact mapped bytes 7E 12: jle 0x1000412d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [esi + 60h]
        mov ebx, dword ptr [ebp]
        cmp ebx, eax
        ; Exact mapped bytes 76 02: jbe 0x10004127
        __asm _emit 0x76
        __asm _emit 0x02
        mov eax, ebx
        add ebp, 4
        dec edi
        ; Exact mapped bytes 75 F1: jne 0x1000411e
        __asm _emit 0x75
        __asm _emit 0xf1
        lea edi, [edx + edx*2 + 6]
        lea edx, [edx + edi*4 + 2]
        mov dword ptr [ecx + edx*4], eax
        lea ecx, [eax + eax*8]
        mov eax, 0cccccccdh
        mul ecx
        mov eax, dword ptr [esi + 6ch]
        shr edx, 3
        cmp eax, edx
        ; Exact mapped bytes 76 27: jbe 0x10004173
        __asm _emit 0x76
        __asm _emit 0x27
        mov edi, dword ptr [esi + 64h]
        xor eax, eax
        test edi, edi
        ; Exact mapped bytes 7E 1E: jle 0x10004173
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ebx, dword ptr [esi + 60h]
        mov ecx, ebx
        cmp dword ptr [ecx], edx
        ; Exact mapped bytes 73 0F: jae 0x1000416d
        __asm _emit 0x73
        __asm _emit 0x0f
        inc eax
        add ecx, 4
        cmp eax, edi
        ; Exact mapped bytes 7C F4: jl 0x1000415a
        __asm _emit 0x7c
        __asm _emit 0xf4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebx + eax*4]
        mov dword ptr [esi + 6ch], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
