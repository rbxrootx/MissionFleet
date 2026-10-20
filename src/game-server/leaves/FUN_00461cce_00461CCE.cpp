// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461CCE .. +0x162 bytes.
extern "C" __declspec(naked) void FUN_00461cce_00461CCE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A5 D6 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 48h
        ; Exact mapped bytes E8 B0 F9 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 48h
        ; Exact mapped bytes E8 37 FA 0C 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 4ch], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 4ch]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 7E 53: jle 0x461d70
        __asm _emit 0x7e
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 4ch], 18h
        ; Exact mapped bytes 7D 4A: jge 0x461d70
        __asm _emit 0x7d
        __asm _emit 0x4a
        push -1
        push 0
        push 0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 48h
        ; Exact mapped bytes E8 EA F9 0C 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 48h
        ; Exact mapped bytes E8 C0 F9 0C 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 48h
        ; Exact mapped bytes E8 97 F9 0C 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 9E D3 06 00: call 0x4cf100
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 58h
        ; Exact mapped bytes E8 40 F9 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 45: jmp 0x461db5
        __asm _emit 0xeb
        __asm _emit 0x45
        push -1
        push 0
        push 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 50h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 48h
        ; Exact mapped bytes E8 A0 F9 0C 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 48h
        ; Exact mapped bytes E8 79 F9 0C 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 48h
        ; Exact mapped bytes E8 50 F9 0C 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 57 D3 06 00: call 0x4cf100
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 58h
        ; Exact mapped bytes E8 F9 F8 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 D9 D5 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd5
        __asm _emit 0x06
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 CD F8 0C 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf8
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 58h
        ; Exact mapped bytes E8 CC F9 0C 00: call 0x5317a2
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 63 F6 0C 00: call 0x531442
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 23 F7 0C 00: call 0x53150a
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0x0c
        __asm _emit 0x00
        imul eax, eax, 3e8h
        cdq
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x461e1d
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        push 8
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 10000h
        push 8002c001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C 54 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x461e1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 B6 69 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
