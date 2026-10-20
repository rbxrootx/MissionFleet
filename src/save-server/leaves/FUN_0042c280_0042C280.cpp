// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C280 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_0042c280_0042C280() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 68 C1 68 00: call dword ptr [0x68c168]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 8B 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, -1
        setne cl
        mov eax, ecx
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 2E 8B 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
