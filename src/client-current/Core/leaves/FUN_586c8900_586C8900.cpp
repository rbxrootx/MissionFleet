// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C8900 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_586c8900_586C8900() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 04 00 00: call 0x586c8d20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x586c891a
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 27 F7 DB FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 00 00 00: call 0x586c8930
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
