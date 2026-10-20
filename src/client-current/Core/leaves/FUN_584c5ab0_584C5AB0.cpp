// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5AB0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_584c5ab0_584C5AB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 4D FE FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C2 48 FE FF: call 0x584aa3a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
