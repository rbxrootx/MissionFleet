// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042337C .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_0042337c_0042337C() {
    __asm {
        ; Exact mapped bytes A1 70 FE 44 00: mov eax, dword ptr [0x44fe70]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0F: je 0x423394
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes FF 74 24 04: push dword ptr [esp + 4]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 74 04: je 0x423394
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
