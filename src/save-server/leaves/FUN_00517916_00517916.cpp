// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517916 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_00517916_00517916() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 15: jne 0x51793b
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 F1 FF FF: call 0x516a3e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1ch], ecx
        mov eax, 1
        ; Exact mapped bytes EB 13: jmp 0x51794e
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 465h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 3C 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
