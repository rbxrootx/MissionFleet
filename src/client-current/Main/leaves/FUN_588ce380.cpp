// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CE380 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_588ce380() {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 74h]
        mov ecx, dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 E2 9D 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 14h]
        mov ebx, 8
        test eax, eax
        ; Exact mapped bytes 7E 32: jle 0x588ce3cd
        __asm _emit 0x7e
        __asm _emit 0x32
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 88h], ebx
        ; Exact mapped bytes 7E 28: jle 0x588ce3cd
        __asm _emit 0x7e
        __asm _emit 0x28
        test ebp, ebp
        ; Exact mapped bytes 74 24: je 0x588ce3cd
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes E8 C2 9D 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, eax
        dec edi
        mov ebx, 3
        mov ecx, dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 D2 9D 03 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F0: jne 0x588ce3b6
        __asm _emit 0x75
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 96 9D 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, -8
        cmp eax, edi
        ; Exact mapped bytes 7D 2F: jge 0x588ce410
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 88h], ebx
        ; Exact mapped bytes 7E 25: jle 0x588ce410
        __asm _emit 0x7e
        __asm _emit 0x25
        test ebp, ebp
        ; Exact mapped bytes 75 21: jne 0x588ce410
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 7C 9D 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, eax
        inc edi
        lea ebx, [ebp + 3]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 88 9D 03 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F0: jne 0x588ce400
        __asm _emit 0x75
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
