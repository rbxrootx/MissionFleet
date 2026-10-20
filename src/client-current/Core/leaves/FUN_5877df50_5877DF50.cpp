// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877DF50 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_5877df50_5877DF50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 19: jne 0x5877df78
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2d8h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB 18 D2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5877df8f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2d8h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B2 18 D2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x18
        __asm _emit 0xd2
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
