// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416C10 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00416c10_00416C10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        and eax, 0ffh
        push eax
        push 0
        push 8002f009h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 05 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 9A 1B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
