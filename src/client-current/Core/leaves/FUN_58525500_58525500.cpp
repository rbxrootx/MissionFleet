// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58525500 .. +0x110 bytes.
extern "C" __declspec(naked) void FUN_58525500_58525500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        sar edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 6F: jge 0x58525596
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + ecx + 2]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        imul edx, ecx, 11ch
        add edx, dword ptr [ebp + 8]
        push edx
        imul eax, dword ptr [ebp - 4], 11ch
        add eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x58525568
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        imul eax, dword ptr [ebp - 4], 11ch
        add eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 38 1D F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        imul edi, dword ptr [ebp + 0ch], 11ch
        add edi, dword ptr [ebp + 8]
        mov ecx, 47h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 89: jmp 0x5852551f
        __asm _emit 0xeb
        __asm _emit 0x89
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 47: jne 0x585255e5
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [ebp + 10h]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x585255ad
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x585255e5
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        imul edx, ecx, 11ch
        add edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 EA 1C F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        imul edi, dword ptr [ebp + 0ch], 11ch
        add edi, dword ptr [ebp + 8]
        mov ecx, 47h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 BE 1C F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 09 01 00 00: call 0x58525710
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
