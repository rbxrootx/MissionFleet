// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EA40 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_5857ea40_5857EA40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0ch
        ; Exact mapped bytes E8 F2 25 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x25
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 25 DE 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xde
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0ch
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        push 0
        push 80010a03h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 09 DF 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xdf
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
