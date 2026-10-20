// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489400 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00489400_00489400() {
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
        ; Exact mapped bytes FF 15 14 29 5E 00: call dword ptr [0x5e2914]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B3 F3 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, -1
        setne cl
        mov eax, ecx
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 9E F3 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
