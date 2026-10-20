// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B070 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5850b070_5850B070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 65 49 FC FF: call 0x584cf9f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 DA FF FF: call 0x58508b70
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
