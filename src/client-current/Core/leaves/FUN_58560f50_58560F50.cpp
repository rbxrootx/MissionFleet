// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560F50 .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_58560f50_58560F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 12 71 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58560f80
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 3ch]
        push edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 01 6B F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FB 71 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 32 6A F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 3B: je 0x58560fe0
        __asm _emit 0x74
        __asm _emit 0x3b
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 93 6A F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 8C 3A F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax + 20h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 22: jne 0x58560fde
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D5 8F F5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x58560fe0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 91: jmp 0x58560f71
        __asm _emit 0xeb
        __asm _emit 0x91
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8B 70 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58561007
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 48h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 7A 6A F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 74 71 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x71
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 AB 69 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 73: je 0x5856109f
        __asm _emit 0x74
        __asm _emit 0x73
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 0C 6A F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 05 3A F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax + 20h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 57: jne 0x5856109a
        __asm _emit 0x75
        __asm _emit 0x57
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F5 69 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x5856106d
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58561074
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1D 8F F5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 05: jmp 0x5856109f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x58560ff8
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
