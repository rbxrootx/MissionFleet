// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C16C0 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_004c16c0_004C16C0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 20 F2 5D 00: cmp eax, dword ptr [0x5df220]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 73 3D: jae 0x4c170b
        __asm _emit 0x73
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x4c170b
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 5df120h]
        mov eax, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 19: jmp 0x4c1724
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 60 FB FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 65 FB FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        pop ebp
        ret
    }
}
