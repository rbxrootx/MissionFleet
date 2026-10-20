// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502220 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_58502220_58502220() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588800adh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
        push esi
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
        ; Exact mapped bytes C7 05 38 72 94 58 03 00 00 00: mov dword ptr [0x58947238], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 14h], esp
        push 588a39b0h
        ; Exact mapped bytes E8 6E 78 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 45 0C 00 00: call 0x58502eb0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 BC 0A 00 00: call 0x58502d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DF 0B 00 00: call 0x58502e70
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 86 03 FA FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x585022cc
        __asm _emit 0x74
        __asm _emit 0x2b
        sub esp, 18h
        mov esi, esp
        mov dword ptr [ebp - 20h], esp
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7F FD FF FF: call 0x58502030
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 77 FA FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E8 F2 13 00 00: call 0x585036b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A7 FD FF FF: call 0x58502070
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B9: jmp 0x58502285
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A5 FC FF FF: call 0x58501f80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
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
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
