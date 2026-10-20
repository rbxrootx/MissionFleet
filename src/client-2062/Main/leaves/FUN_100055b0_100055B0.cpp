// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100055B0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_100055b0_100055B0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        push edi
        mov edi, ecx
        lea eax, [ebx + ebx*4]
        mov cl, byte ptr [edi + eax*4 + 0fdh]
        lea esi, [edi + eax*4]
        mov eax, dword ptr [esp + 18h]
        dec cl
        test eax, eax
        mov byte ptr [esi + 0fdh], cl
        ; Exact mapped bytes 75 33: jne 0x10005609
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [edi + 0ch]
        xor eax, eax
        mov al, byte ptr [esi + 0fch]
        push 1
        ; Exact mapped bytes 66 8B 94 81 E2 0C 00 00: mov dx, word ptr [ecx + eax*4 + 0xce2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1bh
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        add ecx, 328h
        inc edx
        xor edx, 0aah
        push edx
        push 1
        push eax
        ; Exact mapped bytes E8 D7 C3 0E 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov al, byte ptr [esi + 0fdh]
        test al, al
        ; Exact mapped bytes 75 0B: jne 0x1000561e
        __asm _emit 0x75
        __asm _emit 0x0b
        lea eax, [ebx + ebx*4 + 41h]
        mov dword ptr [edi + eax*4], 0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
