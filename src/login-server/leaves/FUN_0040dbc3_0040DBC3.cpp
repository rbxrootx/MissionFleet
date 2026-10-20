// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040DBC3 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0040dbc3_0040DBC3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 84 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 120h
        push eax
        push 44971ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E2 7B 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 124h
        push edx
        push 449728h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C1 7B 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
