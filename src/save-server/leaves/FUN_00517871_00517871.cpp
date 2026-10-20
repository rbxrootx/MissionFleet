// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517871 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00517871_00517871() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 3c3h
        push 674cach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D3 29 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x5178a3
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        ; Exact mapped bytes E8 09 EB 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x5178c9
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 04 01 00: call 0x527cbe
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 3c9h
        push 674cach
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 9F 29 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 93 F9 FF: call 0x4b0c1c
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
