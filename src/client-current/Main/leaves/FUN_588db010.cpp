// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DB010 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_588db010() {
    __asm {
        mov eax, dword ptr [ecx + 6028h]
        mov dword ptr [eax + 0c4h], 40000000h
        cmp dword ptr [ecx + 1258h], 0
        ; Exact mapped bytes 74 10: je 0x588db039
        __asm _emit 0x74
        __asm _emit 0x10
        lea eax, [ecx + 4]
        mov ecx, dword ptr [ecx + 6020h]
        push eax
        push eax
        ; Exact mapped bytes E8 B7 B1 E7 FF: call 0x587561f0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb1
        __asm _emit 0xe7
        __asm _emit 0xff
        ret
    }
}
