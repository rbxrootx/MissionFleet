// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421167 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00421167_00421167() {
    __asm {
        ; Exact mapped bytes A1 AC A8 44 00: mov eax, dword ptr [0x44a8ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x421172
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 4480a8h
        push 448094h
        ; Exact mapped bytes E8 EC 00 00 00: call 0x42126d
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 448090h
        push 448000h
        ; Exact mapped bytes E8 DD 00 00 00: call 0x42126d
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
