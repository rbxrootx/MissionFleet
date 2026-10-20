// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9440 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_004c9440_004C9440() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 580499h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 30h
        lea eax, [ebp - 3ch]
        push eax
        push 58ed48h
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 54 01 00 00: call 0x4c95c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 21 00 00 00: call 0x4c94a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 59f7c0h
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 93 6E FE FF: call 0x4b0320
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
