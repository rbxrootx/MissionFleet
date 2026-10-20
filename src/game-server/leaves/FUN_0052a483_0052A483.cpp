// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A483 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_0052a483_0052A483() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 05: jne 0x52a49d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x52a549
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        push 367h
        push 367h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x52a4f2
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        push 0
        push 367h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 28 5E 00: call dword ptr [0x5e28b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52a4ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f6h
        push 5c8fcch
        ; Exact mapped bytes E8 19 A5 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a4ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CC: jne 0x52a4be
        __asm _emit 0x75
        __asm _emit 0xcc
        ; Exact mapped bytes FF 15 1C 27 5E 00: call dword ptr [0x5e271c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 06: jne 0x52a506
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E7 A8 FC FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0feh
        push 5c8fcch
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 3C 0C FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 50h], 0
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E4 16 01 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
