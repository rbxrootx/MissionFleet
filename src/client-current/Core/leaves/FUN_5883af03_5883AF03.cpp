// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AF03 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_5883af03_5883AF03() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        xor ecx, ecx
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [edi + 10h], ecx
        ; Exact mapped bytes 75 11: jne 0x5883af36
        __asm _emit 0x75
        __asm _emit 0x11
        push 588c1cf9h
        mov ecx, esi
        ; Exact mapped bytes E8 48 FC FF FF: call 0x5883ab79
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x5883afcd
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 14h], 8
        ; Exact mapped bytes 72 04: jb 0x5883af40
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [edi]
        ; Exact mapped bytes EB 02: jmp 0x5883af42
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, edi
        push ebx
        push ecx
        push ecx
        push ecx
        push ecx
        push -1
        push eax
        push ecx
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea ebx, [eax - 1]
        test ebx, ebx
        ; Exact mapped bytes 7F 0E: jg 0x5883af69
        __asm _emit 0x7f
        __asm _emit 0x0e
        push 588c1cf9h
        mov ecx, esi
        ; Exact mapped bytes E8 12 FC FF FF: call 0x5883ab79
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 63: jmp 0x5883afcc
        __asm _emit 0xeb
        __asm _emit 0x63
        xor eax, eax
        mov dword ptr [ebp - 8], 0fh
        push eax
        push ebx
        lea ecx, [ebp - 1ch]
        mov dword ptr [ebp - 0ch], eax
        mov byte ptr [ebp - 1ch], al
        ; Exact mapped bytes E8 73 08 00 00: call 0x5883b7f5
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 10h
        lea eax, [ebp - 1ch]
        cmovae eax, dword ptr [ebp - 1ch]
        cmp dword ptr [edi + 14h], 8
        ; Exact mapped bytes 72 02: jb 0x5883af95
        __asm _emit 0x72
        __asm _emit 0x02
        mov edi, dword ptr [edi]
        push 0
        push 0
        push ebx
        push eax
        push -1
        push edi
        xor ebx, ebx
        push ebx
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 1ch]
        mov dword ptr [esi + 14h], 0fh
        mov dword ptr [esi + 10h], ebx
        mov ecx, esi
        push eax
        mov byte ptr [esi], bl
        ; Exact mapped bytes E8 1E 00 00 00: call 0x5883afdf
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 1
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C1 03 00 00: call 0x5883b38d
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 75 60 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
