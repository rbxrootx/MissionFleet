// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58652090 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58652090_58652090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        ; Exact mapped bytes E8 09 37 E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x37
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 2f4h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 77359400h
        ; Exact mapped bytes 76 1E: jbe 0x586520da
        __asm _emit 0x76
        __asm _emit 0x1e
        ; Exact mapped bytes E8 2F 51 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 480h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 99 6C E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x586520f7
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2f4h]
        push eax
        ; Exact mapped bytes 8B 0D 30 05 96 58: mov ecx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A B5 F2 FF: call 0x5857d660
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb5
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
