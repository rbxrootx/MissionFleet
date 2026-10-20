// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BDAF0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_587bdaf0_587BDAF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        shl eax, 3
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes A1 28 5F 96 58: mov eax, dword ptr [0x58965f28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 8B 15 28 5F 96 58: mov edx, dword ptr [0x58965f28]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ecx + 54h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
