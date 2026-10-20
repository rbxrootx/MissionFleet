// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588799F1 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_588799f1_588799F1() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, -2
        ; Exact mapped bytes 75 15: jne 0x58879a13
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 57 8A FE FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 64 8A FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes EB 43: jmp 0x58879a56
        __asm _emit 0xeb
        __asm _emit 0x43
        test ecx, ecx
        ; Exact mapped bytes 78 27: js 0x58879a3e
        __asm _emit 0x78
        __asm _emit 0x27
        ; Exact mapped bytes 3B 0D B0 9B 96 58: cmp ecx, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 1F: jae 0x58879a3e
        __asm _emit 0x73
        __asm _emit 0x1f
        mov eax, ecx
        and ecx, 3fh
        shr eax, 6
        imul ecx, ecx, 38h
        mov eax, dword ptr [eax*4 + 589699b0h]
        test byte ptr [eax + ecx + 28h], 1
        ; Exact mapped bytes 74 06: je 0x58879a3e
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [eax + ecx + 18h]
        pop ebp
        ret
        ; Exact mapped bytes E8 17 8A FE FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 24 8A FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 55 75 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop ebp
        ret
    }
}
