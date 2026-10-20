// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58613300 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_58613300_58613300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x586133cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 3F 17 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x17
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 DF 16 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xdf
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 25: je 0x5861336c
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 2A 14 00: call 0x58755e10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x2a
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C E3 F5 FF: call 0x585716d0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 27 16 00: call 0x58775b50
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 17 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x17
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2F 8A 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8a
        __asm _emit 0x1a
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 16 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x16
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 27 E7 FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x27
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 36: jmp 0x58613402
        __asm _emit 0xeb
        __asm _emit 0x36
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 2A E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x2a
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        movzx ecx, word ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 02: je 0x586133e6
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1C: jmp 0x58613402
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 05 3E EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 12eh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6F 59 EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
