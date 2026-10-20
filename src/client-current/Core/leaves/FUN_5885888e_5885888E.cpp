// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885888E .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_5885888e_5885888E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 1C: jne 0x588588b8
        __asm _emit 0x75
        __asm _emit 0x1c
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 A5 04 00 00: call 0x58858d4b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0ch], ebx
        mov dword ptr [esi + 10h], ebx
        xor eax, eax
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x58858950
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes 66 39 1E: cmp word ptr [esi], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1e
        ; Exact mapped bytes 75 1C: jne 0x588588db
        __asm _emit 0x75
        __asm _emit 0x1c
        mov esi, dword ptr [ebp + 0ch]
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 75 0D: jne 0x588588d4
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 BC 04 00 00: call 0x58858d8c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7C: jne 0x58858950
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB D3: jmp 0x588588ae
        __asm _emit 0xeb
        __asm _emit 0xd3
        push ebx
        push ebx
        push ebx
        push ebx
        push -1
        push esi
        push ebx
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 FE 72 01 00: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58858908
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
        ; Exact mapped bytes E8 15 9B 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 6B 9B 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 48: jmp 0x58858950
        __asm _emit 0xeb
        __asm _emit 0x48
        push edi
        mov edi, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 76 0C: jbe 0x5885891d
        __asm _emit 0x76
        __asm _emit 0x0c
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 73 04 00 00: call 0x58858d8c
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x5885894f
        __asm _emit 0x75
        __asm _emit 0x32
        push dword ptr [edi + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        push dword ptr [edi + 8]
        push esi
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 D5 FC FF FF: call 0x58858604
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58858949
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
        ; Exact mapped bytes E8 D4 9A 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 2A 9B 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 06: jmp 0x5885894f
        __asm _emit 0xeb
        __asm _emit 0x06
        dec eax
        mov dword ptr [edi + 10h], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
