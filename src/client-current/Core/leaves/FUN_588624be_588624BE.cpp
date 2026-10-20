// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588624BE .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_588624be_588624BE() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        mov eax, ecx
        and eax, 80000003h
        ; Exact mapped bytes 79 07: jns 0x588624d6
        __asm _emit 0x79
        __asm _emit 0x07
        dec eax
        or eax, 0fffffffch
        add eax, 1
        ; Exact mapped bytes 75 12: jne 0x588624ea
        __asm _emit 0x75
        __asm _emit 0x12
        push esi
        push 64h
        mov eax, ecx
        pop esi
        cdq
        idiv esi
        pop esi
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x588624ea
        __asm _emit 0x74
        __asm _emit 0x04
        mov al, 1
        pop ebp
        ret
        lea eax, [ecx + 76ch]
        mov ecx, 190h
        cdq
        idiv ecx
        neg edx
        sbb dl, dl
        lea eax, [edx + 1]
        pop ebp
        ret
    }
}
