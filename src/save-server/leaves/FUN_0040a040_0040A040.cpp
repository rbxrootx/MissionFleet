// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A040 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_0040a040_0040A040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 98h]
        mov ecx, 26h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 24 7A FF FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 D0 75 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 24h
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 22 B8 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x40a0b3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        add edx, 1
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x40a1c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 8B 75 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x40a1bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 0E 78 FF FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x40a1bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x40a1bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        push 24h
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 88 77 FF FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        push 633134h
        ; Exact mapped bytes E8 DA 64 09 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 23 78 FF FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 40c84h]
        ; Exact mapped bytes E8 CE 78 FF FF: call 0x401a46
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        push 24h
        push 0
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 3B B7 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 C7 45 B4 04 00: mov word ptr [ebp - 0x4c], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 26 75 FF FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E6 FE FF FF: jmp 0x40a0aa
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 98h
        cmp ebp, esp
        ; Exact mapped bytes E8 17 AC 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
