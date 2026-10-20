// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520A40 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58520a40_58520A40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x58520a5d
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 FD FF FF: call 0x585207e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 4]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58520a71
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 FD FF FF: call 0x585207e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 08: jne 0x58520a81
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 19: je 0x58520a9a
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 08: je 0x58520a91
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 09: jne 0x58520a9a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x58520aa1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        movzx eax, byte ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
