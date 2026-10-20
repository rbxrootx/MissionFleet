// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004091FC .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_004091fc_004091FC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 104h]
        mov ecx, 41h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 104h], ecx
        mov esi, esp
        push 5a09c0h
        lea eax, [ebp - 100h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 A1 F5 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 6D 7D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 100h]
        push edx
        ; Exact mapped bytes E8 6B 01 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 45 7D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 FF 11 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 D0 11 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x11
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
        ; Exact mapped bytes E8 6A DF 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 104h
        cmp ebp, esp
        ; Exact mapped bytes E8 09 F5 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x09
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
