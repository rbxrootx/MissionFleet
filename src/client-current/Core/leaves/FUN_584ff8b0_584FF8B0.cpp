// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF8B0 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_584ff8b0_584FF8B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fecch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
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
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 9
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 51 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 11 6F F8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588a33e8h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 03 00 00: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 101h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8A 5C 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5c
        __asm _emit 0x2b
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 10 65 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 66 64 F8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        push 54h
        ; Exact mapped bytes E8 B0 16 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x16
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x584ff996
        __asm _emit 0x74
        __asm _emit 0x32
        push 0bch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 51 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push -1
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8F 29 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ff99d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 24h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EA 5B 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x5b
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 67 64 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B4 63 F8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
