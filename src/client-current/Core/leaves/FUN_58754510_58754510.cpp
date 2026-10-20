// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754510 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58754510_58754510() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 0c6ch]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 0C 42: mov word ptr [edx + eax*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x42
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 09: je 0x5875453e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 BB FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
