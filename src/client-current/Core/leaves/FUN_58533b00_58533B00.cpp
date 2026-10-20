// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58533B00 .. +0x1DD bytes.
extern "C" __declspec(naked) void FUN_58533b00_58533B00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588829ddh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3ch
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
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 A3 39 F5 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x39
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58533b46
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 62 0D 00 00: call 0x585348b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 0F 83 E9 00 00 00: jae 0x58533c40
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 E1 46 F5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7C 6D: jl 0x58533bd1
        __asm _emit 0x7c
        __asm _emit 0x6d
        push 0
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 A2 3E F5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 C7 46 F5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push -1
        push 1
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 20 41 89 58: call dword ptr [0x58894120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58533ba1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 97 46 F5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 73 18: jae 0x58533bc6
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 56 3E F5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB D2: jmp 0x58533b98
        __asm _emit 0xeb
        __asm _emit 0xd2
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 22 45 F5 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x45
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 86: jmp 0x58533b57
        __asm _emit 0xeb
        __asm _emit 0x86
        push 10h
        ; Exact mapped bytes E8 2C D4 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd4
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 90 42 FF FF: call 0x58527e80
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 0ch], edx
        lea eax, [ebp - 3ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 58534090h
        push 0
        push 0
        ; Exact mapped bytes E8 47 43 32 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x43
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [ebp - 30h], eax
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 E6 45 F5 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x45
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FD FE FF FF: jmp 0x58533b3d
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B8 0B 00 00: call 0x58534800
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 62: jne 0x58533cb1
        __asm _emit 0x75
        __asm _emit 0x62
        push 0
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B7 3D F5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 DC 45 F5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x45
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push -1
        push 1
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 20 41 89 58: call dword ptr [0x58894120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58533c8c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 AC 45 F5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 73 18: jae 0x58533cb1
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 6B 3D F5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB D2: jmp 0x58533c83
        __asm _emit 0xeb
        __asm _emit 0xd2
        ; Exact mapped bytes E8 FA 04 00 00: call 0x585341b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov byte ptr [ebp - 0dh], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 16 3B F5 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3b
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 0dh]
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
        ret
    }
}
