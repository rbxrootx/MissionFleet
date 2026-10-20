// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856461 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_58856461_58856461() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov ecx, dword ptr [ebp + 8]
        xor eax, eax
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        push edi
        mov dword ptr [ebp - 4], ebx
        mov dword ptr [ebp - 8], eax
        cmp byte ptr [ebp + 18h], al
        ; Exact mapped bytes 74 14: je 0x58856492
        __asm _emit 0x74
        __asm _emit 0x14
        push 2dh
        pop eax
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        lea eax, [ebx + 2]
        mov dword ptr [ebp - 4], eax
        xor eax, eax
        inc eax
        neg ecx
        mov dword ptr [ebp - 8], eax
        mov ebx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ebx
        xor edx, edx
        mov eax, ecx
        div dword ptr [ebp + 14h]
        push 9
        mov ecx, eax
        mov edi, ebx
        lea eax, [ebx + 2]
        mov dword ptr [ebp - 8], eax
        pop eax
        cmp eax, edx
        sbb eax, eax
        and eax, 27h
        add eax, 30h
        ; Exact mapped bytes 66 03 C2: add ax, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc2
        inc esi
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x588564ce
        __asm _emit 0x74
        __asm _emit 0x07
        mov ebx, eax
        cmp esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 72 CD: jb 0x5885649b
        __asm _emit 0x72
        __asm _emit 0xcd
        cmp esi, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp - 4]
        mov ebx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 18: jb 0x588564f1
        __asm _emit 0x72
        __asm _emit 0x18
        xor eax, eax
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E8 8C BF 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 BE AA FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 1D: jmp 0x5885650e
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ecx, ecx
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        movzx ecx, word ptr [edi]
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        sub edi, 2
        ; Exact mapped bytes 66 89 0E: mov word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0e
        add esi, 2
        cmp esi, edi
        ; Exact mapped bytes 72 EA: jb 0x588564f6
        __asm _emit 0x72
        __asm _emit 0xea
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
