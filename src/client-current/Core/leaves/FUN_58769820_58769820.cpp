// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769820 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58769820_58769820() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF C6 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ee4h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 DA D6 FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xda
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58769861
        __asm _emit 0x74
        __asm _emit 0x14
        push 5
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 E6 E7 FF: call 0x585e7f10
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x58769873
        __asm _emit 0xeb
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E E6 E7 FF: call 0x585e7f10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
