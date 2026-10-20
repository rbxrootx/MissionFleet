// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C52C .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_5884c52c_5884C52C() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 8]
        push 0eh
        pop ecx
        lea eax, [esi - 1]
        cmp ecx, eax
        push 588c247ch
        sbb al, al
        inc al
        push eax
        push edi
        ; Exact mapped bytes E8 41 D0 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 1af5ch]
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        add dword ptr [edi + 1af6ch], esi
        shl eax, cl
        or dword ptr [edi + 1af58h], eax
        lea eax, [ecx + esi]
        mov dword ptr [edi + 1af5ch], eax
        cmp eax, 10h
        ; Exact mapped bytes 7E 63: jle 0x5884c5da
        __asm _emit 0x7e
        __asm _emit 0x63
        mov eax, dword ptr [edi + 1af68h]
        push ebx
        lea ebx, [edi + 1af64h]
        dec eax
        cmp dword ptr [ebx], eax
        ; Exact mapped bytes 72 0F: jb 0x5884c598
        __asm _emit 0x72
        __asm _emit 0x0f
        push ebx
        push dword ptr [edi + 1af60h]
        push dword ptr [edi]
        ; Exact mapped bytes FF 57 10: call dword ptr [edi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [edi + 1af60h]
        mov al, byte ptr [edi + 1af58h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [ebx]
        mov esi, dword ptr [ebx]
        mov edx, dword ptr [edi + 1af60h]
        mov al, byte ptr [edi + 1af59h]
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [esi + edx], al
        add dword ptr [edi + 1af5ch], -10h
        inc dword ptr [ebx]
        sub ecx, dword ptr [edi + 1af5ch]
        mov eax, dword ptr [ebp + 0ch]
        shr eax, cl
        mov dword ptr [edi + 1af58h], eax
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}
