// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487510 .. +0x16F bytes.
extern "C" __declspec(naked) void FUN_58487510_58487510() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d73fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 34h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58894d1ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ch
        ; Exact mapped bytes E8 84 FF FF FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 20h], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 09 0B 00 00: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58487589
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F8 04 00 00: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EC 0B 00 00: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 23 04 00 00: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x5848761f
        __asm _emit 0x74
        __asm _emit 0x6b
        push 1ch
        ; Exact mapped bytes E8 49 9A 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 22: je 0x584875ed
        __asm _emit 0x74
        __asm _emit 0x22
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6D 04 00 00: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A8 86 01 00: call 0x5849fc90
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584875f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 0ch
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 07 0C 00 00: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x5848757a
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ch
        ; Exact mapped bytes E8 16 0C 00 00: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 76 22: jbe 0x58487650
        __asm _emit 0x76
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 10h]
        add edx, 0ch
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CF 03 00 00: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C8 05 00 00: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 0A: jmp 0x5848765a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
