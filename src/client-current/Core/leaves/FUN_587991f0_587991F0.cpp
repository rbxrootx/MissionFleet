// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587991F0 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_587991f0_587991F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588917c0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0bch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ebx, dword ptr [ebp + 8]
        and eax, 0ffh
        ; Exact mapped bytes 74 42: je 0x5879926f
        __asm _emit 0x74
        __asm _emit 0x42
        cmp eax, 6
        ; Exact mapped bytes 75 60: jne 0x58799292
        __asm _emit 0x75
        __asm _emit 0x60
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 2ch], ebx
        mov edi, dword ptr [esi]
        lea eax, [ebp - 30h]
        push eax
        lea eax, [ebp - 1ch]
        mov dword ptr [ebp - 4], 2
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 DC F2 FF FF: call 0x58798530
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 75 05: jne 0x58799262
        __asm _emit 0x75
        __asm _emit 0x05
        cmp ebx, dword ptr [ecx + 14h]
        ; Exact mapped bytes 73 02: jae 0x58799264
        __asm _emit 0x73
        __asm _emit 0x02
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 05: je 0x5879926f
        __asm _emit 0x74
        __asm _emit 0x05
        lea eax, [ecx + 18h]
        ; Exact mapped bytes EB 05: jmp 0x58799274
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 DC 15 00 00: call 0x5879a850
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
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
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 C4 7D 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 61 41 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x41
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c8h]
        mov dword ptr [ebp - 4], 0
        push 588b6f98h
        push eax
        ; Exact mapped bytes E8 39 B3 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb3
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 37 4F D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4f
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 5D 1A 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
