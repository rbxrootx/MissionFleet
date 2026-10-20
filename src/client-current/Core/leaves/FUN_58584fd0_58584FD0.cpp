// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584FD0 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_58584fd0_58584FD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 D1 F2 FF: call 0x584b2130
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd1
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 04: jne 0x58584feb
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 57: jmp 0x58585042
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 8]
        cmp edx, 1
        ; Exact mapped bytes 75 0E: jne 0x58585005
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD FD FF FF: call 0x58584dc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x58585042
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 9]
        cmp edx, 1
        ; Exact mapped bytes 75 0A: jne 0x5858501b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 FE FF FF: call 0x58584f00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x58585042
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D FD FF FF: call 0x58584d90
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 15: jne 0x58585040
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 0
        push 588aaa3ch
        push 0
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x58585042
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
