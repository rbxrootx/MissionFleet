// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D132F .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_004d132f_004D132F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 16eh
        push 5c7f78h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 17 9E 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 BC 06 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8E 53 02 00: call 0x4f66e8
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
