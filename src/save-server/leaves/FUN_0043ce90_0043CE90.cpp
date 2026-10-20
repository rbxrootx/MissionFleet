// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CE90 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0043ce90_0043CE90() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43ceaa
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 04 F6 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x43ceba
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 89 68 00 00: call 0x443740
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        pop ebp
        ret
    }
}
