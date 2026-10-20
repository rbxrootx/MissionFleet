// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C763 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_5884c763_5884C763() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        xor ecx, ecx
        push 7
        mov edx, ecx
        pop ebx
        lea esi, [edi + 14h]
        movzx eax, word ptr [esi]
        lea esi, [esi + 4]
        add edx, eax
        sub ebx, 1
        ; Exact mapped bytes 75 F3: jne 0x5884c776
        __asm _emit 0x75
        __asm _emit 0xf3
        push 79h
        lea esi, [edi + 30h]
        pop ebx
        movzx eax, word ptr [esi]
        lea esi, [esi + 4]
        add ecx, eax
        sub ebx, 1
        ; Exact mapped bytes 75 F3: jne 0x5884c789
        __asm _emit 0x75
        __asm _emit 0xf3
        lea esi, [edi + 214h]
        mov ebx, 80h
        movzx eax, word ptr [esi]
        lea esi, [esi + 4]
        add edx, eax
        sub ebx, 1
        ; Exact mapped bytes 75 F3: jne 0x5884c7a1
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [edi + 1af50h]
        shr ecx, 2
        cmp ecx, edx
        pop edi
        sbb ecx, ecx
        inc ecx
        pop esi
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        pop ebx
        pop ebp
        ret
    }
}
