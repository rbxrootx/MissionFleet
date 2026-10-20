// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520550 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_58520550_58520550() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 9D FE FF: call 0x5850a2b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58520572
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], 0
        ; Exact mapped bytes EB 1B: jmp 0x5852058d
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 35 6D F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 8E FE FF: call 0x58509400
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8e
        __asm _emit 0xfe
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
