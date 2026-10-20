// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5060 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_587c5060() {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        xor esi, esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0ch], esi
        test ebp, ebp
        ; Exact mapped bytes 7E 71: jle 0x587c50e5
        __asm _emit 0x7e
        __asm _emit 0x71
        push ebx
        mov ebx, dword ptr [esp + 18h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 79 FD FF FF: call 0x587c4e00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 35: jle 0x587c50c0
        __asm _emit 0x7e
        __asm _emit 0x35
        cmp ebp, eax
        mov esi, eax
        ; Exact mapped bytes 7D 02: jge 0x587c5093
        __asm _emit 0x7d
        __asm _emit 0x02
        mov esi, ebp
        mov eax, dword ptr [edi + 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 1ch]
        push esi
        push ecx
        push edx
        push ebx
        ; Exact mapped bytes E8 B5 7B 1B 00: call 0x5897cc5a
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [edi + 30h]
        sub dword ptr [eax], esi
        add dword ptr [esp + 20h], esi
        mov eax, dword ptr [edi + 20h]
        add ebx, esi
        sub ebp, esi
        add esp, 10h
        add dword ptr [eax], esi
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 17: jmp 0x587c50d7
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 14h]
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp eax, -1
        ; Exact mapped bytes 74 0D: je 0x587c50db
        __asm _emit 0x74
        __asm _emit 0x0d
        inc esi
        mov byte ptr [ebx], al
        inc ebx
        mov dword ptr [esp + 10h], esi
        dec ebp
        test ebp, ebp
        ; Exact mapped bytes 7F A5: jg 0x587c5080
        __asm _emit 0x7f
        __asm _emit 0xa5
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
