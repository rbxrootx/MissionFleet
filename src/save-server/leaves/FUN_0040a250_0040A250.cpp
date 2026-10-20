// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A250 .. +0x1A4 bytes.
extern "C" __declspec(naked) void FUN_0040a250_0040A250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 998h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 998h]
        mov ecx, 266h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 14 78 FF FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 C0 73 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 24h
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 12 B6 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 900h
        lea edx, [ebp - 954h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 CF 6F FF FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 92 76 FF FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 66 C7 45 B4 00 00: mov word ptr [ebp - 0x4c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 40c78h]
        ; Exact mapped bytes E8 C8 73 FF FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 958h], 0
        ; Exact mapped bytes EB 0F: jmp 0x40a338
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 958h]
        add eax, 1
        mov dword ptr [ebp - 958h], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x40a3d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 958h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 03 73 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 70: je 0x40a3d4
        __asm _emit 0x74
        __asm _emit 0x70
        push 24h
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 8A 75 FF FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x40a3d4
        __asm _emit 0x74
        __asm _emit 0x54
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 4E: jne 0x40a3d4
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 40c78h]
        ; Exact mapped bytes E8 DB 75 FF FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 66 C7 45 B4 00 00: mov word ptr [ebp - 0x4c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 54h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 11 73 FF FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x40a329
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 998h
        cmp ebp, esp
        ; Exact mapped bytes E8 02 AA 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
