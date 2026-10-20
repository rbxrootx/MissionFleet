// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CAD0 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_5857cad0_5857CAD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 8
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 59 45 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        push 8
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 0E 03 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 12: je 0x5857cb1d
        __asm _emit 0x74
        __asm _emit 0x12
        push 4
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 76 FD 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 15: je 0x5857cb38
        __asm _emit 0x74
        __asm _emit 0x15
        push 4
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 5B FD 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 8001311fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 FE 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E4 44 2B 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x44
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
