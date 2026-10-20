// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585222A0 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_585222a0_585222A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588818dbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 140h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 32 AB 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xab
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588a42fch
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 F5 EA F8 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xea
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        push 588a4300h
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 C2 77 F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 110h]
        push eax
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 A9 77 F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 148h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 148h]
        push edx
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 D1 FD FD FF: call 0x58502120
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 D2 79 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 D6 39 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 80 FC FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 A5 79 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14ch]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 AA EC 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xec
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
