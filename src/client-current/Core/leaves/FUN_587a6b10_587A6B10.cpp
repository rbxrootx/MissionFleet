// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6B10 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_587a6b10_587A6B10() {
    __asm {
        mov ecx, dword ptr [esp + 14h]
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov edi, dword ptr [esp + 18h]
        test edi, edi
        ; Exact mapped bytes 0F 8E A5 00 00 00: jle 0x587a6bcb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x587a6bcb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 88 95 00 00 00: js 0x587a6bcb
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 75 08: jne 0x587a6b45
        __asm _emit 0x75
        __asm _emit 0x08
        test esi, esi
        ; Exact mapped bytes 0F 8F 86 00 00 00: jg 0x587a6bcb
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 7fffffffh
        sub eax, esi
        push ebx
        cmp edi, eax
        ; Exact mapped bytes 7F 74: jg 0x587a6bc5
        __asm _emit 0x7f
        __asm _emit 0x74
        or eax, 0ffffffffh
        lea ebx, [esi + edi]
        xor edx, edx
        div ecx
        cmp ebx, eax
        ; Exact mapped bytes 77 66: ja 0x587a6bc5
        __asm _emit 0x77
        __asm _emit 0x66
        mov eax, dword ptr [esp + 10h]
        imul ebx, ecx
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587a6b7d
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [eax + 290h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x587a6b7d
        __asm _emit 0x74
        __asm _emit 0x09
        push ebx
        push eax
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        add esp, 8
        ; Exact mapped bytes EB 09: jmp 0x587a6b86
        __asm _emit 0xeb
        __asm _emit 0x09
        push ebx
        ; Exact mapped bytes E8 8D 2A 0B 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 39: je 0x587a6bc5
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [esp + 20h]
        push ebp
        mov ebp, esi
        imul ebp, eax
        test esi, esi
        ; Exact mapped bytes 7E 12: jle 0x587a6bac
        __asm _emit 0x7e
        __asm _emit 0x12
        push ebp
        push dword ptr [esp + 1ch]
        push ebx
        ; Exact mapped bytes E8 EB 5C 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        add esp, 0ch
        imul edi, eax
        lea eax, [ebx + ebp]
        push edi
        push 0
        push eax
        ; Exact mapped bytes E8 55 62 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, ebx
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ret
        push 588b9428h
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 A7 82 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
