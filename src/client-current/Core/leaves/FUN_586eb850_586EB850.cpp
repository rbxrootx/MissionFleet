// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EB850 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_586eb850_586EB850() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 85 DB FF: call 0x584a3d70
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x586eb86a
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 D7 C7 D9 FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc7
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 00 00 00: call 0x586eb880
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
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
