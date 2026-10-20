// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004214E3 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_004214e3_004214E3() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 14h], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 74 0B: je 0x4214fd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov esi, dword ptr [ebp + 8]
        mov byte ptr [ecx], 2dh
        inc ecx
        neg esi
        ; Exact mapped bytes EB 03: jmp 0x421500
        __asm _emit 0xeb
        __asm _emit 0x03
        mov esi, dword ptr [ebp + 8]
        mov edi, ecx
        mov eax, esi
        xor edx, edx
        div dword ptr [ebp + 10h]
        mov eax, esi
        mov ebx, edx
        xor edx, edx
        div dword ptr [ebp + 10h]
        cmp ebx, 9
        mov esi, eax
        ; Exact mapped bytes 76 05: jbe 0x42151e
        __asm _emit 0x76
        __asm _emit 0x05
        add bl, 57h
        ; Exact mapped bytes EB 03: jmp 0x421521
        __asm _emit 0xeb
        __asm _emit 0x03
        add bl, 30h
        mov byte ptr [ecx], bl
        inc ecx
        test esi, esi
        ; Exact mapped bytes 77 DA: ja 0x421502
        __asm _emit 0x77
        __asm _emit 0xda
        and byte ptr [ecx], 0
        dec ecx
        mov dl, byte ptr [edi]
        mov al, byte ptr [ecx]
        mov byte ptr [ecx], dl
        mov byte ptr [edi], al
        dec ecx
        inc edi
        cmp edi, ecx
        ; Exact mapped bytes 72 F2: jb 0x42152c
        __asm _emit 0x72
        __asm _emit 0xf2
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
