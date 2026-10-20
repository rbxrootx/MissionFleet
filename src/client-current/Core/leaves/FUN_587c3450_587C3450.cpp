// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3450 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_587c3450_587C3450() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        ; Exact mapped bytes FF 15 90 45 89 58: call dword ptr [0x58894590]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 1ch
        push eax
        push 588d19e8h
        push 2
        push 1
        ; Exact mapped bytes E8 3B 4A D6 FF: call 0x58527eb0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x4a
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        push eax
        push 0
        push 588d19f8h
        ; Exact mapped bytes FF 15 94 45 89 58: call dword ptr [0x58894594]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x587c349b
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x587c3572
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 20h
        push edx
        push 588d19a8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x587c34d9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        xor eax, eax
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x587c3572
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 24h
        push edx
        push 588d19d8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x587c351e
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], 0
        xor eax, eax
        ; Exact mapped bytes EB 54: jmp 0x587c3572
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        add eax, 28h
        push eax
        push 588d19c8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x587c356d
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 0
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x587c3572
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
