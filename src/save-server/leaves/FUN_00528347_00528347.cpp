// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528347 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00528347_00528347() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 6E 9E 00 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 3E 98 00 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 58 9E 00 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 28 98 00 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6347cch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 10 FF FF: call 0x51942d
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
