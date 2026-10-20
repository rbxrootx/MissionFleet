// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E40E .. +0x17B bytes.
extern "C" __declspec(naked) void FUN_0054e40e_0054E40E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 30h], 0
        ; Exact mapped bytes 74 14: je 0x54e435
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 30h]
        push eax
        ; Exact mapped bytes E8 C6 50 F5 FF: call 0x4a34f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x54e43c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 34h], 0
        ; Exact mapped bytes 74 20: je 0x54e468
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 34h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54e468
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 34h]
        push ecx
        ; Exact mapped bytes E8 93 50 F5 FF: call 0x4a34f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0C: jmp 0x54e474
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 30h]
        mov dword ptr [ebp + 34h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 8], 34h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*2]
        push eax
        push 2042h
        ; Exact mapped bytes FF 15 84 23 5E 00: call dword ptr [0x5e2384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x54e4a3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x54e583
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp + 30h], 0
        ; Exact mapped bytes 74 21: je 0x54e4d7
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 2ch], eax
        mov ecx, dword ptr [ebp + 30h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes E8 2E 50 F5 FF: call 0x4a3500
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 0A: jmp 0x54e4e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2ch], 0
        cmp dword ptr [ebp + 34h], 0
        ; Exact mapped bytes 74 27: je 0x54e50e
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*2]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], ecx
        mov eax, dword ptr [ebp + 34h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ecx + 30h]
        push edx
        ; Exact mapped bytes E8 F7 4F F5 FF: call 0x4a3500
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x4f
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 0A: jmp 0x54e518
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*2]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 10h]
        add edx, 4
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 18h], edx
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [ecx + 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 2ch]
        mov dword ptr [ecx + 28h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 30 00: ret 0x30
        __asm _emit 0xc2
        __asm _emit 0x30
        __asm _emit 0x00
    }
}
