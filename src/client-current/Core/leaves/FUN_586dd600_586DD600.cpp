// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DD600 .. +0x19A bytes.
extern "C" __declspec(naked) void FUN_586dd600_586DD600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8ch], ecx
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + 4c8h]
        ; Exact mapped bytes E8 C6 C0 E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc0
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 0F 8E A4 00 00 00: jle 0x586dd6e1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 A8 35 0E 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x35
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 1C 41 89 58: call dword ptr [0x5889411c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 75 4F: jne 0x586dd6cd
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + 4c8h]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 88h]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 CB 32 0E 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x32
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + 4cch]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 88h]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 A4 32 0E 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x32
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 88h]
        sub edx, 1
        mov dword ptr [ebp - 88h], edx
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x586dd630
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 80h
        push 0
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 1C F7 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 25: jne 0x586dd722
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 B7 DC FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 31 20 02 00: call 0x586ff750
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 23: jmp 0x586dd745
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 B7 DC FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb7
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push 2
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 0C 20 02 00: call 0x586ff750
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + ecx + 498h]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 7F BF E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xbf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 07 DA 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 BC 38 15 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x38
        __asm _emit 0x15
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
