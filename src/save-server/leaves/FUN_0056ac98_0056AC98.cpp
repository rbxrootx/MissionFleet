// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056AC98 .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_0056ac98_0056AC98() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fd68h
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
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 0d4h], 0
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x56add3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 13 A0 FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 28: je 0x56ad29
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x56ad1b
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f7h
        push 67d38ch
        ; Exact mapped bytes E8 2A E0 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ad1b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x56ad01
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 27: jmp 0x56ad50
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 21: je 0x56ad50
        __asm _emit 0x74
        __asm _emit 0x21
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 5D A0 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 07: jne 0x56ad5d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 687204h
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 09: jne 0x56ad72
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 36: jmp 0x56ada8
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 0F B2 EF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb2
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 4B 28 EE FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x28
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 19 1B F6 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x1b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 94h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 90h], eax
        mov eax, dword ptr [ebp - 18h]
        lea esp, [ebp - 40h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
