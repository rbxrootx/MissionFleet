// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EC80 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_5857ec80_5857EC80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 589604e0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x5857eccc
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes E8 4F 85 F5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        push 0
        push 0
        push 191h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 A0 F5 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 5D F0 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F7 48 F6 FF: call 0x584e35c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x48
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x5857ecf2
        __asm _emit 0xeb
        __asm _emit 0x26
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 0
        push 80010d00h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F DC 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdc
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
