// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004208A0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_004208a0_004208A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a0a9h
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
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 66 87 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 77 07 00 00: call 0x421060
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 3B 05 3C 2F 5D 00: cmp eax, dword ptr [0x5d2f3c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x420953
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 B1 EC FF FF: call 0x41f5c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        ; Exact mapped bytes E8 42 EC FF FF: call 0x41f560
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x42093a
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 D0 EC FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 17: jmp 0x420951
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A7 EC FF FF: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB A4: jmp 0x4208f7
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B8 87 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
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
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 61 7E 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
