// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B8C0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5878b8c0_5878B8C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 B1 B9 CF FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 A4 0F 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp + 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
