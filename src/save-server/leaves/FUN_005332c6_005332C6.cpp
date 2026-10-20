// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005332C6 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_005332c6_005332C6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 CA E7 FF FF: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 6C B3 68 00: call dword ptr [0x68b36c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 59 FB FF: call 0x4e8cbe
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
