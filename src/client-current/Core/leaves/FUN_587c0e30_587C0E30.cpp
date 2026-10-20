// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0E30 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_587c0e30_587C0E30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 3B CC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3b
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 4A CC FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4a
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x587c0e6a
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 3B CC FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3b
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 36 D6 FF: call 0x58524470
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
