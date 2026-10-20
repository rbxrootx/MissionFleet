// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588563C2 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_588563c2_588563C2() {
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
        ; Exact mapped bytes 74 11: je 0x588563f0
        __asm _emit 0x74
        __asm _emit 0x11
        lea eax, [ebx + 1]
        mov byte ptr [ebx], 2dh
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
        lea eax, [ebx + 1]
        mov dword ptr [ebp - 8], eax
        pop eax
        cmp eax, edx
        sbb al, al
        and al, 27h
        add al, 30h
        add al, dl
        inc esi
        mov byte ptr [ebx], al
        mov eax, dword ptr [ebp - 8]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x58856428
        __asm _emit 0x74
        __asm _emit 0x07
        mov ebx, eax
        cmp esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 72 D1: jb 0x588563f9
        __asm _emit 0x72
        __asm _emit 0xd1
        cmp esi, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp - 4]
        mov ebx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 16: jb 0x58856449
        __asm _emit 0x72
        __asm _emit 0x16
        mov byte ptr [ebx], 0
        ; Exact mapped bytes E8 34 C0 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 66 AB FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 13: jmp 0x5885645c
        __asm _emit 0xeb
        __asm _emit 0x13
        mov byte ptr [eax], 0
        mov al, byte ptr [esi]
        mov cl, byte ptr [edi]
        mov byte ptr [edi], al
        dec edi
        mov byte ptr [esi], cl
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 72 F2: jb 0x5885644c
        __asm _emit 0x72
        __asm _emit 0xf2
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
