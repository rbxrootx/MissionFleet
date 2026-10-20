// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588587CC .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_588587cc_588587CC() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 0F: jne 0x588587e8
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E3 06 00 00: call 0x58858ec4
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x5885888b
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 66 39 1E: cmp word ptr [esi], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1e
        ; Exact mapped bytes 75 25: jne 0x58858815
        __asm _emit 0x75
        __asm _emit 0x25
        mov esi, dword ptr [ebp + 0ch]
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 75 11: jne 0x58858809
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 64 05 00 00: call 0x58858d65
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x5885888a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax], bl
        xor eax, eax
        mov dword ptr [esi + 10h], ebx
        ; Exact mapped bytes EB 75: jmp 0x5885888a
        __asm _emit 0xeb
        __asm _emit 0x75
        push ebx
        push ebx
        push ebx
        push ebx
        push -1
        push esi
        push ebx
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 C4 73 01 00: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58858842
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
        ; Exact mapped bytes E8 DB 9B 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 31 9C 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 48: jmp 0x5885888a
        __asm _emit 0xeb
        __asm _emit 0x48
        push edi
        mov edi, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 76 0C: jbe 0x58858857
        __asm _emit 0x76
        __asm _emit 0x0c
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 12 05 00 00: call 0x58858d65
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x58858889
        __asm _emit 0x75
        __asm _emit 0x32
        push dword ptr [edi + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        push dword ptr [edi + 8]
        push esi
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 9B FD FF FF: call 0x58858604
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58858883
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
        ; Exact mapped bytes E8 9A 9B 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 F0 9B 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 06: jmp 0x58858889
        __asm _emit 0xeb
        __asm _emit 0x06
        dec eax
        mov dword ptr [edi + 10h], eax
        xor eax, eax
        pop edi
        pop ebx
        pop esi
        pop ebp
        ret
    }
}
