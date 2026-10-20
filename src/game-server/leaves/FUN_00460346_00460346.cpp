// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460346 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00460346_00460346() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 F9 13 0D 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 D5 13 0D 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 B1 13 0D 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 8A 13 0D 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 61 13 0D 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        push 5ba920h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BE E5 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 1ch
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 30 84 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x84
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
