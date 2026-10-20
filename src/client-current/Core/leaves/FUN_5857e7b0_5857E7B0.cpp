// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E7B0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_5857e7b0_5857E7B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 75 41: jne 0x5857e804
        __asm _emit 0x75
        __asm _emit 0x41
        push 0
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 12 00 00: call 0x5857fa20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F AF FA FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0xff
        movzx ecx, ax
        shl ecx, 10h
        push ecx
        push 0
        push 80010014h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 E1 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe1
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 134h], 40000000h
        mov esp, ebp
        pop ebp
        ret
    }
}
