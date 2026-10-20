// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D20CD .. +0x5C bytes.
extern "C" __declspec(naked) void __1_AFX_DEBUG_STATE__UAE_XZ_004D20CD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 586448h
        ; Exact mapped bytes E8 6C 9F FD FF: call 0x4ac050
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        push -1
        ; Exact mapped bytes E8 55 96 FD FF: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffffdfh
        push ecx
        ; Exact mapped bytes E8 43 96 FD FF: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 15 8C E8 5D 00: mov edx, dword ptr [0x5de88c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 04 EA FD FF: call 0x4b0b10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A1 88 E8 5D 00: mov eax, dword ptr [0x5de888]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 96 98 FD FF: call 0x4ab9b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B B6 FB FF: call 0x48d7c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
