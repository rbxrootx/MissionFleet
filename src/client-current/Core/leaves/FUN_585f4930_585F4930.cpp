// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4930 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_585f4930_585F4930() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 200h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 298h
        push ecx
        ; Exact mapped bytes E8 41 7F 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7f
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
