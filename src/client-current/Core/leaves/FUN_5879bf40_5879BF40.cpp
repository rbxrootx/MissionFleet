// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879BF40 .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_5879bf40_5879BF40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891da5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        push esi
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
        push 588b7450h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 1D CC FF FF: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp - 24h]
        push eax
        push 588b73d4h
        mov ecx, esi
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 F3 D1 FF FF: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C D0 FF FF: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 DD CF FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b74cch
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 E0 CB FF FF: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 4], 1
        push eax
        push 588b73c8h
        mov ecx, esi
        ; Exact mapped bytes E8 B9 D1 FF FF: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 D0 FF FF: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 A3 CF FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 89 CD FF FF: call 0x58798d70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 4], 2
        push eax
        push 588b73f4h
        mov ecx, esi
        ; Exact mapped bytes E8 82 D1 FF FF: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FB CF FF FF: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 6C CF FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 52 CD FF FF: call 0x58798d70
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 4], 3
        push eax
        push 588b740ch
        mov ecx, esi
        ; Exact mapped bytes E8 4B D1 FF FF: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 CF FF FF: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 35 CF FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 1B CD FF FF: call 0x58798d70
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 4], 4
        push eax
        push 588b7424h
        mov ecx, esi
        ; Exact mapped bytes E8 14 D1 FF FF: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D CF FF FF: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 FE CE FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 E4 CC FF FF: call 0x58798d70
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 5
        lea eax, [ebp - 24h]
        mov ecx, esi
        push eax
        push 588b7438h
        ; Exact mapped bytes E8 DD D0 FF FF: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 CF FF FF: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 C7 CE FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push 11h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 5D CA FF FF: call 0x58798b20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 4], 6
        push eax
        push 588b7444h
        mov ecx, esi
        ; Exact mapped bytes E8 A6 D0 FF FF: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F CF FF FF: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 90 CE FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b7484h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 93 CA FF FF: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 3ch]
        mov dword ptr [ebp - 4], 7
        push eax
        push 588b73e4h
        mov ecx, esi
        ; Exact mapped bytes E8 6C D0 FF FF: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 CE FF FF: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 5D CE FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
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
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
