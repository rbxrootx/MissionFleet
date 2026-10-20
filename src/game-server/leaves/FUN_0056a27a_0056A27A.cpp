// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A27A .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_0056a27a_0056A27A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fdf7h
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
        push 5d053ch
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 B5 0E F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 13: jne 0x56a2ca
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
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x56a398
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
        ; Exact mapped bytes 75 0A: jne 0x56a2f1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x56a398
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0E 6C FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1ch
        ; Exact mapped bytes E8 9F 6C FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 0f187h
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 65 19 FB FF: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0f187h
        push 3
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 81 6C FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 52 35 FA FF: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 74 08: je 0x56a340
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 6
        ; Exact mapped bytes 74 1D: je 0x56a35b
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes EB 3F: jmp 0x56a37f
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F6 34 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes EB 3D: jmp 0x56a398
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
        ; Exact mapped bytes 75 12: jne 0x56a37f
        __asm _emit 0x75
        __asm _emit 0x12
        push 5d0608h
        push 5d0638h
        ; Exact mapped bytes E8 99 58 F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B7 34 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x34
        __asm _emit 0xf8
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
