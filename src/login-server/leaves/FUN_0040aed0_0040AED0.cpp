// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040AED0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_0040aed0_0040AED0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 34 C5 43 00: call dword ptr [0x43c534]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 AC 77 02 00: call 0x43269a
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x77
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
