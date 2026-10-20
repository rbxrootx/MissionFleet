// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862A9E0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_5862a9e0_5862A9E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 60h], cl
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 60h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 77 34: ja 0x5862aa3f
        __asm _emit 0x77
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 48 AA 62 58: jmp dword ptr [edx*4 + 0x5862aa48]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xaa
        __asm _emit 0x62
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 14 00 00: call 0x5862be70
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1F: jmp 0x5862aa3f
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 39 00 00: call 0x5862e3c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 14: jmp 0x5862aa3f
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 23 00 00: call 0x5862cdd0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x5862aa3f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 06 00 00: call 0x5862b060
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
