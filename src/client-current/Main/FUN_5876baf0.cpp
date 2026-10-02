// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 233 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876BAF0 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_5876baf0_segment_00() {
    __asm {
        push -1
        push 589899ebh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 FC 9C 58: mov eax, dword ptr [0x589cfc54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x5876bbc8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0b4h
        ; Exact mapped bytes E8 25 11 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x11
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 14h], 0
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5876bb57
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 11ch
        push 11fh
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 3B 7D FF FF: call 0x58763890
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5876bb59
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 54 FC 9C 58: mov dword ptr [0x589cfc54], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 54 FC 9C 58: mov eax, dword ptr [0x589cfc54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        movzx edx, word ptr [eax + 24h]
        add eax, 24h
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes A1 54 FC 9C 58: mov eax, dword ptr [0x589cfc54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        movzx edx, word ptr [eax + 24h]
        add eax, 24h
        mov ecx, 7fffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 54 FC 9C 58: mov esi, dword ptr [0x589cfc54]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, ecx
        mov ecx, dword ptr [esi + 40h]
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5876bbb6
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 9A 73 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x73
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5876bbc3
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 1D 73 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x73
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 FC 9C 58: mov eax, dword ptr [0x589cfc54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        add esp, 10h
        ret
    }
}
