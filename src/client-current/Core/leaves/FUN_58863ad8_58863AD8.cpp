// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863AD8 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58863ad8_58863AD8() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov edx, ebx
        mov al, byte ptr [esi]
        cmp al, byte ptr [edx + 588c4210h]
        ; Exact mapped bytes 74 08: je 0x58863afc
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, byte ptr [edx + 588c4218h]
        ; Exact mapped bytes 75 11: jne 0x58863b0d
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [edi]
        mov cl, byte ptr [eax]
        inc eax
        inc edx
        mov dword ptr [edi], eax
        mov byte ptr [esi], cl
        cmp edx, 5
        ; Exact mapped bytes 75 DF: jne 0x58863aea
        __asm _emit 0x75
        __asm _emit 0xdf
        mov bl, 1
        pop edi
        pop esi
        mov al, bl
        pop ebx
        pop ebp
        ret
    }
}
