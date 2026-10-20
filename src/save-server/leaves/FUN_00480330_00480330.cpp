// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00480330 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_00480330_00480330() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 DC 8A 68 00: cmp eax, dword ptr [0x688adc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 73 3D: jae 0x48037b
        __asm _emit 0x73
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x48037b
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 6889a0h]
        mov eax, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 19: jmp 0x480394
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 00 D3 FE FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 05 D3 FE FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        pop ebp
        ret
    }
}
