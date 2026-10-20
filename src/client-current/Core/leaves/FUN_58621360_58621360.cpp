// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58621360 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58621360_58621360() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 26: je 0x58621393
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 81 E9 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E FC FF FF: call 0x58620fc0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x58621393
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 13 00 00: call 0x58622730
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
