// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B14D .. +0x227 bytes.
extern "C" __declspec(naked) void FUN_0056b14d_0056B14D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov dword ptr [ebp - 54h], ecx
        push 170h
        push 67d38ch
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 F7 F0 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 28 19 FC FF: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 174h
        push 67d38ch
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 D9 F0 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 26: je 0x56b1cb
        __asm _emit 0x74
        __asm _emit 0x26
        push 17dh
        push 67d38ch
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 A8 F0 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F9 DA 00 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x56b1cb
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        push 3fffffffh
        push 3fffffffh
        push 0
        push 0
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 F4 6F FC FF: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 DE 6F FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        lea edx, [ebp - 4ch]
        push edx
        lea eax, [ebp - 34h]
        push eax
        push 1
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 DF 81 F6 FF: call 0x4d33e8
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x81
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 104h
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, 3fffffffh
        sub eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, 3fffffffh
        sub edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        mov dword ptr [ebp - 4], eax
        push 0e900h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 09 AB F6 FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xab
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x56b2f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 104h
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 40h], eax
        push 1
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 104h]
        sub edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 10h]
        sub eax, edx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 108h]
        sub edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 0ch]
        sub eax, edx
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 44h]
        sub edx, dword ptr [ecx + 10ch]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 40h]
        sub edx, dword ptr [ecx + 110h]
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B6 6E FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 54h]
        add eax, 114h
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 A9 72 FC FF: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x72
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 0
        ; Exact mapped bytes E8 FA 82 F6 FF: call 0x4d3632
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 89 C6 F7 FF: call 0x4e79cd
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 FD C5 F7 FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        push 1
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        push 0
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 7A 80 F6 FF: call 0x4d33e8
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x80
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
