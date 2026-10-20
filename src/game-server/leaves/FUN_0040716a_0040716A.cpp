// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040716A .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_0040716a_0040716A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 110h]
        mov ecx, 44h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 108h], ecx
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 6C 32 00 00: call 0x40a410
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 8C 32 00 00: call 0x40a440
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        mov dword ptr [ebp - 110h], esi
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes DF AD F0 FE FF FF: fild qword ptr [ebp - 0x110]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 6C 10 58 00: fmul dword ptr [0x58106c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 25 23 0A 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        push 5a05a8h
        lea eax, [ebp - 104h]
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
        ; Exact mapped bytes E8 E4 15 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 B0 9D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 AE 21 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 88 9D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 42 32 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 38h
        ; Exact mapped bytes E8 13 32 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD FF 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 110h
        cmp ebp, esp
        ; Exact mapped bytes E8 4C 15 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
