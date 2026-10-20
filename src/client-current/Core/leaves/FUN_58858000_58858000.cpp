// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858000 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_58858000_58858000() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x58858028
        __asm _emit 0x75
        __asm _emit 0x1a
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 4F 06 00 00: call 0x58858667
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x588580ac
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 1F: jne 0x5885804e
        __asm _emit 0x75
        __asm _emit 0x1f
        mov esi, dword ptr [ebp + 0ch]
        cmp dword ptr [esi + 0ch], edi
        ; Exact mapped bytes 75 0D: jne 0x58858044
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 7D 06 00 00: call 0x588586bd
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 6A: jne 0x588580ae
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, dword ptr [esi + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes EB D2: jmp 0x58858020
        __asm _emit 0xeb
        __asm _emit 0xd2
        push edi
        push edi
        push -1
        push esi
        push 9
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 D2 7A 01 00: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5885807a
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
        ; Exact mapped bytes E8 A3 A3 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 F9 A3 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 34: jmp 0x588580ae
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edi, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 76 0C: jbe 0x5885808e
        __asm _emit 0x76
        __asm _emit 0x0c
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 33 06 00 00: call 0x588586bd
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x588580ae
        __asm _emit 0x75
        __asm _emit 0x20
        push dword ptr [edi + 0ch]
        push dword ptr [edi + 8]
        push -1
        push esi
        push 9
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 8E 7A 01 00: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 74 BC: je 0x58858064
        __asm _emit 0x74
        __asm _emit 0xbc
        dec eax
        mov dword ptr [edi + 10h], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
