// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860A460 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_5860a460_5860A460() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 588adec8h
        ; Exact mapped bytes E8 7F 7B F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7b
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 FF FF FF: call 0x5860a3b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 588adee3h
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 FF FF FF: call 0x5860a3b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 588adee4h
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 FF FF FF: call 0x5860a3b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 588adee8h
        ; Exact mapped bytes E8 49 7B F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7b
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        push eax
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB FE FF FF: call 0x5860a3b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 588adee5h
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC FE FF FF: call 0x5860a3b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 588adee6h
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD FE FF FF: call 0x5860a3b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 588adf04h
        ; Exact mapped bytes E8 13 7B F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7b
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        push eax
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 FE FF FF: call 0x5860a3b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 588adee7h
        push 7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 FE FF FF: call 0x5860a3b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
