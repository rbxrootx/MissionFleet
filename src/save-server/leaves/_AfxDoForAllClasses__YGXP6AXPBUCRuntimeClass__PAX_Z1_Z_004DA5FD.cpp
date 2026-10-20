// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA5FD .. +0x51 bytes.
extern "C" __declspec(naked) void _AfxDoForAllClasses__YGXP6AXPBUCRuntimeClass__PAX_Z1_Z_004DA5FD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 5B 60 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 68 87 06 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 53 00 00 00: call 0x4da670
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x4da62b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x4da641
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
        ; Exact mapped bytes EB E1: jmp 0x4da622
        __asm _emit 0xeb
        __asm _emit 0xe1
        push 0
        ; Exact mapped bytes E8 64 88 06 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
