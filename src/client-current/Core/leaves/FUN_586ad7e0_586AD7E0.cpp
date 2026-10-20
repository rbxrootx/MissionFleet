// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AD7E0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_586ad7e0_586AD7E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF E6 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E4 E6 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe6
        __asm _emit 0xdd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 6C E7 FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7F 6C E7 FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6c
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
