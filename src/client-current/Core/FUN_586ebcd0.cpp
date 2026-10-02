// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Reserves the selected resource-line vector for the parsed line count.
// Indexed function extent: 0x586EBCD0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_586ebcd0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 E4 E1 FF: call 0x5850a170
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe4
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 20: jbe 0x586ebd04
        __asm _emit 0x76
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 80 DB FF: call 0x584a3d70
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0xdb
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x586ebcf7
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 4A C3 D9 FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc3
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED C1 FF FF: call 0x586e7ef0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc1
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
