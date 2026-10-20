// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CAF2 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042caf2_0042CAF2() {
    __asm {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        ; Exact mapped bytes E8 58 10 00 00: call 0x42db54
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebx]
        xor esi, esi
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 34: je 0x42cb3a
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes E8 0D 33 FF FF: call 0x41fe1c
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 08: je 0x42cb1c
        __asm _emit 0x74
        __asm _emit 0x08
        test esi, esi
        ; Exact mapped bytes 75 06: jne 0x42cb1e
        __asm _emit 0x75
        __asm _emit 0x06
        mov esi, edi
        ; Exact mapped bytes EB 02: jmp 0x42cb1e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push edi
        ; Exact mapped bytes E8 C9 2C FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 75 D9: jne 0x42cb06
        __asm _emit 0x75
        __asm _emit 0xd9
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x42cb3a
        __asm _emit 0x74
        __asm _emit 0x09
        and byte ptr [esi], al
        mov ebx, dword ptr [ebx]
        sub esi, ebx
        mov dword ptr [ebx - 8], esi
        pop edi
        pop esi
        pop ebx
        ret
    }
}
