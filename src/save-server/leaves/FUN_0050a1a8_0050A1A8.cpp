// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A1A8 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_0050a1a8_0050A1A8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 63 FF FF: call 0x500570
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        push ecx
        push 67920ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C E6 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 35 E9 01 00: call 0x528b0b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 679218h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 E6 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A6 E8 01 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        push 679228h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D E6 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
