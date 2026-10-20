// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562D9C .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_00562d9c_00562D9C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 7F FE FF: call 0x54adaa
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
