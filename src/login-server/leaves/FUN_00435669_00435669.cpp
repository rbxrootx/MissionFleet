// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435669 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00435669_00435669() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 100h
        lea eax, [ebp - 100h]
        push 100h
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7B CF FF FF: call 0x432601
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x43569f
        __asm _emit 0x74
        __asm _emit 0x15
        push dword ptr [ebp + 14h]
        lea eax, [ebp - 100h]
        push dword ptr [ebp + 10h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 00 00 00: call 0x4356a3
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
