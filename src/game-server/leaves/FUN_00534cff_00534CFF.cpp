// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534CFF .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00534cff_00534CFF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 5c772ch
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 26 FD FF FF: call 0x534a50
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
