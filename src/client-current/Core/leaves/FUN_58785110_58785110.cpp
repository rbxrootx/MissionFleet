// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785110 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_58785110_58785110() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588909e7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9E 0F D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0f
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        push 0d74h
        ; Exact mapped bytes E8 B7 BE 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 15: je 0x58785175
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D0 9D FC FF: call 0x5874ef40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878517c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 02: jne 0x58785197
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 72: jmp 0x58785209
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 08 6F D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6f
        __asm _emit 0xd0
        __asm _emit 0xff
        add eax, 11h
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0A 18 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x18
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 57 04 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 04 2C FA FF: call 0x58727de0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 34h], edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AB 62 FA FF: call 0x5872b4a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 64h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
