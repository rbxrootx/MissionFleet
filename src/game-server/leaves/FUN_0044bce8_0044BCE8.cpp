// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BCE8 .. +0x14E bytes.
extern "C" __declspec(naked) void FUN_0044bce8_0044BCE8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 20h], 31h
        mov dword ptr [ebp - 24h], 0
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6E A1 FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x44bd30
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x44be25
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        push 0
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 33 D6 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 33 B9 FF FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 07: jne 0x44bd7f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x44be25
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x44bd91
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x44be20
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        shl edx, cl
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 254h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        and edx, dword ptr [ebp - 18h]
        test edx, edx
        ; Exact mapped bytes 75 53: jne 0x44be1b
        __asm _emit 0x75
        __asm _emit 0x53
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 28: jne 0x44bdf6
        __asm _emit 0x75
        __asm _emit 0x28
        mov dword ptr [ebp - 4], 1
        push 2
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 12eh]
        push edx
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2F D2 05 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 25: jmp 0x44be1b
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 12eh]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 23 00 00 00: call 0x44be36
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x44be1b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x44be25
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x44bd88
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 B0 C9 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc9
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
