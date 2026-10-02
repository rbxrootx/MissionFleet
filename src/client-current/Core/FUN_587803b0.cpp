// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587803B0 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_587803b0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889078dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
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
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6A 63 03 00: call 0x587b6750
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588b5b58h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 51: je 0x5878044d
        __asm _emit 0x74
        __asm _emit 0x51
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1A 47 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x47
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD 46 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x46
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 46 D0 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x46
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 24: jne 0x5878044d
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 1E: jne 0x5878044d
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 18: jne 0x5878044d
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 12: jne 0x5878044d
        __asm _emit 0x75
        __asm _emit 0x12
        push 2
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D A4 20 96 58: mov ecx, dword ptr [0x589620a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 13 D7 FF: call 0x584f1750
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
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
        ret 0ch
    }
}
