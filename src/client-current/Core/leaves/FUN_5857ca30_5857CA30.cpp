// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CA30 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_5857ca30_5857CA30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 8
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F9 45 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf9
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
        ; Exact mapped bytes E8 AE 03 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1C FE 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 07 FE 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfe
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
        push 80013121h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E5 FE 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 90 45 2B 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x45
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
