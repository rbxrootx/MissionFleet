// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873E870 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_5873e870_5873E870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 6F 00 00: call 0x587457d0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5873e889
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x5873e8da
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 67 00 00: call 0x58745080
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5873e899
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 41: jmp 0x5873e8da
        __asm _emit 0xeb
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 13 D7 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 61 D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x61
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 35ch]
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x5873e8d5
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 35 89 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x89
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 2715h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F A4 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5873e8da
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
