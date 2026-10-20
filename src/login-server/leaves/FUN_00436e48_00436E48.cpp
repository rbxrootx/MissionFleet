// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436E48 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00436e48_00436E48() {
    __asm {
        mov eax, 43ab80h
        ; Exact mapped bytes E8 B6 87 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov dword ptr [ebp - 10h], esp
        cmp dword ptr [esi], edi
        ; Exact mapped bytes 75 1E: jne 0x436e80
        __asm _emit 0x75
        __asm _emit 0x1e
        push 10h
        ; Exact mapped bytes E8 3A 01 00 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], edi
        cmp dword ptr [esi], edi
        ; Exact mapped bytes 75 05: jne 0x436e75
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes FF 55 08: call dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x08
        mov dword ptr [esi], eax
        or dword ptr [ebp - 4], 0ffffffffh
        push 10h
        ; Exact mapped bytes E8 93 01 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
