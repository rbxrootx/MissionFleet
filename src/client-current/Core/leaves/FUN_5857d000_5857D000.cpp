// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D000 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_5857d000_5857D000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 83ah
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 1E 40 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x40
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], edx
        push 839h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 4E F8 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 839h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes A1 34 05 96 58: mov eax, dword ptr [0x58960534]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 30 05 96 58: mov ecx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 80010f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 14 F9 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x5857d09c
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 B9 3F 2B 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3f
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
