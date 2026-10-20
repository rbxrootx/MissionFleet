// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587203D0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_587203d0_587203D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F1 59 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x59
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, 5
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 9C 01 00 00: mov word ptr [eax + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 E9 E5 FF: call 0x5857ed80
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
