// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C50F0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_587c50f0() {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push esi
        xor esi, esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0ch], esi
        test ebp, ebp
        ; Exact mapped bytes 7E 6F: jle 0x587c5173
        __asm _emit 0x7e
        __asm _emit 0x6f
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
        ; Exact mapped bytes E8 09 FD FF FF: call 0x587c4e20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 31: jle 0x587c514c
        __asm _emit 0x7e
        __asm _emit 0x31
        cmp ebp, eax
        mov esi, eax
        ; Exact mapped bytes 7D 02: jge 0x587c5123
        __asm _emit 0x7d
        __asm _emit 0x02
        mov esi, ebp
        push esi
        push ebx
        push eax
        mov eax, dword ptr [edi + 24h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 29 7B 1B 00: call 0x5897cc5a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [edi + 34h]
        sub dword ptr [eax], esi
        add dword ptr [esp + 20h], esi
        mov eax, dword ptr [edi + 24h]
        add ebx, esi
        sub ebp, esi
        add esp, 10h
        add dword ptr [eax], esi
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 19: jmp 0x587c5165
        __asm _emit 0xeb
        __asm _emit 0x19
        movzx eax, byte ptr [ebx]
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp eax, -1
        ; Exact mapped bytes 74 0B: je 0x587c5169
        __asm _emit 0x74
        __asm _emit 0x0b
        inc esi
        inc ebx
        mov dword ptr [esp + 10h], esi
        dec ebp
        test ebp, ebp
        ; Exact mapped bytes 7F A7: jg 0x587c5110
        __asm _emit 0x7f
        __asm _emit 0xa7
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
