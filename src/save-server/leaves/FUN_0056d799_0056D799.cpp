// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056D799 .. +0x14E bytes.
extern "C" __declspec(naked) void FUN_0056d799_0056D799() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fe0eh
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
        push ecx
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a8h
        mov dword ptr [ebp - 30h], eax
        push 317h
        push 67d450h
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 87 CA F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xca
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 09: jne 0x56d80a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 35: jmp 0x56d83f
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 78 87 EF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x87
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], esp
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 94 B5 EE FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2F: je 0x56d88f
        __asm _emit 0x74
        __asm _emit 0x2f
        push 320h
        push 67d450h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 ED C9 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 38 C3 68 00: call dword ptr [0x68c338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x56d88b
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 7F: jmp 0x56d90a
        __asm _emit 0xeb
        __asm _emit 0x7f
        xor eax, eax
        ; Exact mapped bytes EB 7B: jmp 0x56d90a
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov dword ptr [ebp - 20h], 800401e5h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 07: je 0x56d8c5
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 39: jmp 0x56d900
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BC C8 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc8
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56d8ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 32fh
        push 67d450h
        ; Exact mapped bytes E8 59 B4 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
    }
}
