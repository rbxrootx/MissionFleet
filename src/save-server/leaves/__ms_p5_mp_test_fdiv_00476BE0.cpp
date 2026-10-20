// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476BE0 .. +0x42 bytes.
extern "C" __declspec(naked) void __ms_p5_mp_test_fdiv_00476BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push 63f2c8h
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x476c19
        __asm _emit 0x74
        __asm _emit 0x1f
        push 63f2ach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 07: je 0x476c19
        __asm _emit 0x74
        __asm _emit 0x07
        push 0
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes EB 05: jmp 0x476c1e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 62 FF FF FF: call 0x476b80
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
