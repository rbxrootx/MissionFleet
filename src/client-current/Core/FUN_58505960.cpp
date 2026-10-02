// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505960 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58505960() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888039dh
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
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F2 18 F8 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x18
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 E3 18 F8 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x18
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 4D 1A F8 FF: call 0x58487400
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585059c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 18: je 0x585059e5
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DA 18 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x18
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 6E F1 FF FF: call 0x58504b50
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x585059bc
        __asm _emit 0xeb
        __asm _emit 0xd7
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 63 25 F8 FF: call 0x58487f50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x25
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 01 14 00 00: call 0x58506e00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
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
