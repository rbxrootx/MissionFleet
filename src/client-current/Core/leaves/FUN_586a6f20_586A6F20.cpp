// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A6F20 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_586a6f20_586A6F20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888afa4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x586a6f53
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x586a7041
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 338h], 0
        ; Exact mapped bytes 74 56: je 0x586a6fb5
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 338h], 0
        ; Exact mapped bytes 74 3D: je 0x586a6fa8
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 338h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x586a6f94
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a6f9b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 338h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 338h], 0
        push 54h
        ; Exact mapped bytes E8 48 A0 18 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa0
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 52: je 0x586a7021
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 39 E7 DE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C7 50 DE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x50
        __asm _emit 0xde
        __asm _emit 0xff
        add eax, 6
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C9 F9 DD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xff
        add eax, 83h
        mov dword ptr [ebp - 30h], eax
        movzx ecx, word ptr [ebp - 0eh]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 04 B3 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a7028
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 338h], edx
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
