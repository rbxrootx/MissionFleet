// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550B2C .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_00550b2c_00550B2C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f874h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 58a1c4h
        mov dword ptr [ebp - 4], 1
        push 3ah
        push 5cf7b8h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 F3 A5 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 50h
        ; Exact mapped bytes E8 92 23 FE FF: call 0x532f0a
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x550b95
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 50h
        ; Exact mapped bytes E8 72 23 FE FF: call 0x532ef9
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 5cf88ch
        ; Exact mapped bytes E8 83 F0 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 40 02 00 00: call 0x550ddd
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 59: je 0x550bff
        __asm _emit 0x74
        __asm _emit 0x59
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 51 02 00 00: call 0x550e03
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 11: jne 0x550bcc
        __asm _emit 0x75
        __asm _emit 0x11
        push 47h
        push 5cf7b8h
        ; Exact mapped bytes E8 39 3E FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550bcc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x550bb5
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x550bf6
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x550bfd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB A1: jmp 0x550ba0
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x550c24
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x550bff
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 D6 FD FF: call 0x52e283
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 50h
        ; Exact mapped bytes E8 B6 71 F9 FF: call 0x4e7e04
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x71
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B2 A6 FB FF: call 0x50b30f
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
