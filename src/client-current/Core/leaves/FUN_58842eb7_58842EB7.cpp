// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58842EB7 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_58842eb7_58842EB7() {
    __asm {
        push ebp
        mov ebp, esp
        push -2
        push 588ecbb8h
        push 5884ed90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor dword ptr [ebp - 8], eax
        xor eax, ebp
        push eax
        lea eax, [ebp - 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], esp
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 75 07: jne 0x58842efc
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x58842fbf
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 138h
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 09: je 0x58842f19
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 08: jne 0x58842f21
        __asm _emit 0x75
        __asm _emit 0x08
        push 6ch
        pop eax
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x58842fbf
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 05 98 93 96 58: movzx eax, byte ptr [0x58969398]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 08: jne 0x58842f35
        __asm _emit 0x75
        __asm _emit 0x08
        push 6bh
        pop eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x58842fbf
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, 5896939ch
        ; Exact mapped bytes E8 F8 CC FF FF: call 0x5883fc39
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 4], 0
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7D 00 00 00: call 0x58842fd3
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes EB 4E: jmp 0x58842fb0
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 24h], eax
        xor eax, eax
        inc eax
        ret
        mov esp, dword ptr [ebp - 18h]
        ; Exact mapped bytes C6 05 98 93 96 58 01: mov byte ptr [0x58969398], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
    }
}
