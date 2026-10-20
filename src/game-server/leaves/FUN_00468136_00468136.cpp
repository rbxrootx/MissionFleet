// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468136 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_00468136_00468136() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 120h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 1e7ch
        push eax
        ; Exact mapped bytes E8 17 12 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1f9ch
        push ecx
        ; Exact mapped bytes E8 01 12 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 4
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 1fech
        push edx
        ; Exact mapped bytes E8 EB 11 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 4E 06 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
