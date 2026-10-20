// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585015C0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_585015c0_585015C0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 44 59 F8 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 35 59 F8 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D3 17 00 00: call 0x58502dc0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
