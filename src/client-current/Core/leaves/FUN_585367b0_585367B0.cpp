// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585367B0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_585367b0_585367B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882b07h
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
        push 84h
        ; Exact mapped bytes E8 25 A8 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa8
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 11: je 0x58536803
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 98 04 00: call 0x585800d0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853680a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 15 00 06 96 58: mov dword ptr [0x58960600], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1B: je 0x58536841
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes A1 04 06 96 58: mov eax, dword ptr [0x58960604]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
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
