// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2790 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_587b2790_587B2790() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 27 1C 00 00: call 0x587b43d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 01 4B CD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x4b
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 AD D6 FF: call 0x5851d4e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xad
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
