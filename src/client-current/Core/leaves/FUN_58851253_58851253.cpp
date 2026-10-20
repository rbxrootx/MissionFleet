// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851253 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_58851253_58851253() {
    __asm {
        push 10h
        push 588ed080h
        ; Exact mapped bytes E8 01 15 FE FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 14: jne 0x5885127a
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 04 12 01 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 35 FD FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 66: jmp 0x588512e0
        __asm _emit 0xeb
        __asm _emit 0x66
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 E5: je 0x58851266
        __asm _emit 0x74
        __asm _emit 0xe5
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 74 E0: je 0x58851266
        __asm _emit 0x74
        __asm _emit 0xe0
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 0D: jne 0x58851298
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 DF 11 01 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes EB DE: jmp 0x58851276
        __asm _emit 0xeb
        __asm _emit 0xde
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 1F B4 01 00: call 0x5886c6c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x588512b5
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 C2 11 01 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], 18h
        ; Exact mapped bytes EB C1: jmp 0x58851276
        __asm _emit 0xeb
        __asm _emit 0xc1
        and dword ptr [ebp - 20h], 0
        and dword ptr [ebp - 4], 0
        push dword ptr [ebp - 1ch]
        push dword ptr [ebp + 10h]
        push edi
        push esi
        ; Exact mapped bytes E8 34 B9 01 00: call 0x5886cbfe
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        mov esi, eax
        mov dword ptr [ebp - 20h], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 15 00 00 00: call 0x588512f3
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
