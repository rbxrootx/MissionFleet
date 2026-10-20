// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58721010 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58721010_58721010() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A DC E5 FF: call 0x5857ec80
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xdc
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 9C 01 00 00: mov word ptr [edx + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
