// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB4FD .. +0x51 bytes.
extern "C" __declspec(naked) void _AfxDoForAllClasses__YGXP6AXPBUCRuntimeClass__PAX_Z1_Z_004FB4FD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 3B 9F 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 C8 C7 04 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 53 00 00 00: call 0x4fb570
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x4fb52b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x4fb541
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 55 08: call dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x08
        add esp, 8
        ; Exact mapped bytes EB E1: jmp 0x4fb522
        __asm _emit 0xeb
        __asm _emit 0xe1
        push 0
        ; Exact mapped bytes E8 C4 C8 04 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
