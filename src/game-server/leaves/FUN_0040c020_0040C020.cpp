// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C020 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_0040c020_0040C020() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 04 08 00: call 0x48c470
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 581090h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 86 C7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
