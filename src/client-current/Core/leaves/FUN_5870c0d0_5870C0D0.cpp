// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5870C0D0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_5870c0d0_5870C0D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 20: je 0x5870c0ff
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 B0 DC FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb0
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 0ach
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 72 04 FA FF: call 0x586ac570
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 B1 F8 FF: call 0x586972a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 10: jne 0x5870c122
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5870c13e
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 66 00 00: call 0x58712730
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 0ach
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 56 00 00: call 0x58711740
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
