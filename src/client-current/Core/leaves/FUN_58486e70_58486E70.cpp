// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486E70 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58486e70_58486E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 01 04 00 00: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F4 59 3C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp + 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
