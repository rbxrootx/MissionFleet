// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851EA10 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_5851ea10_5851EA10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ff5dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 E8 5B 29 00: call 0x587b4630
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4C 01 00 00: call 0x5851ebb0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 BD B2 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 C7 25 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x25
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
