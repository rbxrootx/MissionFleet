// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040DE03 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0040de03_0040DE03() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC 81 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 120h
        push eax
        push 449778h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A2 79 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 124h
        push edx
        push 449780h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 81 79 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x79
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
