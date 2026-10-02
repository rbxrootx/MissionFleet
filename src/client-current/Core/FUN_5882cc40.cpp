// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882CC40 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5882cc40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 462h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 65 F8 FF FF: call 0x5882c4c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 38 45 89 58: call dword ptr [0x58894538]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 04: jne 0x5882cc72
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5882cc77
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
