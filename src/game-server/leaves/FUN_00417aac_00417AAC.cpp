// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417AAC .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_00417aac_00417AAC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40cc8h]
        mov ecx, dword ptr [edx + 0ca0h]
        ; Exact mapped bytes E8 17 20 01 00: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 01 0D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0d
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
