// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E450 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5857e450_5857E450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 65 F0 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 34 FF FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 75 29: jne 0x5857e49c
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 80010d03h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F5 E4 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe4
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
