// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045B116 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0045b116_0045B116() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 0D 00 00: call 0x45be40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B 01 0F 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
