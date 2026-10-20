// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859E010 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_5859e010_5859E010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 88 06 0A 00 00: mov word ptr [eax + 0xa06], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0a06h]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 14 45 CE 2D 90 58: mov dx, word ptr [eax*2 + 0x58902dce]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0xce
        __asm _emit 0x2d
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 91 D8 00 00 00: mov word ptr [ecx + 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 7a4h], 0
        ; Exact mapped bytes 74 4B: je 0x5859e0a3
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 7a4h]
        mov dword ptr [ebp - 8], eax
        movzx ecx, word ptr [ebp + 8]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C3 17 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x17
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 7a4h]
        mov dword ptr [ebp - 0ch], ecx
        movzx edx, word ptr [ebp + 8]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9E 17 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
