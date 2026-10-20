// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411EA0 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_00411ea0_00411EA0() {
    __asm {
        mov eax, 43a494h
        ; Exact mapped bytes E8 5E D7 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 10h], esp
        mov esi, ecx
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 B5 A6 01 00: call 0x42c576
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp - 14h]
        mov edi, eax
        push edi
        push esi
        ; Exact mapped bytes E8 32 02 00 00: call 0x4120ff
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x411edb
        __asm _emit 0x75
        __asm _emit 0x0a
        push dword ptr [ebp - 14h]
        push esi
        push edi
        ; Exact mapped bytes E8 3B FA FF FF: call 0x411916
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push dword ptr [ebp - 14h]
        and dword ptr [ebp - 4], 0
        mov ecx, esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov eax, dword ptr [esi]
        push dword ptr [ebp - 14h]
        mov ecx, esi
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        push 2
        pop ebx
        push -3
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F5 F9 FF FF: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 EC: je 0x411ef6
        __asm _emit 0x74
        __asm _emit 0xec
        push dword ptr [ebp - 14h]
        push edi
        push esi
        ; Exact mapped bytes E8 EB 01 00 00: call 0x4120ff
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x411f24
        __asm _emit 0x75
        __asm _emit 0x0c
        push dword ptr [ebp - 14h]
        push esi
        push edi
        ; Exact mapped bytes E8 F4 F9 FF FF: call 0x411916
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5E: jmp 0x411f82
        __asm _emit 0xeb
        __asm _emit 0x5e
        lea eax, [ebp + 0ah]
        push eax
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 40 A6 01 00: call 0x42c570
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 EF: je 0x411f24
        __asm _emit 0x74
        __asm _emit 0xef
        ; Exact mapped bytes 66 83 7D 0A 00: cmp word ptr [ebp + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x411f5f
        __asm _emit 0x74
        __asm _emit 0x23
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AE F9 FF FF: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 F1: je 0x411f3c
        __asm _emit 0x74
        __asm _emit 0xf1
        push dword ptr [ebp - 14h]
        push edi
        push esi
        ; Exact mapped bytes E8 AA 01 00 00: call 0x4120ff
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x411f5f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 FF 64: cmp di, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x64
        ; Exact mapped bytes 75 DD: jne 0x411f3c
        __asm _emit 0x75
        __asm _emit 0xdd
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 03 A6 01 00: call 0x42c56a
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 F1: je 0x411f5f
        __asm _emit 0x74
        __asm _emit 0xf1
        push dword ptr [ebp - 14h]
        push edi
        push esi
        ; Exact mapped bytes E8 87 01 00 00: call 0x4120ff
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x411f82
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 FF 64: cmp di, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x64
        ; Exact mapped bytes 75 A2: jne 0x411f24
        __asm _emit 0x75
        __asm _emit 0xa2
        push 1
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D8 A5 01 00: call 0x42c564
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
