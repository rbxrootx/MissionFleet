// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58835307 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58835307_58835307() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        lea eax, [ebp - 4]
        xor ebx, ebx
        push eax
        push 0f003fh
        push ebx
        push 588f1b20h
        ; Exact mapped bytes E8 31 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x58835365
        __asm _emit 0x75
        __asm _emit 0x32
        push 4
        lea eax, [ebp + 8]
        push eax
        push 4
        push ebx
        push 588f1b68h
        ; Exact mapped bytes E8 0D 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 4]
        xor edx, edx
        movzx ebx, bl
        inc edx
        test eax, eax
        cmove ebx, edx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov al, bl
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
