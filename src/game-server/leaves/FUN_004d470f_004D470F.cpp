// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D470F .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_004d470f_004D470F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4740
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d4h
        push 5c64b4h
        ; Exact mapped bytes E8 C5 02 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4740
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d471b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B0 A6 01 00: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d476b
        __asm _emit 0x74
        __asm _emit 0x14
        push 1d5h
        push 5c64b4h
        ; Exact mapped bytes E8 9A 02 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d476b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4d4746
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 28h]
        push eax
        push 0
        push 1006h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
