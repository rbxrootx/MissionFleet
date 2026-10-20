// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B5D9 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0051b5d9_0051B5D9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 11dh
        push 5cb0ach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6D FB FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 D1 47 FB FF: call 0x4cfdc9
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
