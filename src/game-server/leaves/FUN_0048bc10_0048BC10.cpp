// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048BC10 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_0048bc10_0048BC10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 581f5ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C7 17 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 91 CB 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
