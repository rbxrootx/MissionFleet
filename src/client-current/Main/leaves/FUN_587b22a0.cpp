// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B22A0 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_587b22a0() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 75 59: jne 0x587b2305
        __asm _emit 0x75
        __asm _emit 0x59
        mov al, byte ptr [esi + 30bh]
        movzx edx, word ptr [esi + 314h]
        xor ecx, ecx
        and al, 0fh
        cmp al, 1
        sete cl
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 158h], edx
        mov dword ptr [esi + 174h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 75 F5 FF FF: call 0x587b1850
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 31ch]
        xor eax, 0aaaaaaaah
        xor ecx, ecx
        cmp eax, dword ptr [esi + 0e0h]
        mov eax, edi
        setl cl
        pop edi
        dec ecx
        and ecx, 40000000h
        mov dword ptr [esi + 0f8h], ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dl, byte ptr [esi + 3bfh]
        movzx ecx, word ptr [esi + 3c8h]
        xor eax, eax
        and dl, 0fh
        cmp dl, 1
        sete al
        xor ecx, 0aaaaaaaah
        mov dword ptr [esi + 158h], ecx
        mov ecx, esi
        mov dword ptr [esi + 174h], eax
        ; Exact mapped bytes E8 1A F5 FF FF: call 0x587b1850
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 3d0h]
        xor eax, eax
        xor edx, 0aaaaaaaah
        cmp edx, dword ptr [esi + 0e0h]
        setl al
        dec eax
        and eax, 40000000h
        mov dword ptr [esi + 0f8h], eax
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
