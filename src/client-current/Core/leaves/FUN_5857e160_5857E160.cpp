// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E160 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_5857e160_5857E160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        push 1f4h
        ; Exact mapped bytes E8 CF 2E 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2e
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        push 1f4h
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 81 EC 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0b0h
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EC E6 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe6
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0b8h]
        push ecx
        ; Exact mapped bytes E8 CD 2F 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2f
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 0b8h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 0b0h
        push eax
        ; Exact mapped bytes E8 C4 E6 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe6
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov ecx, dword ptr [ebp + 0b8h]
        push ecx
        ; Exact mapped bytes E8 A3 2F 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2f
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        add eax, 0b1h
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 0
        push 80010a01h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 95 E7 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 27 2E 2B 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2e
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 B4 00: ret 0xb4
        __asm _emit 0xc2
        __asm _emit 0xb4
        __asm _emit 0x00
    }
}
