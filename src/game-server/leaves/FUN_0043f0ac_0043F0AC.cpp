// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F0AC .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_0043f0ac_0043F0AC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40ca8h]
        mov ecx, dword ptr [eax + 18f8h]
        ; Exact mapped bytes E8 EA A6 0A 00: call 0x4e97d1
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x43f156
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        add ecx, 150h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D8 96 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2E: jne 0x43f13a
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC 7B FF FF: call 0x436ce0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 1C: je 0x43f135
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40ca8h]
        mov ecx, dword ptr [edx + 18f8h]
        ; Exact mapped bytes E8 E1 A7 0A 00: call 0x4e9912
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa7
        __asm _emit 0x0a
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 23: jmp 0x43f158
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 1E: jmp 0x43f158
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40ca8h]
        mov ecx, dword ptr [edx + 18f8h]
        ; Exact mapped bytes E8 C0 A7 0A 00: call 0x4e9912
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa7
        __asm _emit 0x0a
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x43f158
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 7D 96 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
