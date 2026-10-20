// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F2980 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_585f2980_585F2980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585f299b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 29: jge 0x585f29ca
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 EB 3F E9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 150h]
        ; Exact mapped bytes E8 D9 3F E9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x585f2992
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 46 F9 FF: call 0x58586fe0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x585f29e8
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 DE FD FF: call 0x585d0820
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
