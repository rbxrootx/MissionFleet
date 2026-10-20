// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859830 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_58859830_58859830() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 20: jne 0x5885985f
        __asm _emit 0x75
        __asm _emit 0x20
        cmp eax, 7ff00000h
        ; Exact mapped bytes 75 07: jne 0x5885984d
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        pop ebp
        ret
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x5885985f
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp eax, 0fff00000h
        ; Exact mapped bytes 75 07: jne 0x5885985f
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        pop ebp
        ret
        mov edx, eax
        and edx, 7ff80000h
        push esi
        cmp edx, 7ff80000h
        ; Exact mapped bytes 75 08: jne 0x58859878
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, 3
        pop esi
        pop ebp
        ret
        mov edx, eax
        and edx, 7ff00000h
        cmp edx, 7ff00000h
        ; Exact mapped bytes 75 15: jne 0x5885989d
        __asm _emit 0x75
        __asm _emit 0x15
        and eax, 7fffffffh
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x58859895
        __asm _emit 0x75
        __asm _emit 0x04
        cmp eax, edx
        ; Exact mapped bytes 74 08: je 0x5885989d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, 4
        pop esi
        pop ebp
        ret
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}
