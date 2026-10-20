// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B1FB .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_5887b1fb_5887B1FB() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, -2
        ; Exact mapped bytes 75 0D: jne 0x5887b215
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 62 72 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes EB 38: jmp 0x5887b24d
        __asm _emit 0xeb
        __asm _emit 0x38
        test ecx, ecx
        ; Exact mapped bytes 78 24: js 0x5887b23d
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 3B 0D B0 9B 96 58: cmp ecx, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 1C: jae 0x5887b23d
        __asm _emit 0x73
        __asm _emit 0x1c
        mov eax, ecx
        and ecx, 3fh
        shr eax, 6
        imul ecx, ecx, 38h
        mov eax, dword ptr [eax*4 + 589699b0h]
        movzx eax, byte ptr [eax + ecx + 28h]
        and eax, 40h
        pop ebp
        ret
        ; Exact mapped bytes E8 2D 72 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 5E 5D FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        pop ebp
        ret
    }
}
