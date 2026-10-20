// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00521027 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00521027_00521027() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 63 FF FF: call 0x51733f
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        push ecx
        push 5cca34h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 3A 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 86 3D 01 00: call 0x534ddb
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 5cca40h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 3A 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F7 3C 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        push 5cca50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 3A 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x3a
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
