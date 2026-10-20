// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882DBA0 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5882dba0_5882DBA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 17: je 0x5882dbc7
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 0A A7 F9 FF: call 0x587c82d0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa7
        __asm _emit 0xf9
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
