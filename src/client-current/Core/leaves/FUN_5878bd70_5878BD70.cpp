// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878BD70 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5878bd70_5878BD70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A4 F9 FF FF: call 0x5878b730
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2B B7 CF FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 10 03 00 00: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 F7 54 D1 FF: call 0x584a12a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A8 F9 FF FF: call 0x5878b760
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
