// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58649C20 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58649c20_58649C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        ; Exact mapped bytes E8 79 BB E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbb
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 1d8h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 77359400h
        ; Exact mapped bytes 76 1E: jbe 0x58649c6a
        __asm _emit 0x76
        __asm _emit 0x1e
        ; Exact mapped bytes E8 9F D5 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd5
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 480h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 09 F1 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x58649c87
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1d8h]
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
        ; Exact mapped bytes E8 DA 39 F3 FF: call 0x5857d660
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
