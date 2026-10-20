// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58524FD0 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_58524fd0_58524FD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 128h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 11ch
        idiv ecx
        mov dword ptr [ebp - 128h], eax
        mov edx, dword ptr [ebp - 128h]
        sar edx, 1
        mov dword ptr [ebp - 124h], edx
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 7E 64: jle 0x58525074
        __asm _emit 0x7e
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 124h]
        sub eax, 1
        mov dword ptr [ebp - 124h], eax
        imul ecx, dword ptr [ebp - 124h], 11ch
        add ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 7E 22 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        lea edi, [ebp - 120h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 5C 22 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 91 04 00 00: call 0x58525500
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes EB 93: jmp 0x58525007
        __asm _emit 0xeb
        __asm _emit 0x93
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D0 BF 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbf
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
