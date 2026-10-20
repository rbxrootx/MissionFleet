// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B9B0 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_0050b9b0_0050B9B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 20h
        ; Exact mapped bytes E8 E6 55 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 EC 22 5E 00: call dword ptr [0x5e22ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x50ba06
        __asm _emit 0x74
        __asm _emit 0x2e
        push 1
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x50ba04
        __asm _emit 0x75
        __asm _emit 0x16
        push 5cbac8h
        push 5cbaf4h
        ; Exact mapped bytes E8 18 42 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x50ba41
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes EB 36: jmp 0x50ba3c
        __asm _emit 0xeb
        __asm _emit 0x36
        push 1
        mov ecx, dword ptr [ebp - 8]
        add ecx, 20h
        ; Exact mapped bytes E8 97 55 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x50ba3c
        __asm _emit 0x75
        __asm _emit 0x16
        push 5cbaf8h
        push 5cbb14h
        ; Exact mapped bytes E8 E0 41 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x50ba41
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
