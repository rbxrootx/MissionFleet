// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFDBE .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004cfdbe_004CFDBE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, 686a34h
        ; Exact mapped bytes E8 44 D8 06 00: call 0x53d610
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 5E: je 0x4cfe36
        __asm _emit 0x74
        __asm _emit 0x5e
        cmp dword ptr [ebp + 0ch], 135h
        ; Exact mapped bytes 74 24: je 0x4cfe05
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp + 0ch], 136h
        ; Exact mapped bytes 74 1B: je 0x4cfe05
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp + 0ch], 138h
        ; Exact mapped bytes 74 12: je 0x4cfe05
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 0ch], 137h
        ; Exact mapped bytes 74 09: je 0x4cfe05
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 0ch], 134h
        ; Exact mapped bytes 75 31: jne 0x4cfe36
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 132h
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 19 45 00 00: call 0x4d4343
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4cfe36
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes EB 15: jmp 0x4cfe4b
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FD FC FF FF: call 0x4cfb48
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
