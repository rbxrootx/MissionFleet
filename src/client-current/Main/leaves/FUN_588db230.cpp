// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DB230 .. +0x161 bytes.
extern "C" __declspec(naked) void FUN_588db230() {
    __asm {
        push -1
        push 589894abh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov edi, dword ptr [esi + 100ch]
        ; Exact mapped bytes E8 D4 19 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        movzx ecx, word ptr [edi + 6]
        cdq
        and ecx, 1ffh
        idiv ecx
        mov edi, dword ptr [esi + 100ch]
        mov ebx, edx
        ; Exact mapped bytes E8 BA 19 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        movzx ecx, word ptr [edi + 6]
        cdq
        and ecx, 1ffh
        idiv ecx
        mov ebp, dword ptr [esi + 0b0h]
        mov ecx, edx
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        mov eax, ebx
        cdq
        and edx, 3
        sar edi, 2
        add eax, edx
        imul edi, ebp
        mov edx, ebp
        imul edx, ebp
        sar eax, 2
        add edi, eax
        cmp edi, edx
        ; Exact mapped bytes 0F 8D C0 00 00 00: jge 0x588db37b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 605ch]
        mov edx, dword ptr [esi + eax*4 + 0b4h]
        cmp byte ptr [edi + edx], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x588db37b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 100ch]
        movzx edx, word ptr [eax + 6]
        movzx eax, word ptr [eax + 6]
        shr eax, 1
        and eax, 0ffh
        sub ecx, eax
        imul ecx, ecx, 56h
        shr edx, 1
        and edx, 0ffh
        sub ebx, edx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov edi, edx
        shr edi, 1fh
        push 68h
        add edi, edx
        ; Exact mapped bytes E8 40 19 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], 0
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x588db37b
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1dh
        mov edx, dword ptr [esi + 100ch]
        ; Exact mapped bytes 7E 17: jle 0x588db34d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588db34d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 740h
        ; Exact mapped bytes EB 02: jmp 0x588db34f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        movzx edx, word ptr [edx + 8]
        mov ebp, dword ptr [esi + 8]
        push 40h
        push 0
        and edx, 3fh
        push 1388h
        sub ebp, edx
        mov edx, dword ptr [esi + 4]
        add ebp, edi
        push ebp
        add edx, ebx
        push edx
        push ecx
        mov ecx, dword ptr [esp + 40h]
        push esi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A5 35 E8 FF: call 0x5875e920
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
