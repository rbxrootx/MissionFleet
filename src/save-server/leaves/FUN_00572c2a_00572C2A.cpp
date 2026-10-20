// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572C2A .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00572c2a_00572C2A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f8d7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        mov dword ptr [ebp - 1ch], ecx
        push 193h
        push 67cd14h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 05 76 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 13: jne 0x572c7a
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 98 00 00 00: call dword ptr [eax + 0x98]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x572d48
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x572ca1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x572d48
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5E 20 FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1ch
        ; Exact mapped bytes E8 EF 20 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 0f187h
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C5 21 F9 FF: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0f187h
        push 3
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D1 20 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 02 3E F8 FF: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 74 08: je 0x572cf0
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 6
        ; Exact mapped bytes 74 1D: je 0x572d0b
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes EB 3F: jmp 0x572d2f
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E6 9B F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes EB 3D: jmp 0x572d48
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 F4 00 00 00: call dword ptr [edx + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x572d2f
        __asm _emit 0x75
        __asm _emit 0x12
        push 67cde0h
        push 67ce10h
        ; Exact mapped bytes E8 E9 D8 F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A7 9B F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
