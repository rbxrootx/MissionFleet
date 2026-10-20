// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858BB6 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_58858bb6_58858BB6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, ecx
        push 0
        push dword ptr [esi + 8]
        push dword ptr [esi + 0ch]
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 E0 41 89 58: call dword ptr [0x588941e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58858bec
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 31 98 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 87 98 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 2A: jmp 0x58858c16
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 76 20: jbe 0x58858c11
        __asm _emit 0x76
        __asm _emit 0x20
        inc eax
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 C3 FA FF FF: call 0x588586bd
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x58858c16
        __asm _emit 0x75
        __asm _emit 0x18
        push eax
        push dword ptr [esi + 8]
        push dword ptr [esi + 0ch]
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 E0 41 89 58: call dword ptr [0x588941e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 C5: je 0x58858bd6
        __asm _emit 0x74
        __asm _emit 0xc5
        mov dword ptr [esi + 10h], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
