// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58700990 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_58700990_58700990() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 7E 02: jle 0x587009ba
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 50: jmp 0x58700a0a
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 88h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x587009ca
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 40: jmp 0x58700a0a
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [ecx + 58948c34h]
        ; Exact mapped bytes E8 B3 67 DD FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x67
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 29: jle 0x58700a0a
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [edx + 58948c34h]
        ; Exact mapped bytes E8 9C 67 DD FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x67
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 12: jle 0x58700a0a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 2C 00 00: call 0x587036d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 88h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
