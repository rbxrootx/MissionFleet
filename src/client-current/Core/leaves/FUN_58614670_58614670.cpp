// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58614670 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58614670_58614670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5861468b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 7D 12: jge 0x586146a3
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 74h]
        ; Exact mapped bytes E8 40 CC 1A 00: call 0x587c12e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcc
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DF: jmp 0x58614682
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov esp, ebp
        pop ebp
        ret
    }
}
