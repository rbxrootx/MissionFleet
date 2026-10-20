// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EA670 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_586ea670_586EA670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 98 44 89 58: call dword ptr [0x58894498]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x586ea689
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4A: jmp 0x586ea6d3
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 88 44 89 58: call dword ptr [0x58894488]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        push 1
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 9C 44 89 58: call dword ptr [0x5889449c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 8C 44 89 58: call dword ptr [0x5889448c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 94 44 89 58: call dword ptr [0x58894494]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 9C 44 89 58: call dword ptr [0x5889449c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
