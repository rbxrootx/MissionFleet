// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431946 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00431946_00431946() {
    __asm {
        mov eax, 43a94ch
        ; Exact mapped bytes E8 B8 DC FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ecx + 10h]
        and dword ptr [ebp - 4], 0
        add ecx, 10h
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x431965
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
