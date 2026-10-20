// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866D580 .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_5866d580_5866D580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 B2 40 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x40
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 0F 8C 8A 01 00 00: jl 0x5866d738
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 97 40 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x40
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        push 589604e0h
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x5866d5f0
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes E8 22 9C E6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0
        push 0
        push 0
        push 1cah
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8C B7 E6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb7
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 11 2F E6 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x2f
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 55 40 E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x40
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 31h
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 31 3A 1C 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3a
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 3ch], edx
        push 30h
        push 0
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 E6 F7 1D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf7
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 D4 F7 1D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf7
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        push 589604e0h
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5B E7 14 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe7
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 74h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 C1 3F E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3f
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 30h
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 E7 F1 1D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf1
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 99 3F E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3f
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 84 3F E6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, 30h
        push eax
        ; Exact mapped bytes E8 AD F1 1D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf1
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        push 0
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 19 F1 FF: call 0x5857f0c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x5866d728
        __asm _emit 0x75
        __asm _emit 0x25
        push 588afd20h
        ; Exact mapped bytes E8 E3 48 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 2C 07 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5866d754
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 B3 9A E6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 0
        push 0
        push 0
        push 1a4h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 1D B6 E6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb6
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F2 38 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
