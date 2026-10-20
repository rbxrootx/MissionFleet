// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4E92 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_004f4e92_004F4E92() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x4f4ea9
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 06 07 04 00: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F 6C 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 58 26 5E 00: call dword ptr [0x5e2658]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
