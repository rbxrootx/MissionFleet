// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A321D .. +0x5C bytes.
extern "C" __declspec(naked) void __1_AFX_DEBUG_STATE__UAE_XZ_004A321D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 636e78h
        ; Exact mapped bytes E8 4C 57 FC FF: call 0x468980
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        push -1
        ; Exact mapped bytes E8 95 4C FC FF: call 0x467ed0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffffdfh
        push ecx
        ; Exact mapped bytes E8 83 4C FC FF: call 0x467ed0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 15 E4 6C 68 00: mov edx, dword ptr [0x686ce4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 E4 9B FC FF: call 0x46ce40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A1 E0 6C 68 00: mov eax, dword ptr [0x686ce0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F6 4F FC FF: call 0x468260
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3B 6B FA FF: call 0x449db0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
