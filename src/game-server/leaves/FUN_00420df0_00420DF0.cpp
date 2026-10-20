// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420DF0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00420df0_00420DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        push 18h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F 02 00 00: call 0x421030
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 23 FA FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 02 FA FF FF: call 0x420830
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 4]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 9D 79 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
