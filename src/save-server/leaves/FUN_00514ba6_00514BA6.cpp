// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514BA6 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_00514ba6_00514BA6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 BE CF 01 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 1A: jne 0x514bd1
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        cmp dword ptr [eax + 50h], 0
        setne cl
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 08: jmp 0x514bd9
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 31 02 00: call 0x537d2d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
