// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58503A50 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_58503a50_58503A50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588802ach
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
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
        movzx eax, word ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B E8 F7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a3a44h
        push 68h
        ; Exact mapped bytes E8 58 D5 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd5
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x58503ad3
        __asm _emit 0x74
        __asm _emit 0x17
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 92 CD 26 00: call 0x58770860
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcd
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58503ada
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DE 04 00 00: call 0x58503fe0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 99 05 00 00: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 64h], 1
        ; Exact mapped bytes 75 10: jne 0x58503b42
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 76 1D F9 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], eax
        ; Exact mapped bytes EB 0E: jmp 0x58503b50
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 1D F9 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 21 36 FD FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        imul eax, dword ptr [ecx + 68h]
        mov ecx, dword ptr [ebp - 10h]
        cdq
        idiv dword ptr [ecx + 54h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 6ch], 0
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
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
