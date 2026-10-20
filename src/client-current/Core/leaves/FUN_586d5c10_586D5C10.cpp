// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D5C10 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_586d5c10_586D5C10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c4h]
        ; Exact mapped bytes E8 99 AC 0E 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xac
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4a4h]
        mov dword ptr [ebp - 8], edx
        push 2c0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F0 FA 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
