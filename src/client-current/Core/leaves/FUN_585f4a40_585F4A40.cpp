// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4A40 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_585f4a40_585F4A40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 244h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 23ch], ecx
        mov eax, dword ptr [ebp - 23ch]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 240h], ecx
        push 1
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 68 13 E9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 23ch]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 244h], eax
        push 1
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 B9 C0 10 00: call 0x58700b50
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0x10
        __asm _emit 0x00
        push 588add48h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov dword ptr [ebp - 238h], 0
        push 30h
        push 0
        lea edx, [ebp - 234h]
        push edx
        ; Exact mapped bytes E8 4A 83 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 589604e0h
        lea eax, [ebp - 234h]
        push eax
        ; Exact mapped bytes E8 B4 7D 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7d
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 95 C6 25 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc6
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 238h], eax
        mov edx, dword ptr [ebp - 238h]
        add edx, 31h
        mov dword ptr [ebp - 238h], edx
        push 100h
        push 0
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes E8 FA 82 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x82
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea ecx, [ebp - 234h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes E8 62 7D 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7d
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 43 C6 25 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc6
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        lea edx, [ebp - 1d4h]
        push edx
        ; Exact mapped bytes E8 3C 7D 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7d
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov eax, dword ptr [ebp - 238h]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        push 800h
        push 2
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 BE F7 FF: call 0x58570990
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbe
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CC C4 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc4
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
