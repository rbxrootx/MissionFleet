// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460616 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00460616_00460616() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 29 11 0D 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 05 11 0D 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 E1 10 0D 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 BA 10 0D 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 91 10 0D 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 5ba980h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EE E2 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 1ch
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 60 81 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x81
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
