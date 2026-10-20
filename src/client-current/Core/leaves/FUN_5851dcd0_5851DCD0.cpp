// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DCD0 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_5851dcd0_5851DCD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881568h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0c4h
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
        mov dword ptr [ebp - 38h], ecx
        push 1
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 F5 F6 FF FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 7F FC FF FF: call 0x5851d9a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 28h]
        push ecx
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 CF 04 00 00: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4E 00 00 00: call 0x5851dda0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 29h], al
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 CF BF F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0d0h]
        ; Exact mapped bytes E8 9D FE FF FF: call 0x5851dc10
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 29h]
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
        ; Exact mapped bytes E8 C4 32 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x32
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
