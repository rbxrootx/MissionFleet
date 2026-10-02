// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9AD0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_584a9ad0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e03dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
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
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        movzx ecx, byte ptr [ebp - 0dh]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E5 F3 FF FF: call 0x584a8ef0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 95 0C 00 00: call 0x584aa7b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 8C D7 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C F6 FF FF: call 0x584a91d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
