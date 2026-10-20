// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044441B .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_0044441b_0044441B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 130h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 130h]
        mov ecx, 4ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 130h], ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 340h
        ; Exact mapped bytes E8 8F 76 0F 00: call 0x53bae0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x44445c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x44458e
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 340h
        ; Exact mapped bytes E8 30 36 09 00: call 0x4d7aa1
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx + 400h]
        sub edx, 1
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [eax + 400h], edx
        push 1
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx + 400h]
        push edx
        push 3ech
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 BC A6 0A 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 10h], 3ch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x4444d3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 1
        mov dword ptr [ebp - 12ch], ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 340h
        ; Exact mapped bytes E8 5D 33 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x444578
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 340h
        ; Exact mapped bytes E8 1B 05 09 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2A F4 FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 1F 00 00: call 0x446510
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 12ch]
        add edx, 1
        mov esi, esp
        push edx
        push 5b668ch
        lea eax, [ebp - 128h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 8B 42 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 128h]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 340h
        ; Exact mapped bytes E8 76 33 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x4444c4
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 E7 20 00 00: call 0x446670
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 130h
        cmp ebp, esp
        ; Exact mapped bytes E8 43 42 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
