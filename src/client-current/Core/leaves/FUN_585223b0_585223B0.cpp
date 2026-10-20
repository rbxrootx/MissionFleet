// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585223B0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_585223b0_585223B0() {
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
        ; Exact mapped bytes E8 13 F9 FF FF: call 0x58521cf0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E4 76 F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 91 C6 FF FF: call 0x5851ea90
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1C 79 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
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
        ; Exact mapped bytes E8 24 EC 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
