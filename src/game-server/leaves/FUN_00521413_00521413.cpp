// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00521413 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_00521413_00521413() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 75 42: jne 0x521473
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 27 C7 00 00: call 0x52db67
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 0cch
        ; Exact mapped bytes E8 E3 DB FC FF: call 0x4ef040
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 10 5A FE FF: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
