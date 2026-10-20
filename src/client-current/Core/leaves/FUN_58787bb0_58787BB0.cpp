// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787BB0 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_58787bb0_58787BB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 E8 D5 FF: call 0x584e6400
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 44: jne 0x58787c0b
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 98h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 00 00 00: call 0x58787c10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 6ah]
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 6bh]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 01 00 00: call 0x58787d50
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 DB D0 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xdb
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        sub eax, 3e8h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 E2 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe2
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
