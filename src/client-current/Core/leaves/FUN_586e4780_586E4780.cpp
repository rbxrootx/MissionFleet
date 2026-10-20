// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E4780 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_586e4780_586E4780() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 22: je 0x586e47b4
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8D FF FF FF: call 0x586e4740
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
