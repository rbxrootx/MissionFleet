// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474AC7 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00474ac7_00474AC7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x474ae0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x474b38
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EA 3C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x474afe
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3A: jmp 0x474b38
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov esi, esp
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CC 3C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 C4 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        push 5bb33ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 C4 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 9D 3C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
