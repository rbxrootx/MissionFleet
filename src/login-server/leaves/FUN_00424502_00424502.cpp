// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424502 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_00424502_00424502() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        movzx ecx, byte ptr [edx]
        push edi
        mov edi, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        mov eax, ebx
        sub eax, dword ptr [edi + 10h]
        sar eax, 0ch
        cmp ecx, dword ptr [ebp + 14h]
        lea edi, [edi + eax*8 + 18h]
        ; Exact mapped bytes 76 12: jbe 0x42453c
        __asm _emit 0x76
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 14h]
        sub ecx, eax
        mov byte ptr [edx], al
        add dword ptr [edi], ecx
        mov dword ptr [edi + 4], 0f1h
        ; Exact mapped bytes EB 60: jmp 0x42459c
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes 73 65: jae 0x4245a3
        __asm _emit 0x73
        __asm _emit 0x65
        mov eax, dword ptr [ebp + 14h]
        lea esi, [edx + eax]
        lea eax, [ebx + 0f8h]
        cmp eax, esi
        ; Exact mapped bytes 72 55: jb 0x4245a3
        __asm _emit 0x72
        __asm _emit 0x55
        lea eax, [ecx + edx]
        cmp eax, esi
        ; Exact mapped bytes 73 0A: jae 0x42455f
        __asm _emit 0x73
        __asm _emit 0x0a
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 03: jne 0x42455d
        __asm _emit 0x75
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB F4: jmp 0x424551
        __asm _emit 0xeb
        __asm _emit 0xf4
        cmp eax, esi
        ; Exact mapped bytes 75 42: jne 0x4245a3
        __asm _emit 0x75
        __asm _emit 0x42
        mov al, byte ptr [ebp + 14h]
        mov byte ptr [edx], al
        mov eax, dword ptr [ebx]
        cmp edx, eax
        ; Exact mapped bytes 77 2B: ja 0x424597
        __asm _emit 0x77
        __asm _emit 0x2b
        cmp esi, eax
        ; Exact mapped bytes 76 27: jbe 0x424597
        __asm _emit 0x76
        __asm _emit 0x27
        lea eax, [ebx + 0f8h]
        cmp esi, eax
        ; Exact mapped bytes 73 14: jae 0x42458e
        __asm _emit 0x73
        __asm _emit 0x14
        xor eax, eax
        mov dword ptr [ebx], esi
        cmp byte ptr [esi], al
        ; Exact mapped bytes 75 07: jne 0x424589
        __asm _emit 0x75
        __asm _emit 0x07
        inc eax
        cmp byte ptr [esi + eax], 0
        ; Exact mapped bytes 74 F9: je 0x424582
        __asm _emit 0x74
        __asm _emit 0xf9
        mov dword ptr [ebx + 4], eax
        ; Exact mapped bytes EB 09: jmp 0x424597
        __asm _emit 0xeb
        __asm _emit 0x09
        and dword ptr [ebx + 4], 0
        lea eax, [ebx + 8]
        mov dword ptr [ebx], eax
        sub ecx, dword ptr [ebp + 14h]
        add dword ptr [edi], ecx
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
