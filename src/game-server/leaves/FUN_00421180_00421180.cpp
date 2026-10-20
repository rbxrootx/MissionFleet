// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421180 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00421180_00421180() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 C8 00 00 00: call 0x421260
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dl, byte ptr [eax]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E1 00 00 00: call 0x421290
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 24 76 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
