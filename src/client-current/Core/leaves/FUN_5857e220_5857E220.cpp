// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E220 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_5857e220_5857E220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 10 2E 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x2e
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C3 EB 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xeb
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 9ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 2E E6 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe6
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 12 2F 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2f
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 9ch
        push edx
        ; Exact mapped bytes E8 0B E6 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe6
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 EF 2E 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2e
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 E0 2E 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + eax + 9ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 CF E5 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe5
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 0
        push 80010a05h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AE E6 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe6
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 40 2D 2B 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2d
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
