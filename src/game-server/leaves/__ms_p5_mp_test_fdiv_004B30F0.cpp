// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B30F0 .. +0x42 bytes.
extern "C" __declspec(naked) void __ms_p5_mp_test_fdiv_004B30F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push 58c73ch
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x4b3129
        __asm _emit 0x74
        __asm _emit 0x1f
        push 58c720h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 07: je 0x4b3129
        __asm _emit 0x74
        __asm _emit 0x07
        push 0
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes EB 05: jmp 0x4b312e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 62 FF FF FF: call 0x4b3090
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
