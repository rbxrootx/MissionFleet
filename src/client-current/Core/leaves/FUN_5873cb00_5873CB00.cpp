// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873CB00 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5873cb00_5873CB00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 92 D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 62h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 60h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 09 E4 FF: call 0x5857d500
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
