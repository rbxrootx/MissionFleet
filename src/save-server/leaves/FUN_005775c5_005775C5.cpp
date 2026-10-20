// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005775C5 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_005775c5_005775C5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0dch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 37 FD FF: call 0x54adaa
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
