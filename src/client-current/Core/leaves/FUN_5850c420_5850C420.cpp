// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C420 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_5850c420_5850C420() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880afdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
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
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 2ch]
        add eax, 40h
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 6F 9E FF FF: call 0x585062d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9C C8 FF FF: call 0x58508d10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 11: je 0x5850c48c
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 75 BC FB FF: call 0x584c8100
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 8E FB FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        or edx, 1
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 80 D8 F9 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes E8 88 4B 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4b
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
