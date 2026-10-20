// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B38D .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_5883b38d_5883B38D() {
    __asm {
        push ebp
        mov ebp, esp
        cmp byte ptr [ebp + 8], 0
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov esi, ecx
        ; Exact mapped bytes 74 29: je 0x5883b3c6
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 23: jb 0x5883b3c6
        __asm _emit 0x72
        __asm _emit 0x23
        push ebx
        mov ebx, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x5883b3b5
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 DE 14 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [esi + 14h]
        push 1
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 EA EE FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop ebx
        mov dword ptr [esi + 14h], 0fh
        cmp dword ptr [esi + 14h], 10h
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes 72 02: jb 0x5883b3d8
        __asm _emit 0x72
        __asm _emit 0x02
        mov esi, dword ptr [esi]
        mov byte ptr [esi + edi], 0
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
