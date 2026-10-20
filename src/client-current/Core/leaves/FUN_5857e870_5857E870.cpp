// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E870 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_5857e870_5857E870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 8
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B9 27 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x27
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        push 4
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EC DF 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdf
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 4
        lea ecx, [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 D7 DF 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdf
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80013123h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 E0 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe0
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x5857e8fb
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 5A 27 2B 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x27
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
