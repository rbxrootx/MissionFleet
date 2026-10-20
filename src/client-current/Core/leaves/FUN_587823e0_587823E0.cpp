// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587823E0 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_587823e0_587823E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fbf0h
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b5e68h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 3f4h], 0
        ; Exact mapped bytes 74 3D: je 0x5878245a
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3f4h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x58782446
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878244d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3f4h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 420h], 0
        ; Exact mapped bytes 74 3D: je 0x587824a3
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 420h]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x5878248f
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58782496
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 420h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 34 D1 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x34
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x587824dd
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 34 D1 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x34
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 1B: jne 0x587824dd
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 33 D1 FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x33
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 84 04 00 00: call 0x58782960
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B BA 03 00: call 0x587bdf10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        nop
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
