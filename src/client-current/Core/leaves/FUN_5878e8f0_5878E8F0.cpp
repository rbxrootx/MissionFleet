// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878E8F0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5878e8f0_5878E8F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a0h], 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 25 FF FF: call 0x58780e20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 88 D4 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x88
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B D1 F1 FF: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd1
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 DD 5A F9 FF: call 0x58724410
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5a
        __asm _emit 0xf9
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
