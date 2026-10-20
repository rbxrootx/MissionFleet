// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58525660 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_58525660_58525660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 120h
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
        cmp eax, 2
        ; Exact mapped bytes 7C 4F: jl 0x585256d7
        __asm _emit 0x7c
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 11ch
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 13 1C F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        lea edi, [ebp - 120h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes E8 F1 1B F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3C FF FF FF: call 0x58525610
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6D B9 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb9
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
