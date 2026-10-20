// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9AD0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_587b9ad0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push 0
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x587b9af4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [esp + 10h]
        push edx
        push eax
        mov eax, dword ptr [esp + 10h]
        push 1
        push eax
        push 80011011h
        ; Exact mapped bytes E8 7F 71 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x71
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 8]
        push 0
        push 0
        push 2
        push edx
        push 80011011h
        ; Exact mapped bytes E8 67 71 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x71
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
