// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887122D .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_5887122d_5887122D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push esi
        ; Exact mapped bytes E8 B2 87 00 00: call 0x588799f1
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, 0ffffffffh
        pop ecx
        cmp eax, edi
        ; Exact mapped bytes 75 14: jne 0x5887125b
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 18h]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 9
        mov eax, edi
        mov edx, edi
        ; Exact mapped bytes EB 51: jmp 0x588712ac
        __asm _emit 0xeb
        __asm _emit 0x51
        push dword ptr [ebp + 14h]
        lea ecx, [ebp - 8]
        push ecx
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 90 41 89 58: call dword ptr [0x58894190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x58871286
        __asm _emit 0x75
        __asm _emit 0x13
        push dword ptr [ebp + 18h]
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 B4 11 FF FF: call 0x58862436
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes EB CF: jmp 0x58871255
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        and eax, edx
        cmp eax, edi
        ; Exact mapped bytes 74 C3: je 0x58871255
        __asm _emit 0x74
        __asm _emit 0xc3
        mov eax, dword ptr [ebp - 8]
        mov ecx, esi
        and esi, 3fh
        sar ecx, 6
        imul esi, esi, 38h
        mov ecx, dword ptr [ecx*4 + 589699b0h]
        and byte ptr [ecx + esi + 28h], 0fdh
        pop edi
        pop esi
        leave
        ret
    }
}
