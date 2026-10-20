// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58747A90 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58747a90_58747A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 51 38: mov word ptr [ecx + 0x38], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 1A D7 FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 4
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1C 61 FF FF: call 0x5873dbf0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
