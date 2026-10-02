// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521FF0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58521ff0() {
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
        ; Exact mapped bytes E8 73 FD FF FF: call 0x58521d90
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A4 7A F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A1 DC FF FF: call 0x5851fce0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA 3C FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D8 7C F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 E0 EF 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xef
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
