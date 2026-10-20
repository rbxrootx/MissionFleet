// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769110 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_58769110_58769110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1198h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 0F D4 FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0f
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 0F D4 FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        movzx eax, word ptr [ebp + 8]
        or eax, 10000h
        push eax
        push 0
        push 80012101h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 38 0C 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x0c
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
