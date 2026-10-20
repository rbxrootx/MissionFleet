// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB8F4 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_004fb8f4_004FB8F4() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1B: je 0x4fb918
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 7A 59 FB FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 71 02 00 00: call 0x4fbb83
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 98 01 00 00: call 0x4fbab0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
