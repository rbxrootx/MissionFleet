// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786E10 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58786e10_58786E10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890b1dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D9 99 00 00: call 0x58790830
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b67bch
        push 80h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes E8 96 5F 0C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5f
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        push 588b67b0h
        push 80h
        mov edx, dword ptr [ebp - 10h]
        add edx, 64h
        push edx
        ; Exact mapped bytes E8 ED D2 02 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
