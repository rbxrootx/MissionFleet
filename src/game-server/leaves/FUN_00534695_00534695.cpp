// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534695 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_00534695_00534695() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 D1 F9 FF: call 0x4d1830
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
