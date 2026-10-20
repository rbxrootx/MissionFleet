// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADD50 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_587add50_587ADD50() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov ecx, dword ptr [esi + 4]
        mov edi, ecx
        cmp ecx, dword ptr [esp + 14h]
        cmova edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 75 05: jne 0x587add6d
        __asm _emit 0x75
        __asm _emit 0x05
        pop edi
        xor eax, eax
        pop esi
        ret
        push ebx
        mov ebx, dword ptr [esp + 14h]
        sub ecx, edi
        push edi
        push dword ptr [esi]
        mov dword ptr [esi + 4], ecx
        push ebx
        ; Exact mapped bytes E8 10 EB 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        add esp, 0ch
        mov eax, dword ptr [eax + 18h]
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x587adda9
        __asm _emit 0x75
        __asm _emit 0x1b
        push edi
        push ebx
        push dword ptr [esi + 30h]
        ; Exact mapped bytes E8 08 22 00 00: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esi], edi
        add esp, 0ch
        add dword ptr [esi + 8], edi
        mov dword ptr [esi + 30h], eax
        mov eax, edi
        pop ebx
        pop edi
        pop esi
        ret
        cmp eax, 2
        ; Exact mapped bytes 75 10: jne 0x587addbe
        __asm _emit 0x75
        __asm _emit 0x10
        push edi
        push ebx
        push dword ptr [esi + 30h]
        ; Exact mapped bytes E8 B8 1D 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 30h], eax
        add esp, 0ch
        add dword ptr [esi], edi
        mov eax, edi
        add dword ptr [esi + 8], edi
        pop ebx
        pop edi
        pop esi
        ret
    }
}
