// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046007C .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_0046007c_0046007C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 C3 16 0D 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 9F 16 0D 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 7B 16 0D 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 54 16 0D 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 2B 16 0D 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 5ba8c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 88 E8 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 1ch
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 FA 86 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
