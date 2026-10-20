// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437490 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_00437490_00437490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], 1
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 0F 87 9E 00 00 00: ja 0x437554
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        mov edi, dword ptr [ebp - 4]
        mov edx, ecx
        mov bl, al
        mov bh, bl
        mov eax, ebx
        shl eax, 10h
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 4E: je 0x437552
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 08: jne 0x437521
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 17: jmp 0x437538
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 2E E7 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 57: jmp 0x4375ab
        __asm _emit 0xeb
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        mov edi, dword ptr [ebp - 1ch]
        mov edx, ecx
        mov bl, al
        mov bh, bl
        mov eax, ebx
        shl eax, 10h
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov al, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 15 97 00 00: call 0x440cc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
