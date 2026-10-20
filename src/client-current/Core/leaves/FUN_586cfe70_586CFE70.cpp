// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CFE70 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_586cfe70_586CFE70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C C2 DB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 11ch
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB B9 E9 FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 2F DB FF: call 0x58482ea0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
