// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005043AC .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_005043ac_005043AC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0aeh
        push 677834h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 95 5E FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x5043d8
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x5044a4
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5043f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b3h
        push 677834h
        ; Exact mapped bytes E8 53 49 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5043f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5043d8
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5F F0 F9 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50441f
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b4h
        push 677834h
        ; Exact mapped bytes E8 26 49 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50441f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x5043f8
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 14h]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 76 04: jbe 0x504437
        __asm _emit 0x76
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6D: jmp 0x5044a4
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 76 11: jbe 0x504459
        __asm _emit 0x76
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 1ch]
        sub ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 06: jmp 0x50445f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], edx
        push 0c2h
        push 677834h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 BF 5D FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
