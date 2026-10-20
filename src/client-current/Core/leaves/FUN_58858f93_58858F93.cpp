// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858F93 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58858f93_58858F93() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        push dword ptr [esi + 8]
        push dword ptr [esi + 0ch]
        ; Exact mapped bytes FF 15 F4 41 89 58: call dword ptr [0x588941f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58858fbe
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
        ; Exact mapped bytes E8 5F 94 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 B5 94 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 27: jmp 0x58858fe5
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 76 1D: jbe 0x58858fe0
        __asm _emit 0x76
        __asm _emit 0x1d
        inc eax
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 F1 F6 FF FF: call 0x588586bd
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x58858fe5
        __asm _emit 0x75
        __asm _emit 0x15
        push dword ptr [esi + 8]
        push dword ptr [esi + 0ch]
        ; Exact mapped bytes FF 15 F4 41 89 58: call dword ptr [0x588941f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 C8: je 0x58858fa8
        __asm _emit 0x74
        __asm _emit 0xc8
        mov dword ptr [esi + 10h], eax
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
