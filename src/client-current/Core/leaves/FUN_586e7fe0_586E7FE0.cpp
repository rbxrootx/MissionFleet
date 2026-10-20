// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E7FE0 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_586e7fe0_586E7FE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c9cdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
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
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A2 F2 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 69 F2 D9 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 8A F2 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 51 F2 D9 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 0dh], 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B7 F3 D9 FF: call 0x58487400
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf3
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586e805b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 18h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 0F: je 0x586e8072
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B1 F9 FF FF: call 0x586e7a20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB E0: jmp 0x586e8052
        __asm _emit 0xeb
        __asm _emit 0xe0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D6 FE D9 FF: call 0x58487f50
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 74 ED E1 FF: call 0x58506e00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
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
        ret
    }
}
