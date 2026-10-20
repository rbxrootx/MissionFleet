// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004090E6 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_004090e6_004090E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 108h]
        mov ecx, 42h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 104h], ecx
        push 0
        ; Exact mapped bytes E8 EE C3 12 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc3
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        mov eax, dword ptr [ebp - 108h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 AE F6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 148h
        ; Exact mapped bytes E8 B9 4E 0E 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 5a09bch
        lea eax, [ebp - 100h]
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
        ; Exact mapped bytes E8 82 F6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 4E 7E 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 100h]
        push edx
        ; Exact mapped bytes E8 4C 02 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 26 7E 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 E0 12 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 B1 12 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B E0 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 108h
        cmp ebp, esp
        ; Exact mapped bytes E8 EA F5 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf5
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
