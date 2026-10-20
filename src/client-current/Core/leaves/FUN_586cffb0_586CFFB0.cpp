// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CFFB0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_586cffb0_586CFFB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE FC DD FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x586cffeb
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 00 00 00: call 0x586d0000
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fffffee1h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E B8 E9 FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 5A DB FF: call 0x58485a60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5a
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
