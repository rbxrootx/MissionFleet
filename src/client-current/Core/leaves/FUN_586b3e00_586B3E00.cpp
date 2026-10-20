// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B3E00 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_586b3e00_586B3E00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 5
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 9
        ; Exact mapped bytes 77 62: ja 0x586b3e7e
        __asm _emit 0x77
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 88 3E 6B 58: jmp dword ptr [ecx*4 + 0x586b3e88]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x3e
        __asm _emit 0x6b
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 5
        ; Exact mapped bytes EB 4F: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov dword ptr [ebp - 4], 5
        ; Exact mapped bytes EB 46: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 4
        ; Exact mapped bytes EB 3D: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 4], 3
        ; Exact mapped bytes EB 34: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes EB 2B: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes EB 22: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 19: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x586b3e7e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 6
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
