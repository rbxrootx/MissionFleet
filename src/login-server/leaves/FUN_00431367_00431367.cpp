// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431367 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_00431367_00431367() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [edx + 4]
        cmp eax, 100h
        ; Exact mapped bytes 72 07: jb 0x43137c
        __asm _emit 0x72
        __asm _emit 0x07
        cmp eax, 108h
        ; Exact mapped bytes 76 0E: jbe 0x43138a
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp eax, 200h
        ; Exact mapped bytes 72 0F: jb 0x431392
        __asm _emit 0x72
        __asm _emit 0x0f
        cmp eax, 209h
        ; Exact mapped bytes 77 08: ja 0x431392
        __asm _emit 0x77
        __asm _emit 0x08
        push edx
        ; Exact mapped bytes E8 2F CE FF FF: call 0x42e1bf
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x431394
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
