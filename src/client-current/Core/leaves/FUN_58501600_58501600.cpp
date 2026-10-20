// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501600 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58501600_58501600() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 04 59 F8 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 F5 58 F8 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 E6 58 F8 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A4 17 00 00: call 0x58502de0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
