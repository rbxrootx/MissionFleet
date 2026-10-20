// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004243DE .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_004243de_004243DE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 10h]
        push ebx
        push esi
        mov esi, dword ptr [ecx + 4]
        push edi
        mov edi, dword ptr [ecx]
        lea ebx, [ecx + 0f8h]
        cmp esi, edx
        mov dword ptr [ebp - 4], edi
        mov eax, edi
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 72 21: jb 0x424423
        __asm _emit 0x72
        __asm _emit 0x21
        lea eax, [edi + edx]
        mov byte ptr [edi], dl
        cmp eax, ebx
        ; Exact mapped bytes 73 07: jae 0x424412
        __asm _emit 0x73
        __asm _emit 0x07
        add dword ptr [ecx], edx
        sub dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 09: jmp 0x42441b
        __asm _emit 0xeb
        __asm _emit 0x09
        and dword ptr [ecx + 4], 0
        lea eax, [ecx + 8]
        mov dword ptr [ecx], eax
        lea eax, [edi + 8]
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x4244f1
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, edi
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 74 02: je 0x42442c
        __asm _emit 0x74
        __asm _emit 0x02
        mov eax, esi
        lea esi, [eax + edx]
        cmp esi, ebx
        ; Exact mapped bytes 73 43: jae 0x424476
        __asm _emit 0x73
        __asm _emit 0x43
        mov bl, byte ptr [eax]
        test bl, bl
        ; Exact mapped bytes 75 30: jne 0x424469
        __asm _emit 0x75
        __asm _emit 0x30
        push 1
        lea ebx, [eax + 1]
        pop esi
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 75 04: jne 0x424448
        __asm _emit 0x75
        __asm _emit 0x04
        inc ebx
        inc esi
        ; Exact mapped bytes EB F7: jmp 0x42443f
        __asm _emit 0xeb
        __asm _emit 0xf7
        cmp esi, edx
        ; Exact mapped bytes 73 4E: jae 0x42449a
        __asm _emit 0x73
        __asm _emit 0x4e
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 05: jne 0x424456
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 4], esi
        ; Exact mapped bytes EB 0C: jmp 0x424462
        __asm _emit 0xeb
        __asm _emit 0x0c
        sub dword ptr [ebp + 0ch], esi
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 0F 82 99 00 00 00: jb 0x4244fb
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 4]
        mov eax, ebx
        ; Exact mapped bytes EB 05: jmp 0x42446e
        __asm _emit 0xeb
        __asm _emit 0x05
        movzx esi, bl
        add eax, esi
        lea esi, [eax + edx]
        cmp esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 BD: jb 0x424433
        __asm _emit 0x72
        __asm _emit 0xbd
        lea esi, [ecx + 8]
        cmp esi, edi
        ; Exact mapped bytes 73 7E: jae 0x4244fb
        __asm _emit 0x73
        __asm _emit 0x7e
        lea eax, [esi + edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 76: jae 0x4244fb
        __asm _emit 0x73
        __asm _emit 0x76
        mov al, byte ptr [esi]
        test al, al
        ; Exact mapped bytes 75 40: jne 0x4244cb
        __asm _emit 0x75
        __asm _emit 0x40
        push 1
        lea ebx, [esi + 1]
        pop eax
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 75 25: jne 0x4244bb
        __asm _emit 0x75
        __asm _emit 0x25
        inc ebx
        inc eax
        ; Exact mapped bytes EB F7: jmp 0x424491
        __asm _emit 0xeb
        __asm _emit 0xf7
        lea ebx, [eax + edx]
        cmp ebx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 09: jae 0x4244ab
        __asm _emit 0x73
        __asm _emit 0x09
        sub esi, edx
        mov dword ptr [ecx], ebx
        mov dword ptr [ecx + 4], esi
        ; Exact mapped bytes EB 09: jmp 0x4244b4
        __asm _emit 0xeb
        __asm _emit 0x09
        and dword ptr [ecx + 4], 0
        lea esi, [ecx + 8]
        mov dword ptr [ecx], esi
        mov byte ptr [eax], dl
        add eax, 8
        ; Exact mapped bytes EB 36: jmp 0x4244f1
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp eax, edx
        ; Exact mapped bytes 73 13: jae 0x4244d2
        __asm _emit 0x73
        __asm _emit 0x13
        sub dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 72 34: jb 0x4244fb
        __asm _emit 0x72
        __asm _emit 0x34
        mov esi, ebx
        ; Exact mapped bytes EB AE: jmp 0x424479
        __asm _emit 0xeb
        __asm _emit 0xae
        movzx eax, al
        add esi, eax
        ; Exact mapped bytes EB A7: jmp 0x424479
        __asm _emit 0xeb
        __asm _emit 0xa7
        lea ebx, [esi + edx]
        cmp ebx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 09: jae 0x4244e3
        __asm _emit 0x73
        __asm _emit 0x09
        sub eax, edx
        mov dword ptr [ecx], ebx
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4244ec
        __asm _emit 0xeb
        __asm _emit 0x09
        and dword ptr [ecx + 4], 0
        lea eax, [ecx + 8]
        mov dword ptr [ecx], eax
        mov byte ptr [esi], dl
        lea eax, [esi + 8]
        imul ecx, ecx, 0fh
        shl eax, 4
        sub eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x4244fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
