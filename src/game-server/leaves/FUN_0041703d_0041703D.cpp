// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041703D .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0041703d_0041703D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 5
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 53 B6 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 74 17 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x17
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
