// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10005A90 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_10005a90_10005A90() {
    __asm {
        sub esp, 84h
        mov al, 1
        push ebx
        mov byte ptr [esp + 4], al
        mov byte ptr [esp + 5], al
        mov eax, dword ptr [esp + 8ch]
        push esi
        mov esi, dword ptr [ecx + 0ch]
        mov edx, eax
        shl edx, 4
        mov byte ptr [esp + 14h], al
        lea eax, [eax + eax*4 + 41h]
        mov edx, dword ptr [edx + esi + 0f7ch]
        push edi
        mov ecx, dword ptr [ecx + eax*4]
        mov byte ptr [esp + 0eh], 0
        mov edi, dword ptr [edx + 0ch]
        mov byte ptr [esp + 0fh], 9
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ecx + 4]
        mov ebx, dword ptr [edi + 4]
        mov edi, dword ptr [edi + 8]
        mov ecx, dword ptr [esp + 0ch]
        sub edx, edi
        ; Exact mapped bytes 66 89 54 24 16: mov word ptr [esp + 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        lea edx, [esp + 10h]
        push 9
        mov dword ptr [esp + 14h], ecx
        sub eax, ebx
        push edx
        push 0ch
        mov ecx, esi
        ; Exact mapped bytes 66 89 44 24 20: mov word ptr [esp + 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes E8 1D 5E 0E 00: call 0x100eb920
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 84h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
