// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9680 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_584a9680_584A9680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 5d1745dh
        cmp dword ptr [ebp + 8], 5d1745dh
        ; Exact mapped bytes 76 06: jbe 0x584a96a0
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 D1 E8 FD FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp + 8], 2ch
        mov esp, ebp
        pop ebp
        ret
    }
}
